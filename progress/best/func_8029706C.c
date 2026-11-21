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

M2C_UNK func_802970A0(s32, M2C_UNK *);              /* extern */
extern M2C_UNK D_80036B84;
extern M2C_UNK D_80036B90;
extern s32 D_80072BC8;
extern s32 D_80072BCC;
extern M2C_UNK D_80075518;

void func_8029706C(s32 arg0, void *arg1) {
    f32 temp_fv1f;
    s32 temp_a0;
    void *temp_v0;
    M2C_UNK *__base_D_80036B84;

    __base_D_80036B84 = &D_80036B84;

    if (arg0 == 1) {
        func_802970A0(D_80072BCC, &D_80036B90);
        return;
    }
    arg0 = D_80072BC8 << 6;
    temp_v0 = arg0 + M2C_FIELD(&D_80075518, s32 *, 0x40);
    M2C_FIELD(arg1, f32 *, 0) = (f32) ((M2C_FIELD(__base_D_80036B84, f32 *, 0) * M2C_FIELD(temp_v0, f32 *, 0)) + (M2C_FIELD(__base_D_80036B84, f32 *, 4) * M2C_FIELD(temp_v0, f32 *, 4)) + (M2C_FIELD(__base_D_80036B84, f32 *, 8) * M2C_FIELD(temp_v0, f32 *, 8)));
    M2C_FIELD(arg1, f32 *, 4) = (f32) ((M2C_FIELD(__base_D_80036B84, f32 *, 0) * M2C_FIELD(temp_v0, f32 *, 0xC)) + (M2C_FIELD(__base_D_80036B84, f32 *, 4) * M2C_FIELD(temp_v0, f32 *, 0x10)) + (M2C_FIELD(__base_D_80036B84, f32 *, 8) * M2C_FIELD(temp_v0, f32 *, 0x14)));
    temp_fv1f = (M2C_FIELD(__base_D_80036B84, f32 *, 0) * M2C_FIELD(temp_v0, f32 *, 0x18)) + (M2C_FIELD(__base_D_80036B84, f32 *, 4) * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (M2C_FIELD(__base_D_80036B84, f32 *, 8) * M2C_FIELD(temp_v0, f32 *, 0x20));
    M2C_FIELD(arg1, f32 *, 8) = temp_fv1f;
    M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) + M2C_FIELD((arg0 + M2C_FIELD(&D_80075518, s32 *, 0x40)), f32 *, 0x24));
    M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) + M2C_FIELD((arg0 + M2C_FIELD(&D_80075518, s32 *, 0x40)), f32 *, 0x28));
    M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_fv1f + M2C_FIELD((arg0 + M2C_FIELD(&D_80075518, s32 *, 0x40)), f32 *, 0x2C));
}
