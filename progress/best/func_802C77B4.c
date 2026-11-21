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

M2C_UNK func_8023A0DC(f32, f32, s32, f32 *, void *); /* extern */
M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802401D0(f32 *, f32 *, f32);           /* extern */
extern M2C_UNK D_218548;
extern M2C_UNK D_80044EB0;
extern M2C_UNK D_8006A510;
extern void *D_8006A5A0;
extern s32 D_8006A5B4;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_80075598;

void func_802C77B4(void) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    M2C_UNK *temp_s2;
    f32 temp_fs0;
    f32 temp_ft0;
    f32 temp_fv0f;
    f32 temp_fv1;
    void *temp_s7;

    temp_s7 = &D_80075598 + 4;
    func_8023A0DC(M2C_FIELD(&D_80044EB0, f32 *, 0x10C), M2C_FIELD(&D_80044EB0, f32 *, 0x110), M2C_FIELD(&D_80044EB0, s32 *, 0x114), &sp18, temp_s7);
    temp_s2 = temp_s7 - 0x34;
    temp_fs0 = *(f32 *)0x218558;
    sp18 += M2C_FIELD(temp_s2, f32 *, 0x24);
    sp1C += M2C_FIELD(temp_s2, f32 *, 0x28);
    sp20 += M2C_FIELD(temp_s2, f32 *, 0x2C);
    sp28 = sp18;
    sp2C = sp1C;
    sp30 = sp20;
    D_8006A5B4 = 0x13;
    sp2C -= M2C_FIELD(&D_80044EB0, f32 *, 0x118) + *(f32 *)0x218554;
    func_802401D0(&sp18, &sp28, temp_fs0);
    if (((M2C_FIELD(&D_8006A510, s32 *, 0x78) != 0) || (sp38 = M2C_FIELD(&D_218548, f32 *, 0), sp3C = M2C_FIELD(&D_218548, f32 *, 4), sp40 = M2C_FIELD(&D_218548, f32 *, 8), temp_fv0f = (sp38 * M2C_FIELD(&D_80075598, f32 *, 4)) + (sp3C * M2C_FIELD(temp_s7, f32 *, 4)) + (sp40 * M2C_FIELD(temp_s7, f32 *, 8)), temp_fv1 = (sp38 * M2C_FIELD(temp_s7, f32 *, 0xC)) + (sp3C * M2C_FIELD(temp_s7, f32 *, 0x10)) + (sp40 * M2C_FIELD(temp_s7, f32 *, 0x14)), D_8006A5B4 = 0x13, temp_ft0 = (sp38 * M2C_FIELD(temp_s7, f32 *, 0x18)) + (sp3C * M2C_FIELD(temp_s7, f32 *, 0x1C)) + (sp40 * M2C_FIELD(temp_s7, f32 *, 0x20)), sp48 = temp_fv0f, sp4C = temp_fv1, sp50 = temp_ft0, sp18 += temp_fv0f, sp1C += temp_fv1, sp28 += temp_fv0f, sp20 += temp_ft0, sp30 += temp_ft0, sp2C += temp_fv1, func_802401D0(&sp18, &sp28, temp_fs0), (M2C_FIELD(&D_8006A510, s32 *, 0x78) != 0)) || (func_8023DF7C(temp_s2, &D_80075518, 0x12, 0xA, 0x28, 2), (M2C_FIELD(&D_8006A510, s32 *, 0x78) != 0))) && !(M2C_FIELD(D_8006A5A0, u8 *, 1) & 0x22)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
    }
}
