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

s32 func_8028D200(f32 arg0) {
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    s32 var_v0;

    temp_fv0 = fabsf(M2C_FIELD(D_8006A4FC, f32 *, 0x24) - M2C_FIELD(D_8007AFF8, f32 *, 0x70));
    temp_fv1 = fabsf(M2C_FIELD(D_8006A4FC, f32 *, 0x2C) - M2C_FIELD(D_8007AFF8, f32 *, 0x78));
    temp_fv0f = fabsf(M2C_FIELD(D_8006A4FC, f32 *, 0x28) - M2C_FIELD(D_8007AFF8, f32 *, 0x74));
    var_v0 = 1;
    if (!((f32) sqrt((f64) ((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1) + (temp_fv0f * temp_fv0f))) < arg0)) {
        var_v0 = 0;
    }
    return var_v0;
}
