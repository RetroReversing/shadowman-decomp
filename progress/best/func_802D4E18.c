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
extern M2C_UNK D_8007C888;

void *func_802D4E18(void *arg0) {
    M2C_FIELD(&D_8007BF58, f32 *, 0x2F0) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(&D_8007BF58, f32 *, 0x2F4) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(&D_8007BF58, f32 *, 0x2F8) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    if (M2C_FIELD(&D_8007BF58, u8 *, 0x388) != 0) {
        M2C_FIELD(&D_8007BF58, f32 *, 0x308) = (f32) M2C_FIELD(arg0, f32 *, 4);
        M2C_FIELD(&D_8007BF58, f32 *, 0x30C) = (f32) M2C_FIELD(arg0, f32 *, 8);
        M2C_FIELD(&D_8007BF58, f32 *, 0x310) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    }
    M2C_FIELD(&D_8007C888, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(&D_8007C888, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(&D_8007C888, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    return arg0 + 0x10;
}
