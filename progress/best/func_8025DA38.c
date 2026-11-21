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

f32 func_8025DA38(f32 arg0, f32 arg1, f32 arg2) {
    f32 temp_fa0;
    f32 var_fv0;
    f32 var_fv0_2;

    temp_fa0 = (arg0 * arg0) + (arg1 * arg1) + (arg2 * arg2);
    var_fv0_2 = *(f32 *)0x20A1BC;
    if (temp_fa0 != 0.0f) {
        var_fv0_2 = temp_fa0;
    }
    if (sqrtf(var_fv0_2) != 0.0f) {
        var_fv0 = *(f32 *)0x20A1C0;
        if (temp_fa0 != 0.0f) {
            var_fv0 = temp_fa0;
        }
        return sqrtf(var_fv0);
    }
    return *(f32 *)0x20A1C4;
}
