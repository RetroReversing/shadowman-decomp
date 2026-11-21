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

void *func_80103878(M2C_UNK, M2C_UNK, M2C_UNK *);   /* extern */
s32 func_80104A14(s32);                             /* extern */
M2C_UNK func_80105074(s32 *, s32, void *);          /* extern */
extern M2C_UNK D_100560;
extern M2C_UNK D_10056C;

s32 func_80104CFC(s32 *arg0, s32 arg1) {
    void *temp_s0;

    temp_s0 = func_80103878(0x2C, 3, NULL);
    M2C_FIELD(temp_s0, s32 *, 8) = func_80104A14(*arg0 + (arg1 * 0xC) + 4);
    M2C_FIELD(temp_s0, s32 *, 0xC) = 3;
    M2C_FIELD(temp_s0, s32 *, 4) = 0;
    M2C_FIELD(temp_s0, void **, 0x1C) = func_80103878(0x4200, 5, &D_10056C);
    M2C_FIELD(temp_s0, void **, 0x20) = func_80103878(0x4200, 5, &D_10056C);
    M2C_FIELD(temp_s0, void **, 0x28) = func_80103878(0x314, 4, &D_100560);
    M2C_FIELD(temp_s0, s32 *, 0x24) = -1;
    M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
    func_80105074(arg0, arg1, temp_s0);
    return (s32) temp_s0;
}
