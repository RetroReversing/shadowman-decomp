/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

extern M2C_UNK D_80075F30;

s32 func_8026E2F4(s32 arg0) {
    s32 temp_v1;
    s32 var_v1;

    var_v1 = arg0;
    if (arg0 < 0) {
        var_v1 = arg0 + 0x1F;
    }
    temp_v1 = var_v1 >> 5;
    return *((temp_v1 * 4) + &D_80075F30) & (1 << (arg0 - (temp_v1 << 5)));
}
