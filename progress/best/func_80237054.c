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

extern float D_8005EA34;
extern float D_8005EA38;
extern void *D_8005E9F0;
extern s32 D_8005E9F8;
extern char D_8005EA30[];
extern void *D_80061A10;
extern char D_80061A20[];
extern u32 D_80069720;

void func_80237054(void *arg0) {
    f32 sp0;                                        /* compiler-managed */
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv0f_4;
    f32 temp_fv0f_5;
    f32 temp_fv0f_6;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    s32 var_a3;
    s32 var_t1;
    s32 var_t4;
    s32 var_t8;
    s8 var_t0;
    char *var_t7;
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_t2;
    void *var_t3;

    temp_ft0f = M2C_FIELD(arg0, f32 *, 0x14);
    if (temp_ft0f != 0.0f) {
        temp_fv0 = M2C_FIELD(arg0, f32 *, 4);
        sp0 = temp_fv0;
        temp_fv0f = M2C_FIELD(arg0, f32 *, 8);
        M2C_FIELD(arg0, f32 *, 0x20) = temp_fv0;
        sp4 = temp_fv0f;
        temp_fv0_2 = M2C_FIELD(arg0, f32 *, 0xC);
        M2C_FIELD(arg0, f32 *, 0x24) = temp_fv0f;
        sp8 = temp_fv0_2;
        M2C_FIELD(arg0, f32 *, 0x28) = temp_fv0_2;
        sp0 = M2C_BITWISE(f64, (M2C_BITWISE(f32, (f64) sp0) - D_8005EA34));
        sp8 = temp_fv0_2 - D_8005EA38;
        var_t7 = M2C_FIELD(D_8005E9F0, u16 **, 8);
        var_t8 = 0;
        if (M2C_FIELD(D_8005E9F0, s16 *, 0x20) > 0) {
            var_t2 = var_t7 + 8;
loop_3:
            temp_fv1f = (f32) M2C_FIELD(var_t2, s16 *, 0x10) - M2C_BITWISE(f32, sp0);
            sp10 = temp_fv1f;
            temp_fv1 = (f32) M2C_FIELD(var_t2, s16 *, 0x12) - sp4;
            sp14 = temp_fv1;
            temp_fv0_3 = (f32) M2C_FIELD(var_t2, s16 *, 0x14) - sp8;
            sp18 = temp_fv0_3;
            temp_fv0f_2 = M2C_FIELD(arg0, f32 *, 0x10) + (f32) M2C_FIELD(var_t2, u16 *, 0x16);
            if (!((temp_fv0f_2 * temp_fv0f_2) <= ((temp_fv1f * temp_fv1f) + (temp_fv1 * temp_fv1) + (temp_fv0_3 * temp_fv0_3))) && (var_t4 = 0, var_t3 = M2C_FIELD(D_80061A10, s32 *, 0x20) + (M2C_FIELD((M2C_FIELD(D_80061A10, s32 *, 0x14) + (*(u16 *)var_t7 * 0x12)), u16 *, 6) * 6), (M2C_FIELD(var_t2, u16 *, 0) != 0))) {
loop_6:
                temp_v1 = M2C_FIELD(D_80061A10, s32 *, 0x18) + (M2C_FIELD(var_t3, u16 *, 0) * 6);
                temp_ft0 = (f32) M2C_FIELD(temp_v1, s16 *, 0) - M2C_BITWISE(f32, sp0);
                sp10 = temp_ft0;
                temp_fv0_4 = (f32) M2C_FIELD(temp_v1, s16 *, 2) - sp4;
                sp14 = temp_fv0_4;
                temp_fv0_5 = (f32) M2C_FIELD(temp_v1, s16 *, 4) - sp8;
                temp_fv1f_2 = (temp_ft0 * temp_ft0) + (temp_fv0_4 * temp_fv0_4) + (temp_fv0_5 * temp_fv0_5);
                sp18 = temp_fv0_5;
                if (!(temp_ft0f <= temp_fv1f_2) && (temp_a2 = D_8005E9F8 + (M2C_FIELD(var_t3, u16 *, 4) * 8), temp_fv0f_3 = (f32) M2C_FIELD(temp_a2, s8 *, 0) * temp_ft0, sp20 = temp_fv0f_3, temp_fv0f_4 = temp_fv0f_3 + ((f32) M2C_FIELD(temp_a2, s8 *, 1) * sp14), sp20 = temp_fv0f_4, sp20 = (temp_fv0f_4 + ((f32) M2C_FIELD(temp_a2, s8 *, 2) * sp18)) * *(f32 *)0x202410, !(sp20 <= 0.0f))) {
                    temp_fv0_6 = sp20 * sp20;
                    sp20 = temp_fv0_6;
                    if (temp_fv1f_2 != 0.0f) {
                        sp20 = temp_fv0_6 / temp_fv1f_2;
                    }
                    temp_fv0f_5 = *(f32 *)0x202414 - (temp_fv1f_2 / temp_ft0f);
                    temp_fv0f_6 = temp_fv0f_5 * temp_fv0f_5 * sp20;
                    if ((u32) D_80069720 < 0xFA0U) {
                        if (M2C_FIELD(temp_a2, u8 *, 3) == 0) {
                            temp_v1_2 = (D_80069720 * 8) + D_80061A20;
                            M2C_FIELD(temp_v1_2, void **, 0) = temp_a2;
                            D_80069720 += 1;
                            M2C_FIELD(temp_v1_2, s32 *, 4) = (s32) M2C_FIELD(temp_a2, s32 *, 4);
                            M2C_FIELD(temp_a2, u8 *, 3) = 1U;
                        }
                        var_t0 = (s32) (temp_fv0f_6 * (f32) M2C_FIELD(arg0, u8 *, 0x1C)) + (u8) M2C_FIELD(temp_a2, s32 *, 4);
                        var_t1 = (s32) (temp_fv0f_6 * (f32) M2C_FIELD(arg0, u8 *, 0x1D)) + M2C_FIELD(temp_a2, u8 *, 5);
                        var_a3 = (s32) (temp_fv0f_6 * (f32) M2C_FIELD(arg0, u8 *, 0x1E)) + M2C_FIELD(temp_a2, u8 *, 6);
                        if (var_t0 >= 0x100) {
                            var_t0 = -1;
                        }
                        if (var_t1 >= 0x100) {
                            var_t1 = 0xFF;
                        }
                        if (var_a3 >= 0x100) {
                            var_a3 = 0xFF;
                        }
                        M2C_FIELD(temp_a2, s32 *, 4) = var_t0;
                        M2C_FIELD(temp_a2, u8 *, 5) = (u8) var_t1;
                        M2C_FIELD(temp_a2, u8 *, 6) = (u8) var_a3;
                        goto block_20;
                    }
                } else {
block_20:
                    var_t4 += 1;
                    var_t3 += 6;
                    if (var_t4 >= (s32) M2C_FIELD(var_t2, u16 *, 0)) {
                        goto block_21;
                    }
                    goto loop_6;
                }
            } else {
block_21:
                var_t8 += 1;
                var_t2 += 0x28;
                var_t7 += 0x28;
                if (var_t8 < M2C_FIELD(D_8005E9F0, s16 *, 0x20)) {
                    goto loop_3;
                }
            }
        }
    }
}
