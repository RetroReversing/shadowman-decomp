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

M2C_UNK func_8010EB98();                            /* extern */

void func_8010EA80(void *arg0, void *arg1, void *arg2, void *arg3) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    f32 temp_fv1f_3;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(arg1, f32 *, 0);
    sp0 = temp_fv0;
    temp_fv1f = M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg1, f32 *, 4);
    sp4 = temp_fv1f;
    temp_ft0 = M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(arg1, f32 *, 8);
    sp8 = temp_ft0;
    temp_fv0_2 = M2C_FIELD(arg2, f32 *, 0) - M2C_FIELD(arg1, f32 *, 0);
    sp10 = temp_fv0_2;
    temp_fv1 = M2C_FIELD(arg2, f32 *, 4) - M2C_FIELD(arg1, f32 *, 4);
    sp14 = temp_fv1;
    temp_fv0f = M2C_FIELD(arg2, f32 *, 8) - M2C_FIELD(arg1, f32 *, 8);
    sp18 = temp_fv0f;
    M2C_FIELD(arg3, f32 *, 0) = (f32) ((temp_fv1f * temp_fv0f) - (temp_ft0 * temp_fv1));
    temp_ft0_2 = M2C_FIELD(arg3, f32 *, 0);
    M2C_FIELD(arg3, f32 *, 4) = (f32) ((sp8 * temp_fv0_2) - (temp_fv0 * temp_fv0f));
    temp_fv0_3 = M2C_FIELD(arg3, f32 *, 4);
    temp_fv0f_2 = (sp0 * sp14) - (temp_fv1f * temp_fv0_2);
    temp_fv1f_2 = sqrtf((temp_ft0_2 * temp_ft0_2) + (temp_fv0_3 * temp_fv0_3) + (temp_fv0f_2 * temp_fv0f_2));
    M2C_FIELD(arg3, f32 *, 8) = temp_fv0f_2;
    if (temp_fv1f_2 == 0.0f) {
        M2C_FIELD(arg3, f32 *, 0) = 0.0f;
        func_8010EB98();
        return;
    }
    temp_fv1f_3 = *(f32 *)0x1020E0 / temp_fv1f_2;
    M2C_FIELD(arg3, f32 *, 0) = (f32) (temp_ft0_2 * temp_fv1f_3);
    M2C_FIELD(arg3, f32 *, 4) = M2C_BITWISE(f64, (M2C_FIELD(arg3, f32 *, 8) * temp_fv1f_3));
    M2C_FIELD(arg3, f32 *, 0xC) = (f32) ((M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg3, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg3, f32 *, 4)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(arg3, f32 *, 8)));
}
