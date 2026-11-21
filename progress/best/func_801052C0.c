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

s32 func_80104C50(s32, M2C_UNK);                    /* extern */
M2C_UNK func_80104DE0(s32);                         /* extern */
s32 func_802364D0(s32);                             /* extern */

s32 func_801052C0(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_v0;
    u32 var_s1;

    var_s1 = 1;
loop_1:
    temp_v0 = func_80104C50(arg0, arg1);
    var_v0 = temp_v0;
    if (func_802364D0(temp_v0) != arg2) {
        func_80104DE0(temp_v0);
        var_s1 += 1;
        var_v0 = var_s1 < 0x64U;
        if (var_v0 != 0) {
            goto loop_1;
        }
    }
    return var_v0;
}
