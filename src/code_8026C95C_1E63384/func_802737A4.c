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

extern void *D_8007AFF8;

void *func_802737A4(void) {
    void *var_a0;

    var_a0 = M2C_FIELD(D_8007AFF8, void **, 0x110);
    if ((var_a0 != NULL) && (M2C_FIELD(M2C_FIELD(var_a0, void **, 0x88), s16 *, 0x16) == 0x10)) {
        var_a0 = NULL;
        M2C_FIELD(D_8007AFF8, void **, 0x110) = NULL;
    }
    return var_a0;
}
