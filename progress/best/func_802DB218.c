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

extern M2C_UNK D_202520;
extern M2C_UNK D_8006A4D0;

void func_802DB218(f32 arg0) {
    void *temp_v0;

    temp_v0 = ((s32) arg0 * 0x1E) + &D_202520;
    M2C_FIELD(&D_8006A4D0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(temp_v0, M2C_UNK *, 0));
    M2C_FIELD(&D_8006A4D0, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(temp_v0, M2C_UNK *, 4));
    M2C_FIELD(&D_8006A4D0, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(temp_v0, M2C_UNK *, 8));
    M2C_FIELD(&D_8006A4D0, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(temp_v0, M2C_UNK *, 0xC));
    M2C_FIELD(&D_8006A4D0, M2C_UNK *, 0x10) = M2C_UNALIGNED32(M2C_FIELD(temp_v0, M2C_UNK *, 0x10));
    M2C_FIELD(&D_8006A4D0, M2C_UNK *, 0x14) = M2C_UNALIGNED32(M2C_FIELD(temp_v0, M2C_UNK *, 0x14));
    M2C_FIELD(&D_8006A4D0, M2C_UNK *, 0x18) = M2C_UNALIGNED32(M2C_FIELD(temp_v0, M2C_UNK *, 0x18));
    M2C_FIELD(&D_8006A4D0, s16 *, 0x1C) = (s16) M2C_FIELD(temp_v0, s16 *, 0x1C);
}
