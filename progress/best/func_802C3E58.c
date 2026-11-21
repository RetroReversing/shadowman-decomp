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
M2C_UNK func_802A52E4(M2C_UNK, M2C_UNK);            /* extern */
f32 func_802BAAF8(void *, f32 *, M2C_UNK);          /* extern */
M2C_UNK func_802C0C1C(M2C_UNK);                     /* extern */
s32 func_802C3E08();                                /* extern */
f32 func_802C880C(void *);                          /* extern */
extern M2C_UNK D_218414;
extern s32 D_8002D420;
extern s32 D_80030E54;
extern void *D_80045404;
extern M2C_UNK D_8006A510;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075598;
extern M2C_UNK D_8007BE68;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x48, 0x4c, 0x50, 0x54, 0x58, 0x68, 0x6c], gap at: 0x5c. */
void func_802C3E58(void) {
    f32 sp18;
    s32 sp1C;
    f32 sp20;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1f;
    f32 var_fv0f;
    void *temp_s1;
    void *temp_s3;

    if ((D_80030E54 & 8) && (D_8002D420 & 1) && (((M2C_FIELD(D_80045404, s16 *, 0x176) != 0) && (M2C_FIELD(D_80045404, s32 *, 0x160) != 0)) || ((M2C_FIELD(D_80045404, s16 *, 0x1CE) != 0) && (M2C_FIELD(D_80045404, s32 *, 0x1B8) != 0)))) {
        temp_s3 = &D_80075598 + 4;
        sp18 = 0.0f;
        sp1C = 0;
        sp20 = *(f32 *)0x218420;
        temp_fv0f = M2C_FIELD(&sp18, f32 *, 4);
        temp_ft0f = M2C_FIELD(&sp18, f32 *, 8);
        temp_fv1f = (temp_fv0f * M2C_FIELD(temp_s3, f32 *, 4)) + (temp_ft0f * M2C_FIELD(temp_s3, f32 *, 8));
        temp_s1 = temp_s3 - 0x34;
        temp_ft1 = (temp_fv0f * M2C_FIELD(temp_s3, f32 *, 0x10)) + (temp_ft0f * M2C_FIELD(temp_s3, f32 *, 0x14));
        temp_fv0f_2 = (temp_fv0f * M2C_FIELD(temp_s3, f32 *, 0x1C)) + (temp_ft0f * M2C_FIELD(temp_s3, f32 *, 0x20));
        sp28 = temp_fv1f;
        sp2C = temp_ft1;
        sp30 = temp_fv0f_2;
        sp28 = temp_fv1f + M2C_FIELD(temp_s1, f32 *, 0x24);
        sp2C = temp_ft1 + M2C_FIELD(temp_s1, f32 *, 0x28);
        sp30 = temp_fv0f_2 + M2C_FIELD(temp_s1, f32 *, 0x2C);
        temp_fv0 = func_802BAAF8(temp_s3 - 0x10, &sp28, 0x3F800000);
        if ((M2C_FIELD(&D_8006A510, void **, 0x90) != NULL) && (temp_fv0 != sp18) && (M2C_FIELD(M2C_FIELD(&D_8006A510, void **, 0x90), u8 *, 1) & 8) && (func_802C3E08() != 0)) {
            temp_fv0_2 = func_802C880C(M2C_FIELD(&D_8006A510, void **, 0x90));
            var_fv0f = fabsf(M2C_FIELD(temp_s1, f32 *, 0x1C) - temp_fv0_2);
            if (*(f32 *)0x218424 < var_fv0f) {
                var_fv0f = *(f32 *)0x218428 - var_fv0f;
            }
            if (var_fv0f < *(f32 *)0x21842C) {
                sp38 = M2C_FIELD(&D_218414, f32 *, 0);
                sp3C = M2C_FIELD(&D_218414, f32 *, 4);
                sp40 = M2C_FIELD(&D_218414, f32 *, 8);
                func_802C0C1C(1);
                M2C_FIELD(temp_s1, f32 *, 0x1C) = temp_fv0_2;
                func_8023DF7C(temp_s1, &D_80075518, 0x8E, 0xA, 0x1E, 2);
                M2C_FIELD(temp_s1, f32 *, 0x10) = sp18;
                M2C_FIELD(&D_8007BE68, f32 *, 0) = (f32) ((sp38 * M2C_FIELD(&D_80075598, f32 *, 4)) + (sp3C * M2C_FIELD(temp_s3, f32 *, 4)) + (sp40 * M2C_FIELD(temp_s3, f32 *, 8)));
                M2C_FIELD(&D_8007BE68, f32 *, 4) = (f32) ((sp38 * M2C_FIELD(temp_s3, f32 *, 0xC)) + (sp3C * M2C_FIELD(temp_s3, f32 *, 0x10)) + (sp40 * M2C_FIELD(temp_s3, f32 *, 0x14)));
                M2C_FIELD(&D_8007BE68, f32 *, 8) = (f32) ((sp38 * M2C_FIELD(temp_s3, f32 *, 0x18)) + (sp3C * M2C_FIELD(temp_s3, f32 *, 0x1C)) + (sp40 * M2C_FIELD(temp_s3, f32 *, 0x20)));
                func_802A52E4(8, 9);
                func_802A52E4(8, 0xD);
                func_802A52E4(8, 0x10);
                func_802A52E4(8, 0x14);
            }
        }
    }
}
