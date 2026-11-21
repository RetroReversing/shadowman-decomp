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

f32 func_8011B7E0(f32, f32);                        /* extern */

f32 func_802368F0(void *arg0, void *arg1) {
    f32 temp_fa1;
    f32 temp_fv0;
    f32 var_fv1;

    temp_fa1 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0);
    temp_fv0 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(arg0, f32 *, 8);
    var_fv1 = -(func_8011B7E0(M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(arg0, f32 *, 4), sqrtf((temp_fa1 * temp_fa1) + (temp_fv0 * temp_fv0))) * *(f32 *)0x2023DC);
    if (var_fv1 < 0.0f) {
        var_fv1 += *(f32 *)0x2023E0;
    }
    return var_fv1;
}
