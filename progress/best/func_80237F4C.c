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

extern float D_8005EA30;
extern float D_8005EA34;
extern float D_8005EA38;
s32 func_8021E320();
s32 func_8021E3BC();
s32 func_802D0B28();
extern void *D_8005E9F0;
extern s32 D_8005E9F8;
extern s32 D_8005EA14;
extern void *D_80061A10;
extern char D_80061A20[];
extern u32 D_80069720;
extern s8 D_800755D9;

void func_80237F4C(void *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_fa1;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft0_3;
    f32 temp_ft0f;
    f32 temp_ft0f_2;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_ft1f;
    f32 temp_ft1f_2;
    f32 temp_ft2;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    f32 var_fv1;
    char *var_a1;
    s16 temp_t3;
    s32 temp_v0;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t3;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_3;
    s32 var_v1_4;
    char *var_a3;
    s8 var_v1_2;
    char *var_t5;
    u16 temp_t0;
    u8 temp_t1;
    void *temp_a1;
    void *temp_v0_2;
    void *var_a0;
    void *var_a2;
    void *var_t2;

    if (func_802D0B28(D_8005EA14, D_800755D9, 0) != 0) {
        temp_v0 = func_8021E320(M2C_FIELD(D_80061A10, u16 *, 0x32));
        if (temp_v0 != 0) {
            temp_ft0 = M2C_FIELD(arg0, f32 *, 0x14);
            temp_fv1f = M2C_FIELD(arg0, f32 *, 0xC);
            var_t5 = M2C_FIELD(D_8005E9F0, u16 **, 8);
            sp10 = M2C_FIELD(arg0, f32 *, 0x24);
            sp14 = M2C_FIELD(arg0, f32 *, 0x30);
            sp18 = M2C_FIELD(arg0, f32 *, 0x3C);
            sp20 = M2C_FIELD(arg0, f32 *, 0) - D_8005EA30;
            sp24 = M2C_FIELD(arg0, f32 *, 4) - D_8005EA34;
            temp_fv0f = *(f32 *)0x202460;
            temp_fa1 = (M2C_FIELD(arg0, f32 *, 0x10) - temp_ft0) / temp_fv1f;
            sp28 = M2C_FIELD(arg0, f32 *, 8) - D_8005EA38;
            temp_t3 = M2C_FIELD(D_8005E9F0, s16 *, 0x20);
            var_t3 = temp_t3 - 1;
            if (temp_t3 != 0) {
                var_t2 = var_t5 + 8;
loop_4:
                temp_ft0f = (f32) M2C_FIELD(var_t2, s16 *, 0x10) - sp20;
                sp30 = temp_ft0f;
                temp_ft0_2 = (f32) M2C_FIELD(var_t2, s16 *, 0x12) - sp24;
                sp34 = temp_ft0_2;
                temp_fv1f_2 = (f32) M2C_FIELD(var_t2, s16 *, 0x14) - sp28;
                sp38 = temp_fv1f_2;
                temp_ft2 = (f32) M2C_FIELD(var_t2, u16 *, 0x16);
                temp_ft1f = temp_ft2 + temp_fv1f;
                var_a1 = M2C_FIELD(D_80061A10, s32 *, 0x18) + (M2C_FIELD(var_t2, u16 *, -4) * 6);
                temp_ft1 = (sp10 * temp_ft0f) + (sp14 * temp_ft0_2) + (sp18 * temp_fv1f_2);
                var_a2 = M2C_FIELD(D_80061A10, s32 *, 0x20) + (M2C_FIELD((M2C_FIELD(D_80061A10, s32 *, 0x14) + (*(u16 *)var_t5 * 0x12)), u16 *, 6) * 6);
                if (!((temp_ft1f * temp_ft1f) < ((temp_ft0f * temp_ft0f) + (temp_ft0_2 * temp_ft0_2) + (temp_fv1f_2 * temp_fv1f_2))) && (!(temp_ft1 < 0.0f) || !((temp_ft2 * temp_ft2) < (temp_ft1 * temp_ft1)))) {
                    var_a3 = temp_v0 + M2C_FIELD(var_t2, u16 *, -4);
                    var_v1 = M2C_FIELD(var_t2, u16 *, -2) - 1;
                    var_t0 = 0;
                    if (var_v1 != -1) {
                        var_a0 = var_a1 + 4;
                        do {
                            temp_ft1f_2 = (f32) *(s16 *)var_a1 - sp20;
                            sp30 = temp_ft1f_2;
                            temp_ft0f_2 = (f32) M2C_FIELD(var_a0, s16 *, -2) - sp24;
                            sp34 = temp_ft0f_2;
                            temp_ft0_3 = (f32) M2C_FIELD(var_a0, s16 *, 0) - sp28;
                            temp_ft1_2 = (sp10 * temp_ft1f_2) + (sp14 * temp_ft0f_2) + (sp18 * temp_ft0_3);
                            var_v0 = 0;
                            sp38 = temp_ft0_3;
                            if ((temp_ft1_2 > 0.0f) && (temp_ft1_2 < temp_fv1f)) {
                                var_fv1 = ((temp_ft1f_2 * temp_ft1f_2) + (temp_ft0f_2 * temp_ft0f_2) + (temp_ft0_3 * temp_ft0_3)) - (temp_ft1_2 * temp_ft1_2);
                                if (var_fv1 < 0.0f) {
                                    var_fv1 = 0.0f;
                                }
                                temp_fv0f_2 = temp_ft0 + (temp_ft1_2 * temp_fa1);
                                if (var_fv1 < (temp_fv0f_2 * temp_fv0f_2)) {
                                    temp_fv0 = temp_fv0f - (sqrtf(var_fv1) / temp_fv0f_2);
                                    var_v0 = (s32) (temp_fv0 * temp_fv0 * (temp_fv0f - (temp_ft1_2 * (temp_fv0f / temp_fv1f))) * (M2C_FIELD(arg0, f32 *, 0x18) * *(f32 *)0x202464));
                                    if (var_v0 != 0) {
                                        var_t0 += 1;
                                    }
                                }
                            }
                            *(s8 *)var_a3 = (s8) var_v0;
                            var_a3 += 1;
                            var_a0 += 6;
                            var_v1 -= 1;
                            var_a1 += 6;
                        } while (var_v1 != -1);
                    }
                    if ((var_t0 != 0) && (temp_t0 = M2C_FIELD(var_t2, u16 *, 0), var_t0_2 = temp_t0 - 1, (temp_t0 != 0))) {
loop_20:
                        temp_t1 = *(s32 *)(temp_v0 + M2C_FIELD(var_a2, u16 *, 0));
                        if (temp_t1 != 0) {
                            temp_a1 = D_8005E9F8 + (M2C_FIELD(var_a2, u16 *, 4) * 8);
                            if ((u32) D_80069720 < 0xFA0U) {
                                if (M2C_FIELD(temp_a1, u8 *, 3) == 0) {
                                    temp_v0_2 = (D_80069720 * 8) + D_80061A20;
                                    M2C_FIELD(temp_v0_2, void **, 0) = temp_a1;
                                    D_80069720 += 1;
                                    M2C_FIELD(temp_v0_2, s32 *, 4) = (s32) M2C_FIELD(temp_a1, s32 *, 4);
                                    M2C_FIELD(temp_a1, u8 *, 3) = 1U;
                                }
                                var_v1_2 = (u8) M2C_FIELD(temp_a1, s32 *, 4) + temp_t1;
                                if (var_v1_2 >= 0x100) {
                                    var_v1_2 = -1;
                                }
                                M2C_FIELD(temp_a1, s32 *, 4) = var_v1_2;
                                var_v1_3 = M2C_FIELD(temp_a1, u8 *, 5) + temp_t1;
                                if (var_v1_3 >= 0x100) {
                                    var_v1_3 = 0xFF;
                                }
                                M2C_FIELD(temp_a1, u8 *, 5) = (u8) var_v1_3;
                                var_v1_4 = M2C_FIELD(temp_a1, u8 *, 6) + temp_t1;
                                if (var_v1_4 >= 0x100) {
                                    var_v1_4 = 0xFF;
                                }
                                M2C_FIELD(temp_a1, u8 *, 6) = (u8) var_v1_4;
                                goto block_31;
                            }
                        } else {
block_31:
                            var_a2 += 6;
                            var_t0_2 -= 1;
                            if (var_t0_2 == 0) {
                                goto block_32;
                            }
                            goto loop_20;
                        }
                    } else {
                        goto block_32;
                    }
                } else {
block_32:
                    var_t2 += 0x28;
                    var_t5 += 0x28;
                    var_t3 -= 1;
                    if (var_t3 == 0) {
                        goto block_33;
                    }
                    goto loop_4;
                }
            } else {
block_33:
                func_8021E3BC(temp_ft0, temp_fa1, temp_v0);
            }
        }
    }
}
