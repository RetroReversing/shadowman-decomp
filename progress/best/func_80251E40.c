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

extern void *D_80073360;
extern u8 D_80075F21;

void func_80251E40(void) {
int __repair_constant = 0xF;

    void *temp_a1;

    temp_a1 = M2C_FIELD(M2C_FIELD(D_80073360, void **, 8), void **, 0x6C);
    if (((*(s8 *)&D_80075F21) == 3) || (D_80075F21 < 0)) {
        *M2C_FIELD(temp_a1, s32 **, 8) = 0xE;
        *M2C_FIELD(temp_a1, s32 **, 0xC) = 0xF;
        M2C_FIELD(temp_a1, s32 *, 4) = 0;
        return;
    }
    *M2C_FIELD(temp_a1, s32 **, 8) = 0xF;
    *M2C_FIELD(temp_a1, s32 **, 0xC) = 0xE;
    M2C_FIELD(temp_a1, s32 *, 4) = 1;
}
