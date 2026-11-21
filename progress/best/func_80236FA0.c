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

M2C_UNK func_80103B98(s32);                         /* extern */

s32 func_80236FA0(void *arg0) {
    f64 temp_fv1;
    s32 var_v0;

    var_v0 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x34) != 0) && ((temp_fv1 = *(f64 *)0x202408, (temp_fv1 < fabs((f64) (M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg0, f32 *, 0x20))))) || (temp_fv1 < fabs((f64) (M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(arg0, f32 *, 0x24)))) || (var_v0 = 1, (temp_fv1 < fabs((f64) (M2C_FIELD(arg0, f32 *, 0xC) - M2C_FIELD(arg0, f32 *, 0x28))))))) {
        func_80103B98(M2C_FIELD(arg0, s32 *, 0x34));
        var_v0 = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
    }
    return var_v0;
}
