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

f32 func_80236970(void *arg0, void *arg1, f32 arg2) {
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1f;
    f32 var_fv0;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(arg1, f32 *, 0);
    temp_fv1f = M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg1, f32 *, 4);
    temp_fv0f = M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(arg1, f32 *, 8);
    var_fv0 = (temp_fv0 * temp_fv0) + (temp_fv1f * temp_fv1f) + (temp_fv0f * temp_fv0f);
    if (!(var_fv0 < (arg2 * arg2))) {
        var_fv0 = 0.0f;
    }
    return var_fv0;
}
