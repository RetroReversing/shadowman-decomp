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

f32 func_8011B7E0(f32, f32, s32);                   /* extern */
M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_8024D390();                            /* extern */
M2C_UNK func_802C0C1C(M2C_UNK);                     /* extern */
extern M2C_UNK D_80044EB0;
extern M2C_UNK D_8005EA80;
extern s32 D_80061A10;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007BE08;

void func_8024D0B0(void *arg0) {
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp48;
    f32 sp50;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    f32 var_fv0f;
    f32 var_fv0f_2;
    s32 temp_a0;
    s32 temp_v1;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;

    temp_s1 = M2C_FIELD(arg0, void **, 8);
    temp_s2 = M2C_FIELD(temp_s1, void **, 0x6C);
    temp_v1 = M2C_FIELD(temp_s2, s32 *, 0);
    if (((temp_v1 == 0) || (temp_v1 == 7)) && (temp_fv0f = M2C_FIELD(temp_s1, f32 *, 0) - M2C_FIELD(&D_80075568, f32 *, 0x24), temp_fv1 = M2C_FIELD(temp_s1, f32 *, 4) - M2C_FIELD(&D_80075568, f32 *, 0x28), temp_fv0 = M2C_FIELD(temp_s1, f32 *, 8) - M2C_FIELD(&D_80075568, f32 *, 0x2C), (((temp_fv0f * temp_fv0f) + (temp_fv1 * temp_fv1) + (temp_fv0 * temp_fv0)) < *(f32 *)0x202FD4)) && (M2C_FIELD(&D_80044EB0, s32 *, 0x160) != 0) && (M2C_FIELD(&D_80044EB0, s16 *, 0x176) != 0) && (temp_v0 = (M2C_FIELD(&D_80044EB0, s16 *, 0x178) * 0xC) + &D_8005EA80, temp_a0 = M2C_FIELD(temp_v0, s32 *, 4), D_80061A10 = M2C_FIELD(temp_v0, s32 *, 0), (temp_a0 == temp_s1))) {
        temp_fa0 = M2C_FIELD(temp_s1, f32 *, 0) - M2C_FIELD(&D_80075568, f32 *, 0x24);
        sp48 = temp_fa0;
        temp_fa1 = M2C_FIELD(temp_s1, f32 *, 8) - M2C_FIELD(&D_80075568, f32 *, 0x2C);
        sp50 = temp_fa1;
        temp_fs0 = *(f32 *)0x202FDC;
        var_fv0f = fabsf(M2C_FIELD(&D_80075568, f32 *, 0x1C) - (func_8011B7E0(temp_fa0, temp_fa1, temp_a0) * *(f32 *)0x202FD8));
        if (temp_fs0 < var_fv0f) {
            var_fv0f -= temp_fs0;
        }
        if ((var_fv0f < *(f32 *)0x202FE0) || (*(f32 *)0x202FE4 < var_fv0f)) {
            func_802C0C1C(1);
            var_fv0f_2 = fabsf(M2C_FIELD(&D_80075568, f32 *, 0x1C) - M2C_FIELD(temp_s1, f32 *, 0x1C));
            if (temp_fs0 <= var_fv0f_2) {
                do {
                    var_fv0f_2 -= temp_fs0;
                } while (temp_fs0 <= var_fv0f_2);
            }
            if (var_fv0f_2 < 0.0f) {
                do {
                    var_fv0f_2 += *(f32 *)0x202FE8;
                } while (var_fv0f_2 < 0.0f);
            }
            if ((var_fv0f_2 < *(f32 *)0x202FEC) && (*(f32 *)0x202FF0 < var_fv0f_2)) {
                M2C_FIELD(temp_s2, s32 *, 0) = 2;
                M2C_FIELD(temp_s2, s32 *, 0xC) = (s32) M2C_FIELD(temp_s1, s32 *, 0x24);
                M2C_FIELD(temp_s2, s32 *, 0x10) = (s32) M2C_FIELD(temp_s1, s32 *, 0x28);
                M2C_FIELD(temp_s2, s32 *, 0x14) = (s32) M2C_FIELD(temp_s1, s32 *, 0x2C);
                func_8023DF7C(&D_80075568, &D_80075518, 0x50, 0xA, 0, 2);
                M2C_FIELD(&D_80075568, f32 *, 0x1C) = (f32) (M2C_FIELD(temp_s1, f32 *, 0x1C) - *(f32 *)0x202FF4);
                func_8024D390();
                return;
            }
            if ((var_fv0f_2 < *(f32 *)0x202FFC) || (*(f32 *)0x203000 < var_fv0f_2)) {
                M2C_FIELD(temp_s2, s32 *, 0) = 2;
                M2C_FIELD(temp_s2, s32 *, 0xC) = (s32) M2C_FIELD(temp_s1, s32 *, 0x24);
                M2C_FIELD(temp_s2, s32 *, 0x10) = (s32) M2C_FIELD(temp_s1, s32 *, 0x28);
                M2C_FIELD(temp_s2, s32 *, 0x14) = (s32) M2C_FIELD(temp_s1, s32 *, 0x2C);
                func_8023DF7C(&D_80075568, &D_80075518, 0x50, 0xA, 0, 2);
                M2C_FIELD(&D_80075568, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s1, f32 *, 0x1C);
                temp_fv0_2 = *(f32 *)0x203004;
                M2C_FIELD(temp_s2, s32 *, 8) = -1;
                temp_v0_2 = temp_s1 + 0x34;
                temp_fv0f_2 = M2C_FIELD(temp_v0_2, f32 *, 8) * temp_fv0_2;
                sp38 = temp_fv0f_2;
                temp_fv1_2 = M2C_FIELD(temp_v0_2, f32 *, 0x14) * temp_fv0_2;
                sp3C = temp_fv1_2;
                temp_fv1f = M2C_FIELD(temp_v0_2, f32 *, 0x20) * temp_fv0_2;
                sp40 = temp_fv1f;
                temp_fv0f_3 = temp_fv0f_2 + M2C_FIELD(temp_s1, f32 *, 0);
                sp38 = temp_fv0f_3;
                temp_fv1_3 = temp_fv1_2 + M2C_FIELD(temp_s1, f32 *, 4);
                sp3C = temp_fv1_3;
                temp_fv1f_2 = temp_fv1f + M2C_FIELD(temp_s1, f32 *, 8);
                M2C_FIELD(&D_8007BE08, f32 *, 0) = (f32) (temp_fv0f_3 - M2C_FIELD(&D_80075568, f32 *, 0x24));
                temp_fv0_3 = temp_fv1f_2 - M2C_FIELD(&D_80075568, f32 *, 0x2C);
                M2C_FIELD(&D_8007BE08, f32 *, 4) = (f32) (temp_fv1_3 - M2C_FIELD(&D_80075568, f32 *, 0x28));
                sp40 = temp_fv1f_2;
                M2C_FIELD(&D_80075568, f32 *, 0x24) = sp38;
                M2C_FIELD(&D_80075568, f32 *, 0x28) = sp3C;
                M2C_FIELD(&D_80075568, f32 *, 0x2C) = sp40;
                M2C_FIELD(&D_8007BE08, f32 *, 8) = temp_fv0_3;
            }
        }
    }
}
