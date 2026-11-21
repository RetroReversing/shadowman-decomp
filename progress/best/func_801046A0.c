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

M2C_UNK func_8010472C();                            /* extern */
M2C_UNK func_801048F8(s32, void *, M2C_UNK);                 /* extern */
s32 func_801049E4(M2C_UNK, s32);                    /* extern */
M2C_UNK func_80105350(s32, void *, M2C_UNK, M2C_UNK);    /* extern */

void func_801046A0(s32 arg0, void *arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_s0;
    s32 temp_s1;
    u32 var_s4;

    var_s4 = 1;
loop_1:
    func_801048F8(arg0, arg1, arg2);
    temp_s1 = M2C_FIELD(arg1, s32 *, 0xC);
    temp_s0 = M2C_FIELD(arg1, s32 *, 4);
    func_80105350(arg0, arg1, arg2, arg3);
    var_s4 += 1;
    if (func_801049E4(arg2, temp_s0) == temp_s1) {
        func_8010472C();
        return;
    }
    if (var_s4 >= 0x1EU) {
        return;
    }
    goto loop_1;
}
