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

f32 func_801132A0(f32);                             /* extern */
f32 func_80113BE0(f32);                             /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x28, 0x2c, 0x38, 0x3c, 0x40, 0x44], gap at: 0x1c. */
void func_80239AEC(void *arg0, void *arg1) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0f;
    f32 temp_fs0f_2;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_fs2;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;

    temp_fs0 = *(f32 *)0x2024A0;
    temp_fs1f = func_80113BE0(M2C_FIELD(arg0, f32 *, 0) * temp_fs0);
    temp_fs2 = func_801132A0(M2C_FIELD(arg0, f32 *, 0) * temp_fs0);
    temp_fs1 = func_80113BE0(M2C_FIELD(arg0, f32 *, 4) * temp_fs0);
    temp_fs0f = func_801132A0(M2C_FIELD(arg0, f32 *, 4) * temp_fs0);
    temp_fs0_2 = func_80113BE0(M2C_FIELD(arg0, f32 *, 8) * temp_fs0);
    temp_fv0 = func_801132A0(M2C_FIELD(arg0, f32 *, 8) * temp_fs0);
    temp_fv1f = -temp_fs2;
    temp_ft2 = temp_fs2 * temp_fv0;
    temp_ft0 = temp_fs0f * temp_fv0;
    temp_fs0f_2 = temp_fs0_2 * temp_fs0f;
    temp_fv0_2 = temp_fv0 * temp_fs1;
    temp_fs0_3 = temp_fs0_2 * temp_fs1;
    temp_fv1 = temp_fv0_2 * temp_fs1f;
    temp_ft0f = temp_ft0 * temp_fs1f;
    temp_fv0f = (temp_fs0f_2 * temp_fs1f) + temp_fv0_2;
    M2C_FIELD(arg1, f32 *, 0x1C) = temp_fs1f;
    M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_fv1f * temp_fs0_2);
    M2C_FIELD(arg1, f32 *, 0x10) = temp_ft2;
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) (temp_fv1f * temp_fs1);
    M2C_FIELD(arg1, f32 *, 0x20) = (f32) (temp_fs2 * temp_fs0f);
    M2C_FIELD(arg1, f32 *, 8) = temp_fv0f;
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) (temp_fv1 + temp_fs0f_2);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) (temp_fs0_3 - temp_ft0f);
    M2C_FIELD(arg1, f32 *, 0) = (f32) (temp_ft0 - (temp_fs0_3 * temp_fs1f));
}
