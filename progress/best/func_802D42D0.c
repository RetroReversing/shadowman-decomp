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

extern char D_80045930[];

void *func_802D42D0(void *arg0) {
    char *__base_D_80045930;
    __base_D_80045930 = D_80045930;
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 4) * 0x14) + D_80045930), u8 *, 0x11) = (u8) M2C_FIELD(arg0, u8 *, 0xB);
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 4) * 0x14) + __base_D_80045930), u8 *, 0x12) = (u8) M2C_FIELD(arg0, u8 *, 0xF);
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 4) * 0x14) + __base_D_80045930), u8 *, 0x13) = (u8) M2C_FIELD(arg0, u8 *, 0x13);
    return arg0 + 0x14;
}
