#include "common_dbc.h"

namespace {

const Signal sigs_790[] = {
    {
      .name = "_X2",
      .b1 = 1,
      .b2 = 1,
      .bo = 62,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_1",
      .b1 = 8,
      .b2 = 8,
      .bo = 48,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_2",
      .b1 = 16,
      .b2 = 8,
      .bo = 40,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_3",
      .b1 = 24,
      .b2 = 8,
      .bo = 32,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_4",
      .b1 = 32,
      .b2 = 8,
      .bo = 24,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_5",
      .b1 = 40,
      .b2 = 8,
      .bo = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_821[] = {
    {
      .name = "CRUSE_ONOFF",
      .b1 = 5,
      .b2 = 1,
      .bo = 58,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CRUSE_ENABLED",
      .b1 = 3,
      .b2 = 1,
      .bo = 60,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "THROTTLE_POS",
      .b1 = 24,
      .b2 = 8,
      .bo = 32,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "THROTTLE_PEDAL_POS",
      .b1 = 32,
      .b2 = 8,
      .bo = 24,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RPM",
      .b1 = 48,
      .b2 = 8,
      .bo = 8,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_832[] = {
    {
      .name = "TRANS_GEAR_POS",
      .b1 = 5,
      .b2 = 3,
      .bo = 56,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "TRANS_MODE",
      .b1 = 7,
      .b2 = 5,
      .bo = 52,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "ENGINE_RPM1",
      .b1 = 48,
      .b2 = 8,
      .bo = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "ENGINE_TEMP",
      .b1 = 56,
      .b2 = 8,
      .bo = 0,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_848[] = {
    {
      .name = "NEW_SIGNAL_3",
      .b1 = 0,
      .b2 = 8,
      .bo = 56,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_4",
      .b1 = 8,
      .b2 = 8,
      .bo = 48,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_1",
      .b1 = 16,
      .b2 = 8,
      .bo = 40,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_2",
      .b1 = 24,
      .b2 = 8,
      .bo = 32,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_864[] = {
    {
      .name = "SPEED3",
      .b1 = 24,
      .b2 = 8,
      .bo = 32,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "BRAKE_PRSSED",
      .b1 = 45,
      .b2 = 1,
      .bo = 18,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "TCS_ON_FF",
      .b1 = 42,
      .b2 = 1,
      .bo = 21,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "XXXX1",
      .b1 = 56,
      .b2 = 8,
      .bo = 0,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_880[] = {
    {
      .name = "WHEEL_RR_SPEED",
      .b1 = 0,
      .b2 = 16,
      .bo = 48,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WHEEL_RL_SPEED",
      .b1 = 16,
      .b2 = 16,
      .bo = 32,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WHEEL_FR_SPEED",
      .b1 = 32,
      .b2 = 16,
      .bo = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WHEEL_FL_SPEED",
      .b1 = 48,
      .b2 = 16,
      .bo = 0,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_896[] = {
    {
      .name = "NEW_SIGNAL_1",
      .b1 = 32,
      .b2 = 4,
      .bo = 28,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_906[] = {
    {
      .name = "SPEED_FL",
      .b1 = 0,
      .b2 = 8,
      .bo = 56,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED_FR",
      .b1 = 24,
      .b2 = 8,
      .bo = 32,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "ABS_UNDEF1",
      .b1 = 32,
      .b2 = 8,
      .bo = 24,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_922[] = {
    {
      .name = "STEER_ANGLE_9000",
      .b1 = 0,
      .b2 = 16,
      .bo = 48,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_928[] = {
    {
      .name = "EPB_BRAKE",
      .b1 = 16,
      .b2 = 1,
      .bo = 47,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_1040[] = {
    {
      .name = "LEFT_SIGNAL_SWITCH",
      .b1 = 6,
      .b2 = 1,
      .bo = 57,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RIGHT_SIGNAL_SWITCH",
      .b1 = 5,
      .b2 = 1,
      .bo = 58,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "HEAD_LIGHT_HANDLE_SWITCH",
      .b1 = 4,
      .b2 = 1,
      .bo = 59,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "HID_LIGHT_SWITCH",
      .b1 = 3,
      .b2 = 1,
      .bo = 60,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "YELLOW_WARN_TEMP_TRIGGER",
      .b1 = 2,
      .b2 = 1,
      .bo = 61,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "HID_LIGHT_HANDLE_SWITCH",
      .b1 = 1,
      .b2 = 1,
      .bo = 62,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "MIX_MODE",
      .b1 = 0,
      .b2 = 1,
      .bo = 63,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "temp_water_push",
      .b1 = 12,
      .b2 = 1,
      .bo = 51,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "slider_rain_bar",
      .b1 = 10,
      .b2 = 1,
      .bo = 53,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "temp_slider_rain_bar",
      .b1 = 8,
      .b2 = 1,
      .bo = 55,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_1056[] = {
    {
      .name = "RIGHT_SIGNAL_STATUS",
      .b1 = 14,
      .b2 = 1,
      .bo = 49,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LEFT_SIGNAL_STATUS",
      .b1 = 13,
      .b2 = 1,
      .bo = 50,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DOOR_FR_STATUS",
      .b1 = 11,
      .b2 = 1,
      .bo = 52,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DOOR_FL_STATUS",
      .b1 = 10,
      .b2 = 1,
      .bo = 53,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DOOR_RL_STATUS",
      .b1 = 21,
      .b2 = 1,
      .bo = 42,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DOOR_RR_STATUS",
      .b1 = 20,
      .b2 = 1,
      .bo = 43,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DOOR_BACK_DOOR_STATUS",
      .b1 = 17,
      .b2 = 1,
      .bo = 46,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_1104[] = {
    {
      .name = "DRIVER_SEAT_BELT_ONOFF",
      .b1 = 18,
      .b2 = 1,
      .bo = 45,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_1120[] = {
    {
      .name = "HAVC_TEMP",
      .b1 = 32,
      .b2 = 8,
      .bo = 24,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_1306[] = {
    {
      .name = "DASH_CAR_SPEED",
      .b1 = 0,
      .b2 = 9,
      .bo = 55,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_1312[] = {
    {
      .name = "__SIGNAL_every_interval",
      .b1 = 3,
      .b2 = 1,
      .bo = 60,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_1402[] = {
    {
      .name = "DASH_INFO0",
      .b1 = 0,
      .b2 = 8,
      .bo = 56,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DASH_INFO_2",
      .b1 = 8,
      .b2 = 8,
      .bo = 48,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DASH_INFO2",
      .b1 = 16,
      .b2 = 8,
      .bo = 40,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DASH_INFO_3",
      .b1 = 24,
      .b2 = 8,
      .bo = 32,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CAR_SPEED",
      .b1 = 32,
      .b2 = 8,
      .bo = 24,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};

const Msg msgs[] = {
  {
    .name = "ENGINE_DATA",
    .address = 0x316,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_790),
    .sigs = sigs_790,
  },
  {
    .name = "THROTTLE_STATUS",
    .address = 0x335,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_821),
    .sigs = sigs_821,
  },
  {
    .name = "GEAR_RPM_SPEED_STATUS",
    .address = 0x340,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_832),
    .sigs = sigs_832,
  },
  {
    .name = "ABS_WHEELS_STATUS",
    .address = 0x350,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_848),
    .sigs = sigs_848,
  },
  {
    .name = "BREAK_TCS_STATUS",
    .address = 0x360,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_864),
    .sigs = sigs_864,
  },
  {
    .name = "WHEEL_RPM_STATUS",
    .address = 0x370,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_880),
    .sigs = sigs_880,
  },
  {
    .name = "undefined",
    .address = 0x380,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_896),
    .sigs = sigs_896,
  },
  {
    .name = "WHEEL_SPEEDS",
    .address = 0x38A,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_906),
    .sigs = sigs_906,
  },
  {
    .name = "STEERING_ANGLE_STATUS",
    .address = 0x39A,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_922),
    .sigs = sigs_922,
  },
  {
    .name = "EPB_STATUS",
    .address = 0x3A0,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_928),
    .sigs = sigs_928,
  },
  {
    .name = "CONSOLE_STATUS",
    .address = 0x410,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_1040),
    .sigs = sigs_1040,
  },
  {
    .name = "BODY_ECU_STATUS",
    .address = 0x420,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_1056),
    .sigs = sigs_1056,
  },
  {
    .name = "SEATBELT_STATUS",
    .address = 0x450,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_1104),
    .sigs = sigs_1104,
  },
  {
    .name = "HAVC_STATUS",
    .address = 0x460,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_1120),
    .sigs = sigs_1120,
  },
  {
    .name = "_SPEEDX",
    .address = 0x51A,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_1306),
    .sigs = sigs_1306,
  },
  {
    .name = "__trigger_every_range",
    .address = 0x520,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_1312),
    .sigs = sigs_1312,
  },
  {
    .name = "DASH_STATUS",
    .address = 0x57A,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_1402),
    .sigs = sigs_1402,
  },
};

const Val vals[] = {
};

}

const DBC luxgen_s5_2015 = {
  .name = "luxgen_s5_2015",
  .num_msgs = ARRAYSIZE(msgs),
  .msgs = msgs,
  .vals = vals,
  .num_vals = ARRAYSIZE(vals),
};

dbc_init(luxgen_s5_2015)