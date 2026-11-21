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

void *func_801088D4();                              /* extern */
M2C_UNK func_80116EB0(M2C_UNK *, void *, M2C_UNK);  /* extern */
extern M2C_UNK D_8004DF20;

void func_80108A18(s8 arg0, s32 arg1, s8 arg2, s8 arg3, s32 arg4, f32 arg5) {
    void *temp_v0;

    temp_v0 = func_801088D4();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = 6;
        M2C_FIELD(temp_v0, s32 *, 4) = 6;
        M2C_FIELD(temp_v0, s8 *, 8) = arg0;
        M2C_FIELD(temp_v0, s8 *, 9) = arg2;
        M2C_FIELD(temp_v0, s8 *, 0xA) = arg3;
        M2C_FIELD(temp_v0, s16 *, 0xE) = (s16) arg4;
        M2C_FIELD(temp_v0, s16 *, 0xC) = arg1;
        M2C_FIELD(temp_v0, f32 *, 0x10) = arg5;
        func_80116EB0(&D_8004DF20, temp_v0, 1);
    }
}
