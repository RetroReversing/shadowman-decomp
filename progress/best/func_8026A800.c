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

extern M2C_UNK D_80030EA4;
extern M2C_UNK D_80075B40;

void func_8026A800(void) {
    M2C_FIELD(&D_80075B40, s16 *, 2) = 0xFFFF;
    M2C_FIELD(&D_80075B40, s16 *, 0) = 0xFFFF;
    M2C_FIELD(&D_80030EA4, s8 *, 0) = 0;
    M2C_FIELD(&D_80030EA4, s8 *, 1) = 0;
}
