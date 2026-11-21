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

M2C_UNK func_80103564(s32, M2C_UNK, void *, u32);   /* extern */
M2C_UNK func_801035A4();                            /* extern */
void *func_80103E10();                              /* extern */
extern M2C_UNK D_110000;
extern u32 D_80000318;
extern M2C_UNK D_8004AD78;

void func_801034E0(void) {
    s32 temp_a0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_v0;

    func_801035A4();
    temp_v0 = func_80103E10();
    M2C_FIELD(&D_8004AD78, void **, 0) = temp_v0;
    M2C_FIELD(&D_8004AD78, s32 *, 4) = 0;
    M2C_FIELD(temp_v0, s32 *, 8) = (s32) ((s32) &D_110000 | 0x80000000);
    temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0xC) & 0xFF000000;
    temp_a0 = (u32) D_80000318 > 0x5FFFFFU;
    M2C_FIELD(temp_v0, s32 *, 0xC) = temp_v0_2;
    if (temp_a0 != 0) {
        func_80103564(temp_a0, 0xFF000000, temp_v0, D_80000318);
        return;
    }
    M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) ((temp_v0_2 & 0xFF000000) | (D_80000318 & 0xFFFFFF));
    temp_v0_3 = M2C_FIELD(temp_v0, s32 *, 0xC);
    M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) ((temp_v0_3 & 0xFF000000) | (((temp_v0_3 & 0xFFFFFF) - M2C_FIELD(temp_v0, s32 *, 8)) & 0xFFFFFF));
}
