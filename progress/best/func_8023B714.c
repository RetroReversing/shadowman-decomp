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
 * Saved: [0x10, 0x14, 0x18, 0x28, 0x2c, 0x38, 0x3c], gap at: 0x1c. */
void func_8023B714(void *arg0, void *arg1, void *arg2) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;

    temp_fv0 = *(f32 *)0x2024D0;
    temp_fs0 = M2C_FIELD(arg0, f32 *, 0) * (*(f32 *)0x2024D0);
    temp_fs0f = M2C_FIELD(arg0, f32 *, 4) * (*(f32 *)0x2024D0);
    temp_fs1 = func_80113BE0(temp_fs0);
    temp_fs1f = func_801132A0(temp_fs0);
    temp_fs0_2 = func_80113BE0(temp_fs0f);
    temp_fv0_2 = func_801132A0(temp_fs0f);
    temp_fv0f = temp_fs1 * temp_fv0_2;
    M2C_FIELD(arg1, f32 *, 0x10) = temp_fs1f;
    M2C_FIELD(arg1, f32 *, 0) = temp_fv0_2;
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) -temp_fs1;
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) -temp_fs0_2;
    M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_fs1 * temp_fs0_2);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_fs1f * temp_fs0_2);
    M2C_FIELD(arg1, f32 *, 0x1C) = temp_fv0f;
    M2C_FIELD(arg1, f32 *, 0x20) = (f32) (temp_fs1f * temp_fv0_2);
    M2C_FIELD(arg1, f32 *, 0x24) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg1, f32 *, 0x28) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 0x2C) = (f32) M2C_FIELD(arg2, f32 *, 8);
}
