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

M2C_UNK func_80104E4C(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_80104EB0(s32);                             /* extern */
M2C_UNK func_80104EC4(s32 *, M2C_UNK, M2C_UNK, s32); /* extern */

s32 func_802D5F24(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 var_v0;

loop_1:
    func_80104EC4(&sp10, 4, 1, arg0);
    var_v0 = 0;
    if (func_80104EB0(arg0) == 0) {
        func_80104E4C(arg0, -3, 1);
        if (sp10 == arg1) {
            func_80104E4C(arg0, 3, 1);
            var_v0 = 1;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
