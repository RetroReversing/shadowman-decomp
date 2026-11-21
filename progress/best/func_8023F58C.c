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

void func_8023F58C(void *arg0, void *arg1, void *arg2) {
    f32 temp_fa0;
    f32 temp_fa0f;
    f32 temp_fa1;
    f32 temp_fa1f;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft0f_2;
    f32 temp_ft1f;
    f32 temp_ft2;
    f32 temp_ft2_2;
    f32 temp_ft2f;
    f32 temp_ft2f_2;
    f32 temp_ft3;
    f32 temp_ft4;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0);
    temp_ft0f = temp_fv0 * temp_fv0;
    temp_ft2f = M2C_FIELD(arg0, f32 *, 4);
    temp_ft0 = temp_ft2f * temp_ft2f;
    temp_ft2 = M2C_FIELD(arg0, f32 *, 8);
    temp_ft4 = temp_ft2 * temp_ft2;
    temp_fv1 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_fa1f = temp_fv1 * temp_fv1;
    temp_fa0 = temp_ft2f * temp_ft2;
    temp_fa1 = temp_ft2 * temp_fv1;
    temp_fa0f = temp_fv1 * temp_ft2f;
    temp_ft2f_2 = temp_ft2f * temp_fv0;
    temp_fv1_2 = temp_fv1 * temp_fv0;
    temp_ft2_2 = temp_ft2 * temp_fv0;
    temp_ft3 = M2C_FIELD(arg1, f32 *, 4);
    temp_ft1f = M2C_FIELD(arg1, f32 *, 8);
    temp_fv1f = M2C_FIELD(arg1, f32 *, 0);
    temp_ft0f_2 = temp_ft0f - temp_ft0;
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((temp_fv1f * (((temp_ft0f + temp_ft0) - temp_ft4) - temp_fa1f)) + (2.0f * ((temp_ft3 * ((temp_ft2f * temp_ft2) - temp_fv1_2)) + (temp_ft1f * (temp_fa0f + temp_ft2_2)))));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((temp_ft3 * ((temp_ft0f_2 + temp_ft4) - temp_fa1f)) + (2.0f * ((temp_ft1f * (temp_fa1 - temp_ft2f_2)) + (temp_fv1f * ((temp_ft2f * temp_ft2) + temp_fv1_2)))));
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((temp_ft1f * ((temp_ft0f_2 - temp_ft4) + temp_fa1f)) + (2.0f * ((temp_fv1f * (temp_fa0f - temp_ft2_2)) + (temp_ft3 * (temp_fa1 + temp_ft2f_2)))));
}
