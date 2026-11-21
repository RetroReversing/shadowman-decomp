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

M2C_UNK func_80108AAC(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_80109318(M2C_UNK, void *, M2C_UNK);    /* extern */
M2C_UNK func_8024ED8C();                            /* extern */
M2C_UNK func_80266C04(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_8026E26C(M2C_UNK);                     /* extern */
extern M2C_UNK D_248C7C;

void func_802494AC(void *arg0) {
    void *temp_s0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 8);
    if (M2C_FIELD(temp_s1, s16 *, 0x7A) == 1) {
        temp_s0 = temp_s1 + 0x24;
        func_8024ED8C();
        func_80266C04(2, &D_248C7C);
        func_80108AAC(0x1D, 0x3F, 0x7FFF);
        func_80109318(-1, temp_s0, 0);
        func_80109318(0x165, temp_s0, 0);
        func_8026E26C(0xA7);
        M2C_FIELD(temp_s1, s16 *, 0x7A) = 0x7F;
    }
}
