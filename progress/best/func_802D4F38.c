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

extern M2C_UNK D_8007BF58;
extern f32 D_8007C860;
extern M2C_UNK D_8007C898;

void *func_802D4F38(void *arg0) {
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_fv0;
    f32 temp_fv1f;

    if (M2C_FIELD(&D_8007BF58, u8 *, 0x388) != 0) {
        M2C_FIELD(&D_8007BF58, f32 *, 0x2FC) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x314);
        M2C_FIELD(&D_8007BF58, f32 *, 0x300) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x318);
        M2C_FIELD(&D_8007BF58, f32 *, 0x304) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x31C);
        M2C_FIELD(&D_8007BF58, f32 *, 0x2F0) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x308);
        M2C_FIELD(&D_8007BF58, f32 *, 0x2F4) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x30C);
        M2C_FIELD(&D_8007BF58, f32 *, 0x2F8) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x310);
    }
    temp_fv1f = M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(&D_8007BF58, f32 *, 0x308) = temp_fv1f;
    temp_ft0 = M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(&D_8007BF58, f32 *, 0x30C) = temp_ft0;
    temp_ft0f = M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(&D_8007BF58, f32 *, 0x310) = temp_ft0f;
    temp_fv0 = 2.0f * M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(&D_8007BF58, f32 *, 0x33C) = temp_fv0;
    M2C_FIELD(&D_8007C898, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(&D_8007C898, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(&D_8007C898, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    D_8007C860 = M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(&D_8007BF58, f32 *, 0x320) = (f32) ((temp_fv1f - M2C_FIELD(&D_8007BF58, f32 *, 0x2F0)) / temp_fv0);
    M2C_FIELD(&D_8007BF58, f32 *, 0x324) = (f32) ((temp_ft0 - M2C_FIELD(&D_8007BF58, f32 *, 0x2F4)) / temp_fv0);
    M2C_FIELD(&D_8007BF58, f32 *, 0x328) = (f32) ((temp_ft0f - M2C_FIELD(&D_8007BF58, f32 *, 0x2F8)) / temp_fv0);
    return arg0 + 0x14;
}
