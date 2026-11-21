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

s32 func_80271F88();
extern void *D_8007AFF8;

void func_80275B40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(D_8007AFF8, void **, 0x10C), s16 *, 4);
    if ((temp_v0 != arg0) && (temp_v0 != arg1) && (temp_v0 != arg2)) {
        func_80271F88(arg0, arg3);
    }
}
