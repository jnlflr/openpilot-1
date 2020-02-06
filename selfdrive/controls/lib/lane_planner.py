from common.numpy_fast import interp
import numpy as np
from cereal import log

CAMERA_OFFSET = 0.  # m from center car to camera
LANE_WIDTH_K = np.exp(-.25 / 60) # decay factor for exponential smoothing, reaches steady state in about 2*denominator seconds at 1/numerator Hz
LANE_WIDTH_FACTOR = 1.0 # scaling factor to manipulate apparent lane width
EXIT_FILTER_C1 = .0003 # exit filter curvature difference threshold
EXIT_FILTER_C2 = .02 # exit filter angle difference threshold

def compute_path_pinv(l=50):
  deg = 3
  x = np.arange(l*1.0)
  X = np.vstack(tuple(x**n for n in range(deg, -1, -1))).T
  pinv = np.linalg.pinv(X)
  return pinv


def model_polyfit(points, path_pinv):
  return np.dot(path_pinv, [float(x) for x in points])


def calc_d_poly(l_poly, r_poly, p_poly, l_prob, r_prob, lane_width):
  # This will improve behaviour when lanes suddenly drop out
  lane_width = min(4.0, lane_width)
  l_prob = l_prob * interp(abs(l_poly[3]), [2, 2.5], [1.0, 0.0])
  r_prob = r_prob * interp(abs(r_poly[3]), [2, 2.5], [1.0, 0.0])

  path_from_left_lane = l_poly.copy()
  path_from_left_lane[3] -= lane_width / 2.0
  path_from_right_lane = r_poly.copy()
  path_from_right_lane[3] += lane_width / 2.0

  lr_prob = l_prob + r_prob - l_prob * r_prob

  if l_prob > .10 and r_prob > .10:
    d_poly_lane = (l_prob * path_from_left_lane + r_prob * path_from_right_lane) / (l_prob + r_prob + 0.0001)
    d_poly_out = lr_prob * d_poly_lane + (1.0 - lr_prob) * p_poly
  elif l_prob < .10 and r_prob < .10:
    d_poly_out = p_poly
  elif l_prob < .10:
    d_poly_out = path_from_right_lane
  elif r_prob < .10:
    d_poly_out = path_from_left_lane

  return d_poly_out


class LanePlanner():
  def __init__(self):
    self.l_poly = [0., 0., 0., 0.]
    self.r_poly = [0., 0., 0., 0.]
    self.p_poly = [0., 0., 0., 0.]
    self.d_poly = [0., 0., 0., 0.]

    self.lane_width = 3.7 # metres, initial lane width

    self.l_prob = 0.
    self.r_prob = 0.

    self.l_lane_change_prob = 0.
    self.r_lane_change_prob = 0.

    self._path_pinv = compute_path_pinv()
    self.x_points = np.arange(50)

    self.lanes_valid = False

    self.exeCtr = 0 # running counter to track times executed, mod 5

  def parse_model(self, md, cs):
    # pass in the carState to extract Bosch lane polynomials and insert them in place of the OP model lane polynomials
    self.l_poly = np.array([cs.lPoly.c0,cs.lPoly.c1,cs.lPoly.c2,cs.lPoly.c3])
    self.r_poly = np.array([cs.rPoly.c0,cs.rPoly.c1,cs.rPoly.c2,cs.rPoly.c3])
    self.p_poly = np.array([.5*self.l_poly[i]+.5*self.r_poly[i] for i in range(len(self.l_poly))]) # take the middle of the lane lines as the desired path
    self.l_prob = cs.lPoly.prob
    self.r_prob = cs.rPoly.prob

    self.l_isSolid = cs.lPoly.isSolid
    self.l_isDashed = cs.lPoly.isDashed
    self.r_isSolid = cs.rPoly.isSolid
    self.r_isDashed = cs.rPoly.isDashed

    if len(md.meta.desirePrediction):
      self.l_lane_change_prob = md.meta.desirePrediction[log.PathPlan.Desire.laneChangeLeft - 1]
      self.r_lane_change_prob = md.meta.desirePrediction[log.PathPlan.Desire.laneChangeRight - 1]

  def update_d_poly(self, v_ego):
    # set lanes valid flag
    if self.l_prob < .10 and self.r_prob < .10:
      self.lanes_valid = False
    else:
      self.lanes_valid = True
  
    # only offset left and right lane lines; offsetting p_poly does not make sense
    self.l_poly[3] += CAMERA_OFFSET
    self.r_poly[3] += CAMERA_OFFSET

    # freeway exit filtering, does not handle when both lines are solid
    if abs(self.l_poly[2] - self.r_poly[2]) > EXIT_FILTER_C2 or abs(self.l_poly[1] - self.r_poly[1]) > EXIT_FILTER_C1:
      if self.l_isSolid and self.r_prob > .10:
        self.l_prob = 0
      elif self.r_isSolid and self.l_prob > .10:
        self.r_prob = 0

    # exponentially-smoothed lane width estimate
    if self.exeCtr == 0:
      if self.l_prob > .10 and self.r_prob > .10:
        self.lane_width = LANE_WIDTH_K * self.lane_width + (1-LANE_WIDTH_K) * LANE_WIDTH_FACTOR * abs(self.l_poly[3] - self.r_poly[3])

    self.d_poly = calc_d_poly(self.l_poly, self.r_poly, self.p_poly, self.l_prob, self.r_prob, self.lane_width)

    self.exeCtr = (self.exeCtr + 1) % 5 # increment counter, mod 5

  def update(self, v_ego, md):
    self.parse_model(md)
    self.update_d_poly(v_ego)
