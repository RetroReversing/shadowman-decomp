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

extern s32 D_8002D174;
extern f32 D_8002D178;
extern s32 D_8005277C;

void func_802290C4(s32 *arg0) {
    f64 var_fv1;

    var_fv1 = (f64) D_8002D174;
    if (D_8002D174 < 0) {
        var_fv1 += *(f64 *)0x201D70;
    }
    *arg0 = (s32) ((f32) var_fv1 * D_8002D178);
    D_8002D174 += D_8005277C;
}
