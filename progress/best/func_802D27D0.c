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

extern f32 D_80030C70;
extern M2C_UNK D_8007BF58;

void func_802D27D0(void) {
    M2C_FIELD(&D_8007BF58, f32 *, 0x1E8) = (f32) (M2C_FIELD(&D_8007BF58, f32 *, 0x1E8) + ((M2C_FIELD(&D_8007BF58, f32 *, 0x1F4) - M2C_FIELD(&D_8007BF58, f32 *, 0x1E8)) / D_80030C70));
    M2C_FIELD(&D_8007BF58, f32 *, 0x1EC) = (f32) (M2C_FIELD(&D_8007BF58, f32 *, 0x1EC) + ((M2C_FIELD(&D_8007BF58, f32 *, 0x1F8) - M2C_FIELD(&D_8007BF58, f32 *, 0x1EC)) / D_80030C70));
    M2C_FIELD(&D_8007BF58, f32 *, 0x1F0) = (f32) (M2C_FIELD(&D_8007BF58, f32 *, 0x1F0) + ((M2C_FIELD(&D_8007BF58, f32 *, 0x1FC) - M2C_FIELD(&D_8007BF58, f32 *, 0x1F0)) / D_80030C70));
}
