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

M2C_UNK func_80109318(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8023E724(s32, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_80036B1C;
extern s32 D_800459B4;

void func_8028C3B0(void) {
    char sp10[0x10];

    func_8023E724(D_800459B4, 0, &D_80036B1C, sp10);
    func_80109318(-1, sp10, 0);
}
