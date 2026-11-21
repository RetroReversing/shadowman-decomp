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

M2C_UNK func_80267F78(f32, void *, void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_80075568;
extern s32 D_8007BE5C;

void func_802579CC(void *arg0) {
    void *temp_a0;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 8);
    temp_a0 = M2C_FIELD(temp_a1, void **, 0x6C);
    if (D_8007BE5C == 0) {
        if (M2C_FIELD(temp_a0, s32 *, 0) == 3) {
            M2C_FIELD(&D_80075568, f32 *, 0x2C) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x2C) + M2C_FIELD(temp_a0, f32 *, 0x24));
            M2C_FIELD(temp_a0, f32 *, 0x24) = 0.0f;
            goto block_3;
        }
    } else {
block_3:
        if ((M2C_FIELD(temp_a0, s32 *, 0) == 3) && (M2C_FIELD(temp_a0, s32 *, 8) != 1) && (*(f32 *)0x2037A4 < fabsf(M2C_FIELD(temp_a0, f32 *, 0x18)))) {
            func_80267F78(*(f32 *)0x2037A8, temp_a0, temp_a1 + 0x24, 0, -1);
        }
    }
}
