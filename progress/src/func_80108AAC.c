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

void func_80108AAC(s16 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    if (arg0 != -1) {
        temp_v0 = func_801088D4();
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 0) = 3;
            M2C_FIELD(temp_v0, s32 *, 4) = 5;
            M2C_FIELD(temp_v0, s8 *, 0xA) = arg1;
            M2C_FIELD(temp_v0, s16 *, 0xC) = arg0;
            M2C_FIELD(temp_v0, s16 *, 0xE) = arg2;
            func_80116EB0(&D_8004DF20, temp_v0, 1);
        }
    }
}
