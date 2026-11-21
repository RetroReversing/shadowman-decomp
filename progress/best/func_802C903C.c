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

M2C_UNK func_80109318(M2C_UNK, void *, M2C_UNK);    /* extern */
s32 func_80113AD0();                                /* extern */
M2C_UNK func_80239A3C(f32);                         /* extern */
M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802401D0(void *, f32 *, M2C_UNK);      /* extern */
f32 func_802BAAF8(void *, f32 *, f32);              /* extern */
M2C_UNK func_802C92BC();                            /* extern */
extern M2C_UNK D_8002D390;
extern s32 D_8002D420;
extern s32 D_8002D424;
extern M2C_UNK D_8002DBD0;
extern s32 D_800458AC;
extern M2C_UNK D_80052770;
extern s32 D_8006A588;
extern s32 D_8006A5B4;
extern f32 D_80074BC0;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007BD90;
extern s32 D_8007BE30;
extern void *D_8007BE7C;

void func_802C903C(void) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 temp_fs0;
    f32 temp_ft1f;
    f32 temp_ft2;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    void *temp_s2;
    void *temp_s3;

    temp_s3 = M2C_FIELD(M2C_FIELD(D_8007BE7C, void **, 0x88), void **, 0xC);
    sp18 = 0.0f;
    sp1C = *(f32 *)0x218590;
    sp20 = *(f32 *)0x218594;
    func_80239A3C(M2C_FIELD(&D_80075568, f32 *, 0x1C));
    temp_ft1f = M2C_FIELD(&sp18, f32 *, 4);
    temp_ft2 = M2C_FIELD(&sp18, f32 *, 8);
    temp_s2 = &D_80075568 + 0x24;
    temp_fv1f = (sp18 * M2C_FIELD(&D_8002D390, f32 *, 0)) + (temp_ft1f * M2C_FIELD(&D_8002D390, f32 *, 4)) + (temp_ft2 * M2C_FIELD(&D_8002D390, f32 *, 8));
    temp_fs0 = *(f32 *)0x218598;
    temp_fv0f = (sp18 * M2C_FIELD(&D_8002D390, f32 *, 0xC)) + (temp_ft1f * M2C_FIELD(&D_8002D390, f32 *, 0x10)) + (temp_ft2 * M2C_FIELD(&D_8002D390, f32 *, 0x14));
    temp_fv1 = (sp18 * M2C_FIELD(&D_8002D390, f32 *, 0x18)) + (temp_ft1f * M2C_FIELD(&D_8002D390, f32 *, 0x1C)) + (temp_ft2 * M2C_FIELD(&D_8002D390, f32 *, 0x20));
    sp28 = temp_fv1f;
    sp2C = temp_fv0f;
    sp30 = temp_fv1;
    sp28 = temp_fv1f + M2C_FIELD(&D_80075568, f32 *, 0x24);
    sp2C = temp_fv0f + M2C_FIELD(&D_80075568, f32 *, 0x28);
    sp30 = temp_fv1 + M2C_FIELD(&D_80075568, f32 *, 0x2C);
    if (func_802BAAF8(temp_s2, &sp28, temp_fs0) != 0.0f) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
    }
    sp18 = M2C_FIELD(&D_80075568, f32 *, 0x24);
    sp1C = M2C_FIELD(&D_80075568, f32 *, 0x28);
    sp20 = M2C_FIELD(&D_80075568, f32 *, 0x2C);
    D_8006A5B4 = 3;
    sp1C += *(f32 *)0x21859C;
    sp20 += temp_fs0;
    sp18 += temp_fs0;
    func_802401D0(temp_s2, &sp18, 0x40A00000);
    if (D_8006A588 == 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
    }
    if (((u32) (M2C_FIELD(temp_s3, u8 *, 0x28) - 2) >= 2U) && (M2C_FIELD(&D_80052770, s32 *, 4) >= (func_80113AD0() & 0x1F))) {
        func_80109318(0x130, temp_s2, 0);
    }
    if (D_8007BE30 == -1) {
        func_802C92BC();
        return;
    }
    M2C_FIELD(&D_8007BD90, f32 *, 4) = (f32) (M2C_FIELD(&D_8007BD90, f32 *, 4) + (D_80074BC0 * *(f32 *)0x2185A4));
    if (D_8002D424 & 0x80) {
        if (D_800458AC == 0) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
        }
    }
    if (!(D_8002D420 & 1)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x37, 0xA, 0x28, 2);
    }
    if (M2C_FIELD(&D_8002DBD0, s32 *, 0x18) != 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x56, 0xA, 0x28, 2);
    }
    if (M2C_FIELD(&D_8002DBD0, s32 *, 8) != 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x57, 0xA, 0x28, 2);
    }
}
