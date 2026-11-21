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

void func_8011B340(s32 arg0, s32 arg1, s32 arg2) {
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    s16 temp_v0;
    s16 var_a3;
    s32 temp_v0_2;
    void *temp_a0;

    var_a3 = 0;
    do {
        temp_a0 = (var_a3 * 8) + arg0;
        temp_v0_2 = var_a3 * 4;
        temp_fv1 = M2C_FIELD(temp_a0, f32 *, 0);
        temp_ft0f = *(f32 *)(temp_v0_2 + arg1);
        temp_ft0 = temp_fv1 * temp_ft0f;
        temp_fv0f = M2C_FIELD(temp_a0, f32 *, 4);
        temp_fv0 = *(f32 *)(temp_v0_2 + arg2);
        temp_fv1f = temp_fv0f * temp_fv0;
        temp_fv1_2 = temp_fv1 * temp_fv0;
        temp_fv0f_2 = temp_fv0f * temp_ft0f;
        temp_v0 = var_a3 + 1;
        var_a3 = temp_v0;
        M2C_FIELD(temp_a0, f32 *, 0) = (f32) (temp_ft0 - temp_fv1f);
        M2C_FIELD(temp_a0, f32 *, 4) = (f32) (temp_fv1_2 + temp_fv0f_2);
    } while (temp_v0 < 0x80);
}
