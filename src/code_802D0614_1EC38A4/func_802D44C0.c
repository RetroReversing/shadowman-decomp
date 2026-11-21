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

void *func_802A0170();                              /* extern */
extern s32 D_8007C2AC;

void *func_802D44C0(void *arg0) {
    f32 temp_fv0;
    s32 temp_a0;
    void *temp_v0;

    temp_v0 = func_802A0170();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, f32 *, 0) = (f32) M2C_FIELD(arg0, s32 *, 8);
        M2C_FIELD(temp_v0, f32 *, 4) = (f32) M2C_FIELD(arg0, s32 *, 0xC);
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_a0 >= 0xC9) {
            temp_fv0 = (f32) temp_a0;
            M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0;
            M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0;
        }
    }
    D_8007C2AC = 1;
    return arg0 + 0x14;
}
