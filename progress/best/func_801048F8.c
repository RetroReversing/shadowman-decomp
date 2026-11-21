/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK func_80103480(s32, M2C_UNK, s32);           /* extern */
s32 func_80104968();                                /* extern */
s32 func_80104A14(s32);                             /* extern */
M2C_UNK func_8010526C(s32, M2C_UNK, s32);           /* extern */

s32 func_801048F8(s32 arg0, M2C_UNK arg1) {
    s32 ret;
    s32 var_s0;

    var_s0 = func_80104A14(arg0 + 8) + 0x12;
    if (var_s0 & 7) {
        do {
            var_s0 += 1;
        } while (var_s0 & 7);
    }
    if (arg0 >= 0) {
        func_80103480(arg0, arg1, var_s0);
        ret = func_80104968();
    } else {
        func_8010526C(arg0, arg1, var_s0);
        ret = var_s0;
    }
    return var_s0;
}
