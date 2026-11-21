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

M2C_UNK func_802BAAF8(s32 *, f64 *, M2C_UNK, s32);  /* extern */
extern M2C_UNK D_80075598;

void func_802CB0EC(void) {
    s32 sp10;
    s32 sp14;
    f32 sp18;
    f32 sp20;                                       /* compiler-managed */
    f32 sp24;
    f32 sp28;
    s32 sp30;
    f32 sp34;
    s32 sp38;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    s32 temp_a3;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = &D_80075598 + 4;
    sp10 = 0;
    sp14 = 0;
    sp18 = *(f32 *)0x21867C;
    temp_fv1 = M2C_FIELD(&sp10, f32 *, 4);
    temp_fv1f = M2C_FIELD(&sp10, f32 *, 8);
    temp_ft0f = (temp_fv1 * M2C_FIELD(temp_v1, f32 *, 0x10)) + (temp_fv1f * M2C_FIELD(temp_v1, f32 *, 0x14));
    temp_v0 = temp_v1 - 0x34;
    temp_fv1_2 = (temp_fv1 * M2C_FIELD(temp_v1, f32 *, 0x1C)) + (temp_fv1f * M2C_FIELD(temp_v1, f32 *, 0x20));
    temp_ft0 = *(f32 *)0x218680;
    sp20 = (temp_fv1 * M2C_FIELD(temp_v1, f32 *, 4)) + (temp_fv1f * M2C_FIELD(temp_v1, f32 *, 8));
    sp24 = temp_ft0f;
    sp28 = temp_fv1_2;
    sp20 = M2C_BITWISE(f64, (temp_ft0f + (M2C_FIELD(temp_v0, f32 *, 0x28) - temp_ft0)));
    sp28 = temp_fv1_2 + M2C_FIELD(temp_v0, f32 *, 0x2C);
    temp_a3 = M2C_FIELD(temp_v1, s32 *, -0x10);
    sp30 = temp_a3;
    sp34 = M2C_FIELD(temp_v1, f32 *, -0xC);
    sp38 = M2C_FIELD(temp_v1, s32 *, -8);
    sp34 -= temp_ft0;
    func_802BAAF8(&sp30, &sp20, 0x3F800000, temp_a3);
}
