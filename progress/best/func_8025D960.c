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

f32 func_8025D9E8();                                /* extern */
f32 func_8025DA2C();                                /* extern */

f32 func_8025D960(void *arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 var_fv1;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0);
    sp0 = temp_fv0;
    temp_fv0_2 = M2C_FIELD(arg0, f32 *, 4);
    sp4 = temp_fv0_2;
    temp_fv0_3 = M2C_FIELD(arg0, f32 *, 8);
    temp_fv0f_2 = (temp_fv0 * temp_fv0) + (temp_fv0_2 * temp_fv0_2) + (temp_fv0_3 * temp_fv0_3);
    var_fv1 = *(f32 *)0x20A1B0;
    sp8 = temp_fv0_3;
    if (temp_fv0f_2 != 0.0f) {
        var_fv1 = temp_fv0f_2;
    }
    if (sqrtf(var_fv1) != 0.0f) {
        if (temp_fv0f_2 != 0.0f) {

        }
        return func_8025D9E8();
    }
    temp_fv0f = *(f32 *)0x20A1B8;
    if (temp_fv0f != 0.0f) {
        M2C_FIELD(arg0, f32 *, 0) = (f32) (sp0 / temp_fv0f);
        M2C_FIELD(arg0, f32 *, 4) = (f32) (sp4 / temp_fv0f);
        return func_8025DA2C();
    }
    M2C_FIELD(arg0, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0) = 0.0f;
    return temp_fv0f;
}
