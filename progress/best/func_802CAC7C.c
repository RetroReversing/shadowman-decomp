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
extern int D_8006A59C;
extern int D_8006A5A0;
extern int D_80052774;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023DF7C();
f32 func_802BAAF8();
f32 func_802C880C();
s32 func_802C9C58();
f32 func_802CA6E0();
extern s32 D_8002D420;
extern char D_8002DBD0[];
extern s32 D_8002DBE8;
extern char D_80052770[];
extern s32 D_80061A10;
extern char D_8006A510[];
extern char D_80075518[];
extern char D_80075568[];
extern char D_8007558C[];
extern char D_80075598[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x40, 0x44, 0x48, 0x58, 0x5c, 0x68, 0x6c], gap at: 0x4c. */
void func_802CAC7C(void) {
    s32 *__base_D_8002DBD0;
    f32 sp18[3];
    f32 sp28[3];
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

    temp_v0 = D_80075598 + 4;
    temp_ft1f = *(f32 *)0x218664;
    sp18[0] = 0.0f;
    sp18[1] = temp_ft1f;
    sp18[2] = *(s32 *)0x218668;
    temp_fv1f = M2C_FIELD(sp18, f32 *, 4);
    temp_ft0f = M2C_FIELD(sp18, f32 *, 8);
    temp_ft0 = (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 8));
    temp_fv0f = (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x14));
    temp_s1 = temp_v0 - 0x34;
    temp_fv1f_2 = (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x20));
    sp28[0] = temp_ft0;
    sp28[1] = temp_fv0f;
    sp28[2] = temp_fv1f_2;
    temp_fs0 = sp18[0];
    sp28[0] = temp_ft0 + M2C_FIELD(temp_s1, f32 *, 0x24);
    sp28[1] = temp_fv0f + M2C_FIELD(temp_s1, f32 *, 0x28);
    sp28[2] = temp_fv1f_2 + M2C_FIELD(temp_s1, f32 *, 0x2C);
    sp18[0] = M2C_FIELD(temp_v0, f32 *, -0x10);
    sp18[1] = M2C_FIELD(temp_v0, f32 *, -0xC);
    sp18[2] = M2C_FIELD(temp_v0, s32 *, -8);
    sp18[1] += temp_ft1f;
    temp_fv0 = func_802BAAF8(sp18, sp28, 0x3F800000);
    D_80061A10 = D_8006A59C;
    if ((D_8006A5A0 != 0) && (temp_fv0 != temp_fs0)) {
        var_s0 = 0;
        if (D_80052774 > 0) {
            temp_fs1f = *(f32 *)0x21866C;
            temp_fs0_2 = *(f32 *)0x218670;
            temp_fs1 = *(f32 *)0x218674;
            temp_fs0f = *(f32 *)0x218678;
            do {
                temp_fv0f_2 = M2C_FIELD(temp_s1, f32 *, 0x1C);
                var_fv0 = func_802C880C(D_8006A5A0) - temp_fv0f_2;
                if (temp_fs1f < var_fv0) {
                    var_fv0 -= temp_fs0_2;
                }
                if (var_fv0 < temp_fs1) {
                    var_fv0 += temp_fs0_2;
                }
                var_s0 += 1;
                M2C_FIELD(temp_s1, f32 *, 0x1C) = (f32) (temp_fv0f_2 + (var_fv0 * temp_fs0f));
            } while (var_s0 < D_80052774);
        }
    }
    if (func_802CA6E0(D_8007558C) == 0.0f) {
        func_8023DF7C(D_8007558C - 0x24, D_80075518, 0x1A, 0xA, 0x28, 2);
    }
    if (!(D_8002D420 & 8)) {
        func_8023DF7C(D_8007558C - 0x24, D_80075518, 0x1A, 0xA, 0x28, 2);
    }
    __base_D_8002DBD0 = D_8002DBD0;
    if (M2C_FIELD(__base_D_8002DBD0, s32 *, 8) != 0) {
        if (M2C_FIELD(__base_D_8002DBD0, s32 *, 0x18) != 0) {
            func_8023DF7C(D_8007558C - 0x24, D_80075518, 0x12, 0xA, 0x28, 2);
        }
        if (M2C_FIELD(__base_D_8002DBD0, s32 *, 8) == 0) {
            goto block_19;
        }
        goto block_20;
    }
block_19:
    if (D_8002DBE8 != 0) {
block_20:
        func_8023DF7C(D_80075568, D_80075518, 0x1A, 0xA, 0x28, 2);
    }
    if (func_802C9C58() == 0) {
        func_8023DF7C(D_80075568, D_80075518, 0x12, 0xA, 0x28, 2);
    }
}
