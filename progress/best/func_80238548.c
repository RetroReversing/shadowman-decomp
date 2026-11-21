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

M2C_UNK func_80239FCC(f32 *, M2C_UNK *, M2C_UNK *); /* extern */
extern u32 D_8006973C;
extern M2C_UNK D_80069758;
extern M2C_UNK D_80069848;
extern s32 D_8006989C;
extern s16 *D_800698A0;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x58, 0x5c], gap at: 0x4c. */
void func_80238548(void *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    M2C_UNK *var_s4;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft0f_2;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1f;
    f32 var_fs0;
    s16 *var_s0;
    s16 *var_s3;
    u32 var_s2;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;
    void *var_s1;

    temp_v0 = M2C_FIELD(arg0, void **, 0x64);
    temp_v1 = temp_v0 + 0xC;
    temp_fv1f = (f32) M2C_FIELD(temp_v0, s16 *, 0xC);
    temp_a0 = arg0 + 0x34;
    temp_ft1 = (f32) M2C_FIELD(temp_v1, s16 *, 2);
    temp_ft0f = (f32) M2C_FIELD(temp_v1, s16 *, 4);
    sp24 = (temp_fv1f * M2C_FIELD(temp_a0, f32 *, 0xC)) + (temp_ft1 * M2C_FIELD(temp_a0, f32 *, 0x10)) + (temp_ft0f * M2C_FIELD(temp_a0, f32 *, 0x14)) + M2C_FIELD(temp_a0, f32 *, 0x28);
    var_s4 = &D_80069758;
    var_s3 = D_800698A0;
    var_s2 = 0;
    sp20 = (temp_fv1f * M2C_FIELD(arg0, f32 *, 0x34)) + (temp_ft1 * M2C_FIELD(temp_a0, f32 *, 4)) + (temp_ft0f * M2C_FIELD(temp_a0, f32 *, 8)) + M2C_FIELD(temp_a0, f32 *, 0x24);
    sp28 = (temp_fv1f * M2C_FIELD(temp_a0, f32 *, 0x18)) + (temp_ft1 * M2C_FIELD(temp_a0, f32 *, 0x1C)) + (temp_ft0f * M2C_FIELD(temp_a0, f32 *, 0x20)) + M2C_FIELD(temp_a0, f32 *, 0x2C);
    if (D_8006973C != 0) {
        temp_fs0f = *(f32 *)0x202470;
        var_s0 = var_s3 + 0x18;
        var_s1 = &D_80069758 + 0x18;
        __repair_rows: {
            if (D_8006989C < 8) {
                if (*var_s3 != -1) {
                    temp_ft1_2 = sp20 - M2C_FIELD(var_s0, f32 *, -0x14);
                    sp10 = temp_ft1_2;
                    temp_ft0f_2 = sp24 - M2C_FIELD(var_s0, f32 *, -0x10);
                    sp14 = temp_ft0f_2;
                    temp_ft0 = sp28 - M2C_FIELD(var_s0, f32 *, -0xC);
                    sp18 = temp_ft0;
                    temp_fs0 = (temp_ft1_2 * temp_ft1_2) + (temp_ft0f_2 * temp_ft0f_2) + (temp_ft0 * temp_ft0);
                    if (temp_fs0 < M2C_FIELD(var_s0, f32 *, -4)) {
                        var_fs0 = sqrtf(temp_fs0);
                        if (var_fs0 == 0.0f) {
                            var_fs0 = *(f32 *)0x202474;
                        }
                        temp_fv0 = temp_fs0f / var_fs0;
                        sp10 = temp_ft1_2 * temp_fv0;
                        sp14 = temp_ft0f_2 * temp_fv0;
                        sp18 = temp_ft0 * temp_fv0;
                        func_80239FCC(&sp10, var_s4, &D_80069848);
                        M2C_FIELD(var_s1, f32 *, -0xC) = (f32) M2C_FIELD(var_s0, u8 *, 4);
                        temp_fv0f = temp_fs0f - (var_fs0 / M2C_FIELD(var_s0, f32 *, -8));
                        M2C_FIELD(var_s1, f32 *, -8) = (f32) M2C_FIELD(var_s0, u8 *, 5);
                        M2C_FIELD(var_s1, f32 *, -4) = (f32) M2C_FIELD(var_s0, u8 *, 6);
                        var_s4 += 0x1C;
                        D_8006989C += 1;
                        M2C_FIELD(var_s1, f32 *, 0) = (f32) (temp_fv0f * temp_fv0f * M2C_FIELD(var_s0, f32 *, 0));
                        var_s1 += 0x1C;
                    }
                }
                var_s0 += 0x5C;
                var_s3 += 0x5C;
            }
            var_s2 += 1;
        }
if (var_s2 < (u32) D_8006973C) goto __repair_rows;
    }
}
