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

f32 func_8011BBC0(f32 arg0) {
    f32 temp_fv0;
    f32 temp_fv1f;
    f32 var_fv0;
    f32 var_fv0f;
    f32 var_fv1;
    s32 var_v0;
    s32 var_v1;

    temp_fv1f = fabsf(arg0);
    if (temp_fv1f < *(f32 *)0x102A24) {
        var_fv0 = *(f32 *)0x102A28;
        /* Duplicate return node #2. Try simplifying control flow for better match */
        return var_fv0;
    }
    var_v1 = (s32) (temp_fv1f * *(f32 *)0x102A2C);
    var_v0 = 1;
    if (var_v1 >= 0x401) {
        var_fv0 = 0.0f;
        if (arg0 >= 0.0f) {
            return *(f32 *)0x102A20;
        }
        return var_fv0;
    }
    var_fv0f = *(f32 *)0x102A34;
    var_fv1 = var_fv0f;
    do {
        var_fv1 *= (temp_fv1f - ((f32) var_v1 * *(f32 *)0x102A30)) / (f32) var_v0;
        temp_fv0 = var_fv0f;
        var_fv0f += var_fv1;
        var_v0 += 1;
    } while (var_fv0f != temp_fv0);
    if (var_v1 != 0) {
        do {
            var_v1 -= 1;
            var_fv0f *= 2.0f;
        } while (var_v1 != 0);
    }
    if (!(arg0 >= 0.0f)) {
        return *(f32 *)0x102A38 / var_fv0f;
    }
    return var_fv0f;
}
