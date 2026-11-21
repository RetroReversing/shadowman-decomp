#include "common.h"

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

s32 func_801043F8();
extern s32 D_800619D0;
extern s32 D_800619D4;
extern s32 D_800619D8;

void func_802367B4(void) {
    D_800619D8 = func_801043F8(D_800619D0 * 0x10, 2, 0);
    D_800619D4 = func_801043F8(D_800619D0 * 6, 2, 0, D_800619D0);
}
