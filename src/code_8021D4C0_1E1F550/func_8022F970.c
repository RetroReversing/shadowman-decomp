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

void *func_8022F630();                              /* extern */
M2C_UNK func_8022F914(void *);                      /* extern */

void func_8022F970(void *arg0) {
    u16 temp_v1;
    void *temp_v0;

    if (M2C_FIELD(arg0, s16 *, 4) != -1) {
        temp_v0 = func_8022F630();
        temp_v1 = M2C_FIELD(temp_v0, u16 *, 6);
        if (temp_v1 & 4) {
            M2C_FIELD(temp_v0, u16 *, 6) = (u16) (temp_v1 | 1);
        }
        func_8022F914(temp_v0);
        M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(temp_v0, u16 *, 0x18);
    }
}
