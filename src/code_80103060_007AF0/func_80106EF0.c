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

extern M2C_UNK D_8004CA1C;

M2C_UNK *func_80106EF0(u32 arg0) {
    M2C_UNK *var_v1;
    u16 temp_a1;

    var_v1 = &D_8004CA1C;
    if (&D_8004CA1C != NULL) {
loop_1:
        temp_a1 = M2C_FIELD(var_v1, u16 *, 4);
        if ((arg0 < temp_a1) || (arg0 >= (u32) (temp_a1 + M2C_FIELD(var_v1, u16 *, 6)))) {
            var_v1 = M2C_FIELD(var_v1, M2C_UNK **, 0);
            if (var_v1 != NULL) {
                goto loop_1;
            }
        }
    }
    return var_v1;
}
