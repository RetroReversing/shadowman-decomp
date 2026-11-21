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

extern s32 (*D_800596A0)(s32);

void func_80229B08(s32 arg0, void *arg1) {
    s32 (*temp_v0)();

    if (arg1 != NULL) {
        temp_v0 = M2C_FIELD(arg1, s32 (**)(), 0x20);
        if (temp_v0 != NULL) {
            temp_v0();
        }
        if (D_800596A0 != NULL) {
            D_800596A0(M2C_FIELD(arg1, s32 *, 0xC));
        }
    }
}
