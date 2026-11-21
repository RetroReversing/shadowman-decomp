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

s32 func_801062B0();                                /* extern */
M2C_UNK func_80116C40(M2C_UNK *, void *, M2C_UNK);  /* extern */
s32 func_80116EB0(M2C_UNK *, void *, M2C_UNK);      /* extern */
extern M2C_UNK D_8004B278;

s32 func_80106240(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = arg6;
    M2C_FIELD(arg0, s32 *, 4) = arg5;
    M2C_FIELD(arg0, s32 *, 8) = arg4;
    if (M2C_FIELD(&D_8004B278, s32 *, 8) >= M2C_FIELD(&D_8004B278, s32 *, 0x10)) {
        M2C_BREAK(1);
    }
    if (arg1 == 1) {
        func_80116C40(&D_8004B278, arg0, 0);
        return func_801062B0();
    }
    temp_v0 = func_80116EB0(&D_8004B278, arg0, 0);
    if (temp_v0 != 0) {
        M2C_BREAK(1);
    }
    return temp_v0 != 0;
}
