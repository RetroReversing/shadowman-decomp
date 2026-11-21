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

void func_8023F818(void *arg0, f32 arg1) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1_2;

    if (M2C_FIELD(arg0, f32 *, 0) < arg1) {
        temp_fv0f = M2C_FIELD(arg0, f32 *, 4);
        temp_fv0 = M2C_FIELD(arg0, f32 *, 8);
        temp_fv1 = M2C_FIELD(arg0, f32 *, 0xC);
        temp_fv0_2 = sqrtf((*(f32 *)0x2026B4 - (arg1 * arg1)) / ((temp_fv0f * temp_fv0f) + (temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1)));
        temp_fv1_2 = M2C_FIELD(arg0, f32 *, 8) * temp_fv0_2;
        temp_fv0f_2 = M2C_FIELD(arg0, f32 *, 0xC) * temp_fv0_2;
        M2C_FIELD(arg0, f32 *, 0) = arg1;
        M2C_FIELD(arg0, f32 *, 4) = M2C_BITWISE(f64, temp_fv1_2);
        M2C_FIELD(arg0, f32 *, 0xC) = temp_fv0f_2;
    }
}
