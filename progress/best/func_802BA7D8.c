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

extern M2C_UNK D_8003A4F4;

void func_802BA7D8(void) {
    M2C_FIELD(&D_8003A4F4, u16 *, 0x378) = (u16) (M2C_FIELD(&D_8003A4F4, u16 *, 0x378) | 0x40);
    M2C_FIELD(&D_8003A4F4, u16 *, 0x7A0) = (u16) (M2C_FIELD(&D_8003A4F4, u16 *, 0x7A0) | 0x40);
}
