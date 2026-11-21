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

s16 func_8011B440(f32, f32);                             /* extern */

s16 func_8011B3F4(f32 arg0) {
    f32 temp_fv0;
    f32 var_fa0;

    if (arg0 >= 0.0f) {
        return func_8011B440(arg0, arg0 + *(f32 *)0x102888);
    }
    var_fa0 = arg0 - *(f32 *)0x102890;
    temp_fv0 = *(f32 *)0x102894;
    if (var_fa0 < temp_fv0) {
        var_fa0 = temp_fv0;
    }
    return (s16) (s32) var_fa0;
}
