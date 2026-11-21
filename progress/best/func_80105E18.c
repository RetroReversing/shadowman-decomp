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

M2C_UNK func_80105D98(void);                      /* extern */
M2C_UNK func_80105E9C();                            /* extern */
s32 func_80115C90(s32);                             /* extern */
extern M2C_UNK D_8004AEB8;

void func_80105E18(void) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(&D_8004AEB8, void **, 0);
    M2C_FIELD(&D_8004AEB8, void **, 0) = NULL;
    if ((M2C_FIELD(temp_s0, s32 *, 0x10) & 4) && (func_80115C90(M2C_FIELD(temp_s0, s32 *, 0)) != 0)) {
        M2C_FIELD(temp_s0, s32 *, 0x10) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0x10) & ~4) | 8);
        if (M2C_FIELD(&D_8004AEB8, s32 *, 0xC) != 0) {
            M2C_FIELD(temp_s0, s32 *, 0xC) = (s32) M2C_FIELD(&D_8004AEB8, s32 *, 0xC);
        } else {
            M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
        }
        func_80105E9C();
        return;
    }
    M2C_FIELD(temp_s0, s32 *, 0x10) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x10) & ~1);
    func_80105D98();
}
