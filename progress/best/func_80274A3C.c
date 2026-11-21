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

void func_80274A3C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) & 0xEFFFFFFF & 0xFFFEFFFF);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) ((M2C_FIELD(arg0, s32 *, 0x48) & ~0x80) | 0x100);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (((M2C_FIELD(arg0, s32 *, 0x44) | 2) & ~0x10) | 0x08000000);
}
