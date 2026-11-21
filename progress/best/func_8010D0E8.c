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

extern char D_8004EC20[];
extern char D_8004EC80[];
extern void *D_8007AFF8;

void func_8010D0E8(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    *((temp_a0 * 2) + D_8004EC20) = -1;
    *(temp_a0 + D_8004EC80) = 0;
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) ((M2C_FIELD(D_8007AFF8, s32 *, 0x44) | 0x10) & ~0x80 & ~2);
}
