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

M2C_UNK func_80240418(f32 *, f32 *, f32, M2C_UNK);  /* extern */
extern s32 D_80036944;
extern void *D_8006A4FC;
extern M2C_UNK D_8006A510;
extern M2C_UNK D_80075568;
extern void *D_8007AFF8;
extern M2C_UNK D_8007B270;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x68, 0x6c, 0x78, 0x7c], gap at: 0x60. */
void func_802918A0(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    s32 sp30;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 var_fs0f;
    s16 *temp_v0;
    s16 temp_v1;
    s16 var_s3;
    s16 var_v0_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v0;
    u16 temp_s2;
    void *temp_v0_2;
    void *temp_v1_2;

    var_fs0f = *(f32 *)0x2157A4;
    var_s3 = 0;
    if ((s32) M2C_FIELD(D_8007AFF8, u16 *, 0x90) >= 0) {
        sp30 = (s32) (s16) M2C_FIELD(D_8007AFF8, u16 *, 0x92);
        temp_fs1f = *(f32 *)0x2157A8;
        temp_fs1 = *(f32 *)0x2157AC;
        var_v0 = 0 << 0x10;
        do {
            temp_v0 = (var_v0 >> 0xF) + &D_8007B270;
            temp_v1 = *temp_v0;
            temp_s2 = (u16) *temp_v0;
            var_v0_2 = var_s3 + 1;
            if (temp_v1 != sp30) {
                temp_fv1f = M2C_FIELD(D_8006A4FC, f32 *, 0x24);
                sp10 = temp_fv1f;
                sp14 = M2C_FIELD(D_8006A4FC, f32 *, 0x28);
                temp_fv1 = M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
                temp_s1 = temp_v1 * 0x34;
                temp_v1_2 = temp_s1 + D_80036944;
                sp18 = temp_fv1;
                temp_fv0f = M2C_FIELD(temp_v1_2, f32 *, 4);
                sp20 = temp_fv0f;
                sp24 = M2C_FIELD(temp_v1_2, f32 *, 8) + temp_fs1f;
                temp_fv0 = M2C_FIELD(temp_v1_2, f32 *, 0xC);
                temp_fs0 = fabsf(temp_fv1f - temp_fv0f) + fabsf(temp_fv1 - temp_fv0);
                sp28 = temp_fv0;
                if (temp_fs0 < var_fs0f) {
                    func_80240418(&sp10, &sp20, temp_fs1, 3);
                    temp_s0 = M2C_FIELD(&D_8006A510, s32 *, 0x78);
                    var_v0_2 = var_s3 + 1;
                    if (temp_s0 == 1) {
                        temp_v0_2 = temp_s1 + D_80036944;
                        sp10 = M2C_FIELD(&D_80075568, f32 *, 0x24);
                        sp14 = M2C_FIELD(&D_80075568, f32 *, 0x28);
                        sp18 = M2C_FIELD(&D_80075568, f32 *, 0x2C);
                        sp20 = M2C_FIELD(temp_v0_2, f32 *, 4);
                        sp24 = M2C_FIELD(temp_v0_2, f32 *, 8) + temp_fs1f;
                        sp28 = M2C_FIELD(temp_v0_2, f32 *, 0xC);
                        func_80240418(&sp10, &sp20, temp_fs1, 3);
                        var_v0_2 = var_s3 + 1;
                        if (M2C_FIELD(&D_8006A510, s32 *, 0x78) == temp_s0) {
                            var_fs0f = temp_fs0;
                            M2C_FIELD(D_8007AFF8, u16 *, 0x92) = temp_s2;
                            goto block_7;
                        }
                    }
                } else {
block_7:
                    var_v0_2 = var_s3 + 1;
                }
            }
            var_s3 = var_v0_2;
            var_v0 = var_s3 << 0x10;
        } while ((s32) M2C_FIELD(D_8007AFF8, u16 *, 0x90) >= var_v0_2);
    }
}
