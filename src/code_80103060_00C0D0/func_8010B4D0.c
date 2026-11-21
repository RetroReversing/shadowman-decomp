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

f32 func_8010B4D0(f32 arg0, f32 arg1) {
    f32 temp_fv1;
    f32 var_fa1;
    f32 var_fv0;

    var_fa1 = arg1;
    if (var_fa1 < 0.0f) {
        var_fa1 += *(f32 *)0x101F48;
    }
    temp_fv1 = *(f32 *)0x101F4C;
    if (temp_fv1 < var_fa1) {
        var_fa1 -= temp_fv1;
    }
    var_fv0 = fabsf(arg0 - var_fa1);
    if (*(f32 *)0x101F50 < var_fv0) {
        var_fv0 = temp_fv1 - var_fv0;
    }
    return var_fv0;
}
