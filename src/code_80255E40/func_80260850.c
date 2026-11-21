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

extern M2C_UNK D_80074C50;

void func_80260850(s32 arg0, s32 arg1) {
    M2C_UNK *var_v1;
    s32 var_a2;

    var_a2 = 0;
    var_v1 = &D_80074C50;
loop_1:
    var_a2 += 1;
    if (M2C_FIELD(var_v1, s32 *, 4) == 0) {
        M2C_FIELD(var_v1, s32 *, 4) = arg0;
        M2C_FIELD(var_v1, s32 *, 0) = arg1;
        return;
    }
    var_v1 += 2;
    if (var_a2 >= 0x14) {
        return;
    }
    goto loop_1;
}
