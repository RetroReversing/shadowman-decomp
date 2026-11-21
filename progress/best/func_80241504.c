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

s32 func_80241614(f32, f32);                        /* extern */

s32 func_80241504(void *arg0, void *arg1, f32 arg2, void *arg3, f32 arg4) {
    f32 temp_fa0;
    f32 temp_fa0f;
    f32 temp_fa1;
    f32 temp_fa1f;
    f32 temp_fa1f_2;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_ft1_3;
    f32 temp_ft1f;
    f32 temp_ft1f_2;
    f32 temp_ft1f_3;
    f32 temp_ft2;
    f32 temp_ft2_2;
    f32 temp_ft2_3;
    f32 temp_ft2f;
    f32 temp_ft3;
    f32 temp_ft3f;
    f32 temp_ft4;
    f32 temp_ft4f;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    s32 var_v0;

    temp_fa1f = arg4 + arg2;
    temp_fa1f_2 = temp_fa1f * temp_fa1f;
    temp_fv1 = M2C_FIELD(arg1, f32 *, 4);
    temp_ft4f = M2C_FIELD(arg0, f32 *, 4);
    temp_ft3 = temp_fv1 - temp_ft4f;
    temp_fv0f = M2C_FIELD(arg1, f32 *, 8);
    temp_ft4 = M2C_FIELD(arg0, f32 *, 8);
    temp_ft2f = temp_fv0f - temp_ft4;
    temp_fa0f = M2C_FIELD(arg3, f32 *, 4);
    temp_ft1f = temp_fa0f - temp_fv1;
    temp_ft3f = M2C_FIELD(arg3, f32 *, 8);
    temp_ft2 = temp_ft3f - temp_fv0f;
    temp_fa1 = M2C_FIELD(arg3, f32 *, 0);
    temp_fv0 = M2C_FIELD(arg1, f32 *, 0);
    temp_ft1 = temp_fa1 - temp_fv0;
    temp_ft5 = M2C_FIELD(arg0, f32 *, 0);
    temp_fa0 = temp_fv0 - temp_ft5;
    temp_fv1f = (temp_fa0 * temp_fa0) + (temp_ft3 * temp_ft3) + (temp_ft2f * temp_ft2f);
    if (((temp_ft1 * temp_ft1) + (temp_ft1f * temp_ft1f) + (temp_ft2 * temp_ft2)) < temp_fa1f_2) {
        /* Duplicate return node #1. Try simplifying control flow for better match */
        return 1;
    }
    temp_ft1_2 = temp_fa1 - temp_ft5;
    temp_ft1f_2 = temp_fa0f - temp_ft4f;
    temp_ft2_2 = temp_ft3f - temp_ft4;
    if (!(((temp_ft1_2 * temp_ft1_2) + (temp_ft1f_2 * temp_ft1f_2) + (temp_ft2_2 * temp_ft2_2)) < temp_fa1f_2)) {
        if (temp_fv1f == 0.0f) {
            return func_80241614(temp_fa0, temp_fa1);
        }
        temp_fv1f_2 = ((temp_ft1_2 * temp_fa0) + (temp_ft1f_2 * temp_ft3) + (temp_ft2_2 * temp_ft2f)) / temp_fv1f;
        if ((temp_fv1f_2 < 0.0f) || (*(f32 *)0x20279C < temp_fv1f_2)) {
            return 0;
        }
        temp_ft1_3 = M2C_FIELD(arg3, f32 *, 0) - (M2C_FIELD(arg0, f32 *, 0) + (temp_fa0 * temp_fv1f_2));
        temp_ft1f_3 = M2C_FIELD(arg3, f32 *, 4) - (M2C_FIELD(arg0, f32 *, 4) + (temp_ft3 * temp_fv1f_2));
        temp_ft2_3 = M2C_FIELD(arg3, f32 *, 8) - (M2C_FIELD(arg0, f32 *, 8) + (temp_ft2f * temp_fv1f_2));
        var_v0 = 1;
        if (!(((temp_ft1_3 * temp_ft1_3) + (temp_ft1f_3 * temp_ft1f_3) + (temp_ft2_3 * temp_ft2_3)) < temp_fa1f_2)) {
            var_v0 = 0;
        }
        return var_v0;
    }
    return 1;
}
