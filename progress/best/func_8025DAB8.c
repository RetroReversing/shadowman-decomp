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

f32 func_801132A0(f32);                             /* extern */
f32 func_80113BE0(f32);                             /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x28, 0x2c, 0x38, 0x3c, 0x40, 0x44], gap at: 0x1c. */
void func_8025DAB8(void *arg0, void *arg1) {
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_fs2;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_ft1f;
    f32 temp_ft2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;

    temp_fs0 = func_80113BE0(M2C_FIELD(arg0, f32 *, 0));
    temp_fs2 = func_801132A0(M2C_FIELD(arg0, f32 *, 0));
    temp_fs1 = func_80113BE0(M2C_FIELD(arg0, f32 *, 4));
    temp_fs1f = func_801132A0(M2C_FIELD(arg0, f32 *, 4));
    temp_fs0f = func_80113BE0(M2C_FIELD(arg0, f32 *, 8));
    temp_fv0 = func_801132A0(M2C_FIELD(arg0, f32 *, 8));
    temp_ft2 = temp_fs1 * temp_fv0;
    temp_fv1 = temp_fs1f * temp_fv0;
    temp_ft0 = temp_fs1 * temp_fs0f;
    temp_ft1 = temp_fs1f * temp_fs0f;
    temp_fv0_2 = temp_fs2 * temp_fv0;
    temp_fv1f = temp_fs0 * temp_ft2;
    temp_ft1f = temp_fs0 * temp_fv1;
    temp_fv1_2 = temp_fv1 + (temp_fs0 * temp_ft0);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) -temp_fs0;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_fs2 * temp_fs1);
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) (temp_fs2 * temp_fs0f);
    M2C_FIELD(arg1, f32 *, 0x10) = temp_fv0_2;
    M2C_FIELD(arg1, f32 *, 0x20) = (f32) (temp_fs2 * temp_fs1f);
    M2C_FIELD(arg1, f32 *, 0) = temp_fv1_2;
    M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_fv1f - temp_ft1);
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) ((temp_fs0 * temp_ft1) - temp_ft2);
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) (temp_ft0 + temp_ft1f);
}
