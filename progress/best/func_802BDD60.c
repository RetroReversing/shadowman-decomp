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

M2C_UNK func_80109318(M2C_UNK, void *, M2C_UNK);    /* extern */
M2C_UNK func_8026E26C(s32);                         /* extern */
s32 func_8026E2F4(s32);                             /* extern */
M2C_UNK func_8029FD28();                            /* extern */
M2C_UNK func_802BDDEC();                            /* extern */
M2C_UNK func_802BDDF4();                            /* extern */
extern u32 D_80030BCC;
extern M2C_UNK D_80045440;
extern s32 D_800458F0;
extern s32 D_80074BB0;
extern M2C_UNK D_80075568;
extern M2C_UNK D_80075F20;

void func_802BDD60(void) {
    M2C_UNK *__base_D_80045440;
    f32 temp_ft0;
    f32 temp_fv1;
    f32 var_fv1f;
    u32 var_s2;
    void *var_s0;
    M2C_UNK *__base_D_80075F20;

    __base_D_80075F20 = &D_80075F20;

    if (D_800458F0 == 0) {
        if (D_80074BB0 != 0x11) {
            if (D_80074BB0 >= 0x12) {
                if (D_80074BB0 != 0x12) {
                    if (D_80074BB0 != 0x13) {
                        func_802BDDF4();
                        return;
                    }
                    func_802BDDEC();
                    return;
                }
                func_802BDDEC();
            } else {
                if (D_80074BB0 != 0x10) {
                    func_802BDDF4();
                    return;
                }
                var_s2 = 0;
                __base_D_80045440 = &D_80045440;
                var_s0 = __base_D_80045440 + 4;
                __repair_rows: {
                    if (M2C_FIELD(var_s0, s32 *, 0xC) == 0) {
                        var_fv1f = M2C_FIELD(&D_80075568, f32 *, 0x28) - M2C_FIELD(var_s0, f32 *, 4);
                        temp_ft0 = M2C_FIELD(&D_80075568, f32 *, 0x24) - M2C_FIELD(var_s0, f32 *, 0);
                        temp_fv1 = M2C_FIELD(&D_80075568, f32 *, 0x2C) - M2C_FIELD(var_s0, f32 *, 8);
                        if (0 == 0xB) {
                            var_fv1f *= 2.0f;
                        }
                        if (0 == 2) {
                            var_fv1f *= *(f32 *)0x218164;
                        }
                        if (((temp_ft0 * temp_ft0) + (var_fv1f * var_fv1f) + (temp_fv1 * temp_fv1)) < M2C_FIELD(var_s0, f32 *, 0x14)) {
                            if (func_8026E2F4(M2C_FIELD(var_s0, s32 *, 0x10)) == 0) {
                                func_8026E26C(M2C_FIELD(var_s0, s32 *, 0x10));
                                func_8029FD28();
                                func_80109318(0xF1, &D_80075568 + 0x24, 0);
                                M2C_FIELD(__base_D_80075F20, u8 *, 1) = (u8) M2C_FIELD(var_s0, u8 *, 0x1F);
                            }
                            D_80030BCC = var_s2;
                        }
                    }
                    var_s2 += 1;
                    var_s0 += 0x20;
                }
if (var_s2 < 0xFU) goto __repair_rows;
            }
        } else {
            func_802BDDEC();
        }
    }
}
