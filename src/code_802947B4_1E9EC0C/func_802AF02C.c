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

s32 func_80103878(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_80297834(void *);                          /* extern */
M2C_UNK func_802A6508(void *, M2C_UNK);             /* extern */

void func_802AF02C(void *arg0) {
    f32 temp_fv0;
    s32 temp_v0;
    s32 temp_v1;
    u32 var_s0;

    temp_fv0 = *(f32 *)0x216788;
    M2C_FIELD(arg0, f32 *, 0x2C) = temp_fv0;
    M2C_FIELD(arg0, f32 *, 0x30) = temp_fv0;
    temp_v0 = func_80103878(0x58, 2, 0);
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v0;
    if (temp_v0 != 0) {
        var_s0 = 0;
        do {
            temp_v1 = var_s0 * 4;
            var_s0 += 1;
            M2C_FIELD((M2C_FIELD(arg0, s32 *, 0xC) + temp_v1), s32 *, 0x30) = func_80297834(arg0 + 0x54);
        } while (var_s0 < 0xAU);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
        func_802A6508(arg0, 0);
    }
}
