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

f32 func_802A662C();                                /* extern */

f32 func_802A65D0(void *arg0, f32 arg1, f32 arg2) {
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    f32 var_fv0;

    temp_fv1 = M2C_FIELD(arg0, f32 *, 0x30);
    if (temp_fv1 != 0.0f) {
        temp_fv1f = M2C_FIELD(arg0, f32 *, 0x2C);
        temp_fv0f = temp_fv1f * arg2;
        if (!(temp_fv0f <= temp_fv1)) {
            var_fv0 = arg1;
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return var_fv0;
        }
        temp_fv1f_2 = temp_fv1f - temp_fv0f;
        if (temp_fv1f_2 != 0.0f) {
            var_fv0 = arg1 * (*(f32 *)0x2162C0 - ((temp_fv1 - temp_fv0f) / temp_fv1f_2));
            return var_fv0;
        }
        return func_802A662C();
    }
    return 0.0f;
}
