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

M2C_UNK func_8023DF7C(void *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_8026B618(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_8026D244();                            /* extern */
M2C_UNK func_802A6548(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_802CE408(void *, M2C_UNK *);           /* extern */
extern s32 D_8002D424;
extern M2C_UNK D_80075518;
extern u8 D_8007558C[];

void func_802CE37C(void) {
    void *temp_a0;

    func_8026B618(1, 0);
    if (D_8002D424 & 0x200) {
        func_8026B618(1, 1);
        func_8026D244();
        func_802A6548(D_8007558C, 4);
        temp_a0 = D_8007558C - 0x24;
        if (M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 4) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)), u16 *, 4) & 4) {
            func_802CE408(temp_a0, &D_80075518);
            return;
        }
        func_8023DF7C(temp_a0, &D_80075518, 0xFF, 0xA, 0, 1);
    }
}
