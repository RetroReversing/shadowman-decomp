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

f32 func_8022EC3C(f32);                             /* extern */
M2C_UNK func_80239C38(s32 *, f32 *, f32, f32);      /* extern */
M2C_UNK func_8029D67C(s32 *, s32 **);               /* extern */
M2C_UNK func_8029D7E8();                            /* extern */
extern s32 *D_8007BB24;
extern u8 D_8007DB98;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x68, 0x6c, 0x78, 0x7c, 0x80, 0x84], gap at: 0x5c. */
void func_8029D5E0(f32 arg2, f32 arg3) {
    f32 sp10;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1f;
    f32 temp_fs2;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft2;
    f32 temp_ft2f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1f;
    f32 var_a2;
    f32 var_a3;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv0_3;
    s32 *temp_s2;
    s32 *temp_v0_2;
    s32 *temp_v1;
    s32 *var_s0;
    s32 *var_v0;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s3;
    s32 var_v1;
    void *temp_v0_3;

    var_a2 = arg2;
    var_a3 = arg3;
    if (D_8007BB24 != NULL) {
        temp_v0 = *D_8007BB24 - 1;
        *D_8007BB24 = temp_v0;
        if (temp_v0 == -1) {
            *D_8007BB24 = 0x1D;
        }
        if (D_8007DB98 == 1) {
            func_8029D67C(D_8007BB24, &D_8007BB24);
            return;
        }
        temp_s2 = D_8007BB24 + 8;
        var_s3 = 0;
        var_s0 = temp_s2;
        temp_fs2 = *(f32 *)0x215CD8;
        temp_fs1f = *(f32 *)0x215CDC;
        temp_fs0 = *(f32 *)0x215CE0;
        temp_fs0f = *(f32 *)0x215CE4;
loop_7:
        M2C_FIELD(var_s0, f32 *, 0x2DC) = M2C_BITWISE(f64, (M2C_FIELD(var_s0, f32 *, 0x2E0) + M2C_FIELD(var_s0, f32 *, 0x2D4)));
        M2C_FIELD(var_s0, f32 *, 0x2E4) = (f32) (M2C_FIELD(var_s0, f32 *, 0x2E4) + M2C_FIELD(var_s0, f32 *, 0x2D8));
        func_80239C38(var_s0 + 0x2DC, &sp10, var_a2, var_a3);
        if (temp_fs1f < func_8022EC3C(temp_fs2)) {
            M2C_FIELD(var_s0, f32 *, 0x2D0) = (f32) -M2C_FIELD(var_s0, f32 *, 0x2D0);
        }
        if (temp_fs1f < func_8022EC3C(temp_fs2)) {
            M2C_FIELD(var_s0, f32 *, 0x2D4) = (f32) -M2C_FIELD(var_s0, f32 *, 0x2D4);
        }
        if (temp_fs1f < func_8022EC3C(temp_fs2)) {
            M2C_FIELD(var_s0, f32 *, 0x2D8) = (f32) -M2C_FIELD(var_s0, f32 *, 0x2D8);
        }
        if (temp_s2 == (D_8007BB24 + 0x1E0C)) {
            temp_fv0 = M2C_FIELD(var_s0, f32 *, 0x2D0);
            if (!(temp_fv0 < 0.0f)) {
                var_fv0 = temp_fv0 + temp_fs0;
            } else {
                var_fv0 = temp_fv0 - temp_fs0;
            }
            M2C_FIELD(var_s0, f32 *, 0x2D0) = var_fv0;
            temp_fv0_2 = M2C_FIELD(var_s0, f32 *, 0x2D4);
            if (!(temp_fv0_2 < 0.0f)) {
                var_fv0_2 = temp_fv0_2 + temp_fs0;
            } else {
                var_fv0_2 = temp_fv0_2 - temp_fs0;
            }
            M2C_FIELD(var_s0, f32 *, 0x2D4) = var_fv0_2;
            temp_fv0_3 = M2C_FIELD(var_s0, f32 *, 0x2D8);
            if (!(temp_fv0_3 < 0.0f)) {
                var_fv0_3 = temp_fv0_3 + temp_fs0;
            } else {
                var_fv0_3 = temp_fv0_3 - temp_fs0;
            }
            M2C_FIELD(var_s0, f32 *, 0x2D8) = var_fv0_3;
            func_8029D7E8();
            return;
        }
        temp_ft2f = *(f32 *)0x215CF0;
        temp_fv1f = M2C_FIELD(var_s0, f32 *, 0x2F4);
        temp_v0_2 = var_s0 + 0x2F4;
        temp_ft0f = M2C_FIELD(temp_v0_2, f32 *, 4);
        temp_ft0 = M2C_FIELD(temp_v0_2, f32 *, 8);
        temp_ft2 = M2C_FIELD(var_s0, f32 *, 0x2E8);
        M2C_FIELD(var_s0, f32 *, 0x2E8) = (f32) ((temp_fv1f * sp10) + (temp_ft0f * M2C_FIELD(&sp10, f32 *, 4)) + (temp_ft0 * M2C_FIELD(&sp10, f32 *, 8)));
        temp_v1 = var_s0 + 0x2E8;
        M2C_FIELD(temp_v1, f32 *, 4) = (f32) ((temp_fv1f * M2C_FIELD(&sp10, f32 *, 0xC)) + (temp_ft0f * M2C_FIELD(&sp10, f32 *, 0x10)) + (temp_ft0 * M2C_FIELD(&sp10, f32 *, 0x14)));
        M2C_FIELD(temp_v1, f32 *, 8) = (f32) ((temp_fv1f * M2C_FIELD(&sp10, f32 *, 0x18)) + (temp_ft0f * M2C_FIELD(&sp10, f32 *, 0x1C)) + (temp_ft0 * M2C_FIELD(&sp10, f32 *, 0x20)));
        temp_v0_3 = var_s0 + (*D_8007BB24 * 0xC);
        var_a2 = M2C_FIELD(var_s0, f32 *, 0x2E8);
        var_a3 = M2C_FIELD(var_s0, f32 *, 0x2EC);
        M2C_FIELD(temp_v0_3, f32 *, 0) = var_a2;
        M2C_FIELD(temp_v0_3, f32 *, 4) = var_a3;
        M2C_FIELD(temp_v0_3, f32 *, 8) = (f32) M2C_FIELD(var_s0, f32 *, 0x2F0);
        M2C_FIELD((var_s0 + (*D_8007BB24 * 0xC)), f32 *, 0x168) = (f32) ((M2C_FIELD(var_s0, f32 *, 0x2E8) - temp_ft2) * temp_fs0f);
        M2C_FIELD((var_s0 + (*D_8007BB24 * 0xC)), f32 *, 0x16C) = (f32) ((M2C_FIELD(var_s0, f32 *, 0x2EC) - M2C_FIELD(var_s0, f32 *, 0x2EC)) * temp_fs0f);
        M2C_FIELD((var_s0 + (*D_8007BB24 * 0xC)), f32 *, 0x170) = (f32) ((M2C_FIELD(var_s0, f32 *, 0x2F0) - M2C_FIELD(var_s0, f32 *, 0x2F0)) * temp_fs0f);
        var_v1 = 0x1E;
        var_a0 = *D_8007BB24;
        var_v0 = (var_a0 * 0xC) + var_s0;
        __repair_rows: {
            var_a0 += 1;
            M2C_FIELD(var_v0, f32 *, 0) = M2C_BITWISE(f64, (M2C_FIELD(var_v0, f32 *, 4) + (((M2C_FIELD(var_s0, f32 *, 0x2EC) - M2C_FIELD(var_s0, f32 *, 0x2F8)) * temp_ft2f) + M2C_FIELD(var_v0, f32 *, 0x16C))));
            M2C_FIELD(var_v0, f32 *, 8) = (f32) (M2C_FIELD(var_v0, f32 *, 8) + (((M2C_FIELD(var_s0, f32 *, 0x2F0) - M2C_FIELD(var_s0, f32 *, 0x2FC)) * temp_ft2f) + M2C_FIELD(var_v0, f32 *, 0x170)));
            var_v0 += 0xC;
            if (var_a0 == 0x1E) {
                var_v0 = var_s0;
                var_a0 = 0;
            }
            var_v1 -= 1;
        }
if (var_v1 != 0) goto __repair_rows;
        var_s3 += 1;
        var_s0 += 0x300;
        if (var_s3 >= 0xA) {

        } else {
            goto loop_7;
        }
    }
}
