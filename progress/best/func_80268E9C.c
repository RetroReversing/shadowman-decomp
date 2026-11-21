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

extern M2C_UNK D_80075AA8;

void func_80268E9C(void) {
    M2C_FIELD(&D_80075AA8, s32 *, 0x6C) = 0x1388;
    M2C_FIELD(&D_80075AA8, s32 *, 0x70) = 0x1388;
    M2C_FIELD(&D_80075AA8, s32 *, 0x74) = 0x2710;
    M2C_FIELD(&D_80075AA8, s32 *, 0x78) = 0;
    M2C_FIELD(&D_80075AA8, s32 *, 0x7C) = 0;
    M2C_FIELD(&D_80075AA8, s32 *, 0x80) = 0;
    M2C_FIELD(&D_80075AA8, s32 *, 0x88) = 0;
    M2C_FIELD(&D_80075AA8, s32 *, 0x84) = 0;
    M2C_FIELD(&D_80075AA8, s32 *, 0x90) = 0;
    M2C_FIELD(&D_80075AA8, s32 *, 0x8C) = 0;
}
