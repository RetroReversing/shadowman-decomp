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

f32 func_8022A308(void *arg0, s16 arg1) {
    if ((M2C_FIELD(arg0, u16 *, 0x36) & 0x100)) {
        if ((arg1 != 0)) {
            return *(f32 *)0x201E14 - ((f32) arg1 * *(f32 *)0x201E10);
        }
    }
    return *(f32 *)0x201E18;
}
