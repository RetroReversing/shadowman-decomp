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

void func_8024F0E4(void *arg0) {
    f32 temp_fv0f;
    s16 temp_v1;
    void *temp_a0;

    temp_v1 = M2C_FIELD(arg0, s16 *, 0x14);
    if ((temp_v1 == 0x1C1) || (temp_v1 == 0x1CD) || (temp_v1 == 0x17B)) {
        temp_a0 = M2C_FIELD(arg0, void **, 8);
        temp_fv0f = *(f32 *)0x2030E4;
        if (temp_fv0f < M2C_FIELD(temp_a0, f32 *, 0x10)) {
            M2C_FIELD(temp_a0, f32 *, 0x10) = temp_fv0f;
        }
    }
}
