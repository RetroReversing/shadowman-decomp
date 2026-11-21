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

M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
f32 func_802BAAF8(f32 *, f32 *, M2C_UNK);           /* extern */
f32 func_802C880C(s32);                             /* extern */
s32 func_802C9C58();                                /* extern */
f32 func_802CA45C(M2C_UNK *);                       /* extern */
extern s32 D_8002D420;
extern M2C_UNK D_8002DBD0;
extern s32 D_8002DBE8;
extern M2C_UNK D_80052770;
extern s32 D_80061A10;
extern M2C_UNK D_8006A510;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007558C;
extern M2C_UNK D_80075598;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x40, 0x44, 0x48, 0x58, 0x5c, 0x68, 0x6c], gap at: 0x4c. */
void func_802CA958(void) {
    f32 sp18;
    f32 sp1C;
    M2C_UNK32 sp20;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1f;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    f32 var_fv0;
    s32 var_s0;
    void *temp_s1;
    void *temp_v0;

    temp_v0 = &D_80075598 + 4;
    temp_ft1f = *(f32 *)0x21864C;
    sp18 = 0.0f;
    sp1C = temp_ft1f;
    sp20 = *(M2C_UNK32 *)0x218650;
    temp_fv1f = M2C_FIELD(&sp18, f32 *, 4);
    temp_ft0f = M2C_FIELD(&sp18, f32 *, 8);
    temp_ft0 = (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 8));
    temp_fv0f = (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x14));
    temp_s1 = temp_v0 - 0x34;
    temp_fv1f_2 = (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x20));
    sp28 = temp_ft0;
    sp2C = temp_fv0f;
    sp30 = temp_fv1f_2;
    temp_fs0 = sp18;
    sp28 = temp_ft0 + M2C_FIELD(temp_s1, f32 *, 0x24);
    sp2C = temp_fv0f + M2C_FIELD(temp_s1, f32 *, 0x28);
    sp30 = temp_fv1f_2 + M2C_FIELD(temp_s1, f32 *, 0x2C);
    sp18 = M2C_FIELD(temp_v0, f32 *, -0x10);
    sp1C = M2C_FIELD(temp_v0, f32 *, -0xC);
    sp20 = M2C_FIELD(temp_v0, M2C_UNK32 *, -8);
    sp1C += temp_ft1f;
    temp_fv0 = func_802BAAF8(&sp18, &sp28, 0x3F800000);
    D_80061A10 = M2C_FIELD(&D_8006A510, s32 *, 0x8C);
    if ((M2C_FIELD(&D_8006A510, s32 *, 0x90) != 0) && (temp_fv0 != temp_fs0)) {
        var_s0 = 0;
        if (M2C_FIELD(&D_80052770, s32 *, 4) > 0) {
            temp_fs1f = *(f32 *)0x218654;
            temp_fs0_2 = *(f32 *)0x218658;
            temp_fs1 = *(f32 *)0x21865C;
            temp_fs0f = *(f32 *)0x218660;
            do {
                temp_fv0f_2 = M2C_FIELD(temp_s1, f32 *, 0x1C);
                var_fv0 = func_802C880C(M2C_FIELD(&D_8006A510, s32 *, 0x90)) - temp_fv0f_2;
                if (temp_fs1f < var_fv0) {
                    var_fv0 -= temp_fs0_2;
                }
                if (var_fv0 < temp_fs1) {
                    var_fv0 += temp_fs0_2;
                }
                var_s0 += 1;
                M2C_FIELD(temp_s1, f32 *, 0x1C) = (f32) (temp_fv0f_2 + (var_fv0 * temp_fs0f));
            } while (var_s0 < M2C_FIELD(&D_80052770, s32 *, 4));
        }
    }
    if (func_802CA45C(&D_8007558C) == 0.0f) {
        func_8023DF7C(&D_8007558C - 0x24, &D_80075518, 0x1A, 0xA, 0x28, 2);
    }
    if (!(D_8002D420 & 4)) {
        func_8023DF7C(&D_8007558C - 0x24, &D_80075518, 0x1A, 0xA, 0x28, 2);
    }
    if (M2C_FIELD(&D_8002DBD0, s32 *, 8) != 0) {
        if (M2C_FIELD(&D_8002DBD0, s32 *, 0x18) != 0) {
            func_8023DF7C(&D_8007558C - 0x24, &D_80075518, 0x12, 0xA, 0x28, 2);
        }
        if (M2C_FIELD(&D_8002DBD0, s32 *, 8) == 0) {
            goto block_19;
        }
        goto block_20;
    }
block_19:
    if (D_8002DBE8 != 0) {
block_20:
        func_8023DF7C(&D_80075568, &D_80075518, 0x1A, 0xA, 0x28, 2);
    }
    if (func_802C9C58() == 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
    }
}
