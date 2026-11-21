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

M2C_UNK func_802920F0();                            /* extern */
s32 func_802924F8();                                /* extern */
s32 func_802925D8(s32, s16);                        /* extern */

s32 func_8029225C(s32 arg0, s16 arg1) {
    s32 var_v0;

    func_802920F0();
    if ((func_802925D8(arg0, arg1) == 0) || (var_v0 = 1, (func_802924F8() == 0))) {
        func_802920F0();
        var_v0 = 0;
    }
    return var_v0;
}
