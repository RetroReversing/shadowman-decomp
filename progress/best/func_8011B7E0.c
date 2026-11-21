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

f32 func_8011B834(f32, f32, s32);                   /* extern */
f32 func_8011B878(f32, f32, s32);                   /* extern */
extern M2C_UNK D_102950;

f32 func_8011B7E0(f32 arg0, f32 arg1) {
    f32 temp_fv1f;
    f32 var_fa0;
    f32 var_fa0_2;
    f32 var_fa1;
    f32 var_fv0;
    s32 temp_a0;
    s32 var_a0;
    M2C_UNK *__base_D_102950;

    __base_D_102950 = &D_102950;

    var_fa0 = arg0;
    var_fa1 = arg1;
    var_a0 = 0;
    if (var_fa0 < 0.0f) {
        var_a0 = 0xF;
        var_fa0 = -var_fa0;
    }
    if (var_fa1 < 0.0f) {
        var_a0 ^= 7;
        var_fa1 = -var_fa1;
    }
    if (var_fa1 < var_fa0) {
        return func_8011B834(var_fa0, var_fa1, var_a0);
    }
    var_fv0 = 0.0f;
    if (var_fa1 != 0.0f) {
        if (!(var_fa0 < (var_fa1 * *(f32 *)0x102990))) {
            temp_a0 = var_a0 ^ 1;
            var_fa0_2 = (var_fa1 - var_fa0) / (var_fa0 + var_fa1);
            if (temp_a0 & 1) {
                var_fa0_2 = -var_fa0_2;
            }
            temp_fv1f = var_fa0_2 * var_fa0_2;
            var_fv0 = (var_fa0_2 * (*(f32 *)0x102930 + (temp_fv1f * (*(f32 *)0x100004 + (temp_fv1f * (*(f32 *)0x100008 + (temp_fv1f * (*(f32 *)0x10000C + (temp_fv1f * (*(f32 *)0x100010 + (temp_fv1f * (*(f32 *)0x100014 + (temp_fv1f * (*(f32 *)0x100018 + (temp_fv1f * *(f32 *)0x10001C))))))))))))))) + *((temp_a0 * 4) + __base_D_102950);
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return var_fv0;
        }
        return func_8011B878(var_fa1, var_fa1, var_a0);
    }
    return var_fv0;
}
