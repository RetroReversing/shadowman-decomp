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

extern float D_8007DB8C;
f32 func_8011BA50(f32);
extern char D_8007DB88[];

void func_802B6FA4(void *arg0, f32 arg1) {
    f32 temp_fv0;

    temp_fv0 = func_8011BA50(arg1);
    M2C_FIELD(arg0, f32 *, 0) = M2C_BITWISE(f64, (M2C_FIELD(arg0, f32 *, 4) * temp_fv0));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * temp_fv0);
}
