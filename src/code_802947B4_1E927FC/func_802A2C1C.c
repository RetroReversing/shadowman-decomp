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

void *func_80296BC0();
extern char D_80036CB0[];

void *func_802A2C1C(s32 arg0) {
    f32 temp_fv0;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, 0, D_80036CB0);
    if (temp_v0 != NULL) {
        temp_fv0 = *(f32 *)0x216068;
        M2C_FIELD(temp_v0, u8 *, 0x72) |= 8;
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0;
    }
    return temp_v0;
}
