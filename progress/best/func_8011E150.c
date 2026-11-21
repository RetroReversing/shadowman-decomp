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

s32 func_8011E050();
s32 func_8011E1D4();
s32 func_8011E240();
s32 func_8011E298();
s32 func_8011E2EC();
s32 func_8011E300();
s32 func_8011E308();
f64 func_8011E320();

s32 func_8011E150(f32 arg0) {
    f64 temp_fs0;
    f64 temp_fs0_2;
    f64 temp_fv0;
    f64 temp_fv0_2;
    f64 temp_fv0_3;
    f64 temp_fv1;
    f64 temp_fv1_2;
    s32 temp_a2;
    u32 temp_a0;
    u32 temp_s0;

    temp_fs0_2 = (f64) arg0;
    if (temp_fs0_2 < 0.0) {
        return func_8011E308();
    }
    temp_fv0_2 = temp_fs0_2 * *(f64 *)0x103020;
    temp_fv1_2 = *(f64 *)0x103028;
    if (temp_fv1_2 <= temp_fv0_2) {
        temp_s0 = ((s32) (temp_fv0_2 - temp_fv1_2) | 0x80000000) << 0;
        if (func_8011E050(temp_s0, 0, 0) > 0) {
            func_8011E320(temp_s0, 0);
            return func_8011E240();
        }
        temp_a2 = temp_s0 << 0x1F;
        temp_fs0 = temp_fs0_2 - (2.0 * func_8011E320((temp_s0 & 0) | (temp_s0 >> 1), (0 & 1) | ((0U >> 1) | temp_a2), temp_a2));
        if (temp_fs0 < 0.0) {
            temp_fv1 = *(f64 *)0x103030;
            temp_fv0 = -temp_fs0;
            if (temp_fv1 <= temp_fv0) {
                return func_8011E300((u32) ((s32) (temp_fv0 - temp_fv1) | 0x80000000) > 0U);
            }
            return func_8011E298((s32) temp_fv0);
        }
        temp_fv0_3 = *(f64 *)0x103038;
        if (temp_fv0_3 <= temp_fs0) {
            temp_a0 = (s32) (temp_fs0 - temp_fv0_3) | 0x80000000;
            return temp_s0 + (temp_a0 < temp_a0);
        }
        return func_8011E2EC((s32) temp_fs0);
    }
    return func_8011E1D4();
}
