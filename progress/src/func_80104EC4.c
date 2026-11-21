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

s32 func_80104EC4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_lo;
    u32 var_s0;

    var_s0 = 0;
    temp_lo = arg1 * arg2;
    if (temp_lo != 0) {
        do {
            *(s8 *)(arg0 + var_s0) = func_80104F44(arg3);
            var_s0 += 1;
        } while (var_s0 < (arg1 * arg2));
    }
    return arg2;
}
