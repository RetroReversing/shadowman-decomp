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

extern void *D_8006A4FC;
extern void *D_8007AFF8;

f32 func_80272260(void) {
    f32 temp_fv0;
    f32 var_fv0f;

    var_fv0f = M2C_FIELD(D_8006A4FC, f32 *, 0x1C) - M2C_FIELD(D_8007AFF8, f32 *, 0x84);
    if (var_fv0f < 0.0f) {
        var_fv0f += *(f32 *)0x213FD8;
    }
    temp_fv0 = *(f32 *)0x213FDC;
    if (temp_fv0 < var_fv0f) {
        var_fv0f -= temp_fv0;
    }
    return var_fv0f;
}
