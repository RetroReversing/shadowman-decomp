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

extern void *D_80061A10;

s32 func_80232190(void *arg0, void *arg1) {
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    s32 var_a2;
    s32 var_v0;
    u16 temp_v0;
    void *temp_v0_2;
    void *var_v1;

    temp_fv1 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_ft1 = M2C_FIELD(arg0, f32 *, 0);
    temp_ft0f = M2C_FIELD(arg0, f32 *, 4);
    D_80061A10 = arg1;
    temp_v0 = M2C_FIELD(arg1, u16 *, 0x30);
    temp_ft0 = M2C_FIELD(arg0, f32 *, 8);
    var_a2 = 0;
    if (temp_v0 != 0) {
        var_v1 = M2C_FIELD(arg1, s32 *, 0x14) + 0x10;
loop_2:
        temp_v0_2 = M2C_FIELD(arg1, s32 *, 0x1C) + (M2C_FIELD(var_v1, u16 *, -8) * 0x10);
        var_a2 += 1;
        if (fabsf((M2C_FIELD(temp_v0_2, f32 *, 0) * temp_ft1) + (M2C_FIELD(temp_v0_2, f32 *, 4) * temp_ft0f) + (M2C_FIELD(temp_v0_2, f32 *, 8) * temp_ft0) + M2C_FIELD(temp_v0_2, f32 *, 0xC)) < temp_fv1) {
            temp_fv1f = (f32) M2C_FIELD(var_v1, u16 *, 0);
            temp_fv0f = temp_ft1 - (f32) M2C_FIELD(var_v1, s16 *, -6);
            temp_fv1_2 = temp_ft0f - (f32) M2C_FIELD(var_v1, s16 *, -4);
            temp_fv0 = temp_ft0 - (f32) M2C_FIELD(var_v1, s16 *, -2);
            var_v0 = var_a2 < (s32) temp_v0;
            if (((temp_fv0f * temp_fv0f) + (temp_fv1_2 * temp_fv1_2) + (temp_fv0 * temp_fv0)) < ((temp_fv1f * temp_fv1f) + (temp_fv1 * temp_fv1 * *(f32 *)0x2022D4))) {
                return 1;
            }
            goto block_6;
        }
        var_v0 = var_a2 < (s32) temp_v0;
block_6:
        var_v1 += 0x12;
        if (var_v0 == 0) {
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_2;
    }
    return 0;
}
