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

extern f32 D_80074BC0;
extern M2C_UNK D_8007BF58;

void func_802D25C0(void) {
    if (M2C_FIELD(&D_8007BF58, f32 *, 0x338) > 0.0f) {
        M2C_FIELD(&D_8007BF58, f32 *, 0x2FC) = (f32) (M2C_FIELD(&D_8007BF58, f32 *, 0x2FC) + (M2C_FIELD(&D_8007BF58, f32 *, 0x32C) * D_80074BC0));
        M2C_FIELD(&D_8007BF58, f32 *, 0x300) = M2C_BITWISE(f64, (M2C_FIELD(&D_8007BF58, f32 *, 0x304) + (M2C_FIELD(&D_8007BF58, f32 *, 0x334) * D_80074BC0)));
    }
    M2C_FIELD(&D_8007BF58, f32 *, 0x338) = (f32) (M2C_FIELD(&D_8007BF58, f32 *, 0x338) - D_80074BC0);
    if (M2C_FIELD(&D_8007BF58, f32 *, 0x33C) > 0.0f) {
        M2C_FIELD(&D_8007BF58, f32 *, 0x2F0) = (f32) (M2C_FIELD(&D_8007BF58, f32 *, 0x2F0) + (M2C_FIELD(&D_8007BF58, f32 *, 0x320) * D_80074BC0));
        M2C_FIELD(&D_8007BF58, f32 *, 0x2F4) = M2C_BITWISE(f64, (M2C_FIELD(&D_8007BF58, f32 *, 0x2F8) + (M2C_FIELD(&D_8007BF58, f32 *, 0x328) * D_80074BC0)));
    }
    M2C_FIELD(&D_8007BF58, f32 *, 0x33C) = (f32) (M2C_FIELD(&D_8007BF58, f32 *, 0x33C) - D_80074BC0);
}
