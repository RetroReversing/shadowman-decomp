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

void *func_8021E320(M2C_UNK);                       /* extern */
M2C_UNK func_80238EF4(s16 *, u32, s8 *, s16 *);     /* extern */
M2C_UNK func_80238F38(s16 *, u32, s8 *, s16 *);     /* extern */
M2C_UNK func_80238F78(s16 *, u32, s8 *, s16 *);     /* extern */
M2C_UNK func_80238F98(s16 *, u32, s8 *, s16 *);     /* extern */
extern f32 D_8002D2C8;
extern f32 D_8002D2CC;
extern f32 D_8002D2D0;
extern M2C_UNK D_8005E9E4;
extern M2C_UNK D_80069730;
extern u32 D_8006973C;
extern void *D_80069750;
extern s32 D_80069838;
extern s16 *D_800698A0;

void func_80238C28(void *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    s16 *var_a0;
    s16 *var_a3;
    s32 temp_v0_7;
    s8 *var_a2;
    s8 temp_v0_4;
    s8 temp_v0_5;
    s8 temp_v0_6;
    u32 var_a1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_v1;

    D_80069838 = 0;
    temp_v0 = func_8021E320(0x68);
    D_80069750 = temp_v0;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, u8 *, 4) = (u8) M2C_FIELD(&D_80069730, u8 *, 0);
        M2C_FIELD(temp_v0, u8 *, 0) = (u8) M2C_FIELD(&D_80069730, u8 *, 0);
        M2C_FIELD(D_80069750, u8 *, 5) = (u8) M2C_FIELD(&D_80069730, u8 *, 1);
        M2C_FIELD(D_80069750, u8 *, 1) = (u8) M2C_FIELD(&D_80069730, u8 *, 1);
        M2C_FIELD(D_80069750, u8 *, 6) = (u8) M2C_FIELD(&D_80069730, u8 *, 2);
        M2C_FIELD(D_80069750, u8 *, 2) = (u8) M2C_FIELD(&D_80069730, u8 *, 2);
        var_a2 = temp_v0 + 8;
        if (M2C_FIELD(arg0, u16 *, 0x7E) & 8) {
            M2C_FIELD(var_a2, u8 *, 4) = (u8) M2C_FIELD(&D_8005E9E4, u8 *, 0);
            M2C_FIELD(temp_v0, u8 *, 8) = (u8) M2C_FIELD(&D_8005E9E4, u8 *, 0);
            M2C_FIELD(var_a2, u8 *, 5) = (u8) M2C_FIELD(&D_8005E9E4, u8 *, 1);
            M2C_FIELD(var_a2, u8 *, 1) = (u8) M2C_FIELD(&D_8005E9E4, u8 *, 1);
            M2C_FIELD(var_a2, u8 *, 6) = (u8) M2C_FIELD(&D_8005E9E4, u8 *, 2);
            M2C_FIELD(var_a2, u8 *, 2) = (u8) M2C_FIELD(&D_8005E9E4, u8 *, 2);
            temp_fv0f = *(f32 *)0x20247C;
            M2C_FIELD(var_a2, s8 *, 8) = (s8) (s32) (-D_8002D2C8 * temp_fv0f);
            M2C_FIELD(var_a2, s8 *, 9) = (s8) (s32) (-D_8002D2CC * temp_fv0f);
            M2C_FIELD(var_a2, s8 *, 0xA) = (s8) (s32) (-D_8002D2D0 * temp_fv0f);
            var_a2 = temp_v0 + 0x18;
            D_80069838 += 1;
        }
        if ((M2C_FIELD(arg0, u16 *, 0x7E) & 4) && (temp_v0_2 = M2C_FIELD(arg0, void **, 0x64), temp_a0 = temp_v0_2 + 0xC, temp_fv1f = (f32) M2C_FIELD(temp_v0_2, s16 *, 0xC), temp_v0_3 = arg0 + 0x34, temp_ft1 = (f32) M2C_FIELD(temp_a0, s16 *, 2), temp_ft0f = (f32) M2C_FIELD(temp_a0, s16 *, 4), sp24 = (temp_fv1f * M2C_FIELD(temp_v0_3, f32 *, 0xC)) + (temp_ft1 * M2C_FIELD(temp_v0_3, f32 *, 0x10)) + (temp_ft0f * M2C_FIELD(temp_v0_3, f32 *, 0x14)) + M2C_FIELD(temp_v0_3, f32 *, 0x28), var_a3 = D_800698A0, var_a1 = 0, sp20 = (temp_fv1f * M2C_FIELD(arg0, f32 *, 0x34)) + (temp_ft1 * M2C_FIELD(temp_v0_3, f32 *, 4)) + (temp_ft0f * M2C_FIELD(temp_v0_3, f32 *, 8)) + M2C_FIELD(temp_v0_3, f32 *, 0x24), sp28 = (temp_fv1f * M2C_FIELD(temp_v0_3, f32 *, 0x18)) + (temp_ft1 * M2C_FIELD(temp_v0_3, f32 *, 0x1C)) + (temp_ft0f * M2C_FIELD(temp_v0_3, f32 *, 0x20)) + M2C_FIELD(temp_v0_3, f32 *, 0x2C), (D_8006973C != 0))) {
            var_a0 = var_a3 + 0x1E;
            var_v1 = var_a2 + 0xA;
            temp_ft0 = *(f32 *)0x202484;
loop_6:
            if ((*var_a3 != -1) && (temp_fv0 = sp20 - M2C_FIELD(var_a0, f32 *, -0x1A), sp10 = temp_fv0, temp_fv0_2 = sp24 - M2C_FIELD(var_a0, f32 *, -0x16), sp14 = temp_fv0_2, temp_fv0f_2 = sp28 - M2C_FIELD(var_a0, f32 *, -0x12), sp18 = temp_fv0f_2, temp_fv1 = (temp_fv0 * temp_fv0) + (temp_fv0_2 * temp_fv0_2) + (temp_fv0f_2 * temp_fv0f_2), temp_fv0_3 = M2C_FIELD(var_a0, f32 *, -0xA), (temp_fv1 < temp_fv0_3))) {
                temp_fv0f_3 = *(f32 *)0x202480 - (temp_fv1 / temp_fv0_3);
                temp_fv0_4 = (f32) M2C_FIELD(var_a0, u8 *, -2) * temp_fv0f_3;
                if (temp_ft0 <= temp_fv0_4) {
                    temp_v0_4 = (s32) (temp_fv0_4 - temp_ft0) | 0x80000000;
                    M2C_FIELD(var_v1, s8 *, -6) = temp_v0_4;
                    *var_a2 = temp_v0_4;
                    temp_fv0_5 = (f32) M2C_FIELD(var_a0, u8 *, -1) * temp_fv0f_3;
                    if (temp_ft0 <= temp_fv0_5) {
                        temp_v0_5 = (s32) (temp_fv0_5 - temp_ft0) | 0x80000000;
                        M2C_FIELD(var_v1, s8 *, -5) = temp_v0_5;
                        M2C_FIELD(var_v1, s8 *, -9) = temp_v0_5;
                        temp_fv0_6 = (f32) M2C_FIELD(var_a0, u8 *, 0) * temp_fv0f_3;
                        if (temp_ft0 <= temp_fv0_6) {
                            temp_v0_6 = (s32) (temp_fv0_6 - temp_ft0) | 0x80000000;
                            M2C_FIELD(var_v1, s8 *, -4) = temp_v0_6;
                            M2C_FIELD(var_v1, s8 *, -8) = temp_v0_6;
                            if (temp_fv1 != 0.0f) {
                                func_80238F98(var_a0, var_a1, var_a2, var_a3);
                                return;
                            }
                            temp_fv1_2 = *(f32 *)0x20248C;
                            M2C_FIELD(var_v1, s8 *, -2) = (s8) (s32) (sp10 * temp_fv1_2);
                            M2C_FIELD(var_v1, s8 *, -1) = (s8) (s32) (sp14 * temp_fv1_2);
                            var_a2 += 0x10;
                            M2C_FIELD(var_v1, s8 *, 0) = (s8) (s32) (sp18 * temp_fv1_2);
                            temp_v0_7 = D_80069838 + 1;
                            D_80069838 = temp_v0_7;
                            var_v1 += 0x10;
                            if (temp_v0_7 < 6) {
                                goto block_27;
                            }
                        } else {
                            func_80238F78(var_a0, var_a1, var_a2, var_a3);
                        }
                    } else {
                        func_80238F38(var_a0, var_a1, var_a2, var_a3);
                    }
                } else {
                    func_80238EF4(var_a0, var_a1, var_a2, var_a3);
                }
            } else {
block_27:
                var_a1 += 1;
                var_a0 += 0x5C;
                var_a3 += 0x5C;
                if (var_a1 >= (u32) D_8006973C) {

                } else {
                    goto loop_6;
                }
            }
        }
    }
}
