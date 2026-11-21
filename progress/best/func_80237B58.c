/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

u8 *func_8021E320();
s32 func_8021E3BC();
s32 func_80239FCC();
s32 func_8023A048();

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x68, 0x6c, 0x78, 0x7c, 0x88, 0x8c, 0x90, 0x94], gap at: 0x5c. */
void func_80237B58(void *arg0, void *arg1) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs2;
    f32 temp_fs2f;
    f32 temp_fs3;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft0_3;
    f32 temp_ft0f;
    f32 temp_ft0f_2;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_ft1f;
    f32 temp_ft1f_2;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    f32 var_fv1;
    char *var_a1;
    s32 var_a0;
    s32 var_a2;
    s32 var_s4;
    s32 var_v0;
    u8 *temp_v0;
    char *var_s3;
    void *temp_a0;
    void *temp_s0;
    void *temp_s2;
    void *var_a3;
    void *var_v1;
    void *var_v1_2;
    void *var_v1_3;
    void *var_v1_4;

    temp_s2 = M2C_FIELD(arg0, void **, 0x64);
    var_s4 = 0;
    temp_v0 = func_8021E320(M2C_FIELD(temp_s2, u16 *, 0x32));
    var_s3 = temp_v0;
    if (temp_v0 != NULL) {
        temp_ft0 = M2C_FIELD(arg1, f32 *, 0x24);
        sp10 = temp_ft0;
        temp_ft1 = M2C_FIELD(arg1, f32 *, 0x30);
        sp14 = temp_ft1;
        temp_ft0f = M2C_FIELD(arg1, f32 *, 0x3C);
        sp18 = temp_ft0f;
        temp_fv1f = ((f32) M2C_FIELD(temp_s2, s16 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x24)) - M2C_FIELD(arg1, f32 *, 0);
        sp30 = temp_fv1f;
        temp_fv1 = ((f32) M2C_FIELD(temp_s2, s16 *, 0xE) + M2C_FIELD(arg0, f32 *, 0x28)) - M2C_FIELD(arg1, f32 *, 4);
        sp34 = temp_fv1;
        temp_fv0f = ((f32) M2C_FIELD(temp_s2, s16 *, 0x10) + M2C_FIELD(arg0, f32 *, 0x2C)) - M2C_FIELD(arg1, f32 *, 8);
        sp38 = temp_fv0f;
        temp_ft1f = M2C_FIELD(arg1, f32 *, 0xC);
        temp_fv0 = (f32) M2C_FIELD(temp_s2, u16 *, 0x12);
        temp_fs0 = temp_fv0 + temp_ft1f;
        temp_ft0_2 = (temp_ft0 * temp_fv1f) + (temp_ft1 * temp_fv1) + (temp_ft0f * temp_fv0f);
        if (!((temp_fs0 * temp_fs0) < ((temp_fv1f * temp_fv1f) + (temp_fv1 * temp_fv1) + (temp_fv0f * temp_fv0f))) && (!(temp_ft0_2 < 0.0f) || !((temp_fv0 * temp_fv0) < (temp_ft0_2 * temp_ft0_2)))) {
            temp_fv1_2 = M2C_FIELD(arg1, f32 *, 0x14);
            temp_s0 = arg0 + 0x34;
            temp_fs3 = (M2C_FIELD(arg1, f32 *, 0x10) - temp_fv1_2) / temp_ft1f;
            temp_fs2 = M2C_FIELD(arg1, f32 *, 0x18) * *(f32 *)0x202454;
            temp_fs2f = temp_fv1_2;
            func_80239FCC(&sp10, &sp10, temp_s0);
            sp20 = M2C_FIELD(arg1, f32 *, 0);
            sp24 = M2C_FIELD(arg1, f32 *, 4);
            sp28 = M2C_FIELD(arg1, f32 *, 8);
            func_8023A048(&sp20, &sp20, temp_s0);
            var_a1 = M2C_FIELD(temp_s2, s16 **, 0x18);
            temp_fs0f = *(f32 *)0x202458;
            var_a0 = M2C_FIELD(temp_s2, u16 *, 0x32) - 1;
            if (var_a0 != -1) {
                var_v1 = var_a1 + 4;
                do {
                    temp_ft1f_2 = (f32) *(s16 *)var_a1 - sp20;
                    sp30 = temp_ft1f_2;
                    temp_ft1_2 = (f32) M2C_FIELD(var_v1, s16 *, -2) - sp24;
                    sp34 = temp_ft1_2;
                    temp_ft0f_2 = (f32) M2C_FIELD(var_v1, s16 *, 0) - sp28;
                    temp_ft0_3 = (sp10 * temp_ft1f_2) + (sp14 * temp_ft1_2) + (sp18 * temp_ft0f_2);
                    var_v0 = 0;
                    sp38 = temp_ft0f_2;
                    if ((*(f32 *)0x20245C < temp_ft0_3) && (temp_ft0_3 < temp_ft1f)) {
                        var_fv1 = ((temp_ft1f_2 * temp_ft1f_2) + (temp_ft1_2 * temp_ft1_2) + (temp_ft0f_2 * temp_ft0f_2)) - (temp_ft0_3 * temp_ft0_3);
                        if (var_fv1 < 0.0f) {
                            var_fv1 = 0.0f;
                        }
                        temp_fv0f_2 = temp_fs2f + (temp_ft0_3 * temp_fs3);
                        if (var_fv1 < (temp_fv0f_2 * temp_fv0f_2)) {
                            temp_fv1f_2 = temp_fs0f - (sqrtf(var_fv1) / temp_fv0f_2);
                            var_v0 = (s32) (temp_fv1f_2 * temp_fv1f_2 * (temp_fs0f - (temp_ft0_3 * (temp_fs0f / temp_ft1f))) * temp_fs2);
                            if (var_v0 != 0) {
                                var_s4 += 1;
                            }
                        }
                    }
                    *(u8 *)var_s3 = (u8) var_v0;
                    var_s3 += 1;
                    var_v1 += 6;
                    var_a0 -= 1;
                    var_a1 += 6;
                } while (var_a0 != -1);
            }
            if (var_s4 != 0) {
                var_a3 = M2C_FIELD(temp_s2, void **, 0x20);
                var_a2 = M2C_FIELD(temp_s2, u16 *, 0x36) - 1;
                if (var_a2 != -1) {
                    do {
                        var_a1 = (s16 *) temp_v0[M2C_FIELD(var_a3, u16 *, 0)];
                        if (var_a1 != NULL) {
                            temp_a0 = M2C_FIELD(temp_s2, s32 *, 0x28) + (M2C_FIELD(var_a3, u16 *, 4) * 8);
                            var_v1_2 = M2C_FIELD(temp_a0, u8 *, 4) + var_a1;
                            if ((s32) var_v1_2 >= 0x100) {
                                var_v1_2 = (void *)0xFF;
                            }
                            M2C_FIELD(temp_a0, u8 *, 4) = (u8) var_v1_2;
                            var_v1_3 = M2C_FIELD(temp_a0, u8 *, 5) + var_a1;
                            if ((s32) var_v1_3 >= 0x100) {
                                var_v1_3 = (void *)0xFF;
                            }
                            M2C_FIELD(temp_a0, u8 *, 5) = (u8) var_v1_3;
                            var_v1_4 = M2C_FIELD(temp_a0, u8 *, 6) + var_a1;
                            if ((s32) var_v1_4 >= 0x100) {
                                var_v1_4 = (void *)0xFF;
                            }
                            M2C_FIELD(temp_a0, u8 *, 6) = (u8) var_v1_4;
                        }
                        var_a2 -= 1;
                        var_a3 += 6;
                    } while (var_a2 != -1);
                }
                func_8021E3BC(temp_v0, (u8) var_a1, var_a2, var_a3);
            }
        }
    }
}
