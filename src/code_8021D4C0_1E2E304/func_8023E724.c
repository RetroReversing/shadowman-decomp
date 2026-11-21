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

void func_8023E724(void *arg0, s32 arg1, void *arg2, void *arg3) {
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_fv1f;
    void *temp_a1;

    temp_fv1f = M2C_FIELD(arg2, f32 *, 0);
    temp_a1 = (arg1 << 6) + M2C_FIELD(arg0, s32 *, 0x40);
    temp_ft0f = M2C_FIELD(arg2, f32 *, 4);
    temp_ft0 = M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg3, f32 *, 0) = (f32) ((temp_fv1f * M2C_FIELD(temp_a1, f32 *, 0)) + (temp_ft0f * M2C_FIELD(temp_a1, f32 *, 4)) + (temp_ft0 * M2C_FIELD(temp_a1, f32 *, 8)) + M2C_FIELD(temp_a1, f32 *, 0x24));
    M2C_FIELD(arg3, f32 *, 4) = (f32) ((temp_fv1f * M2C_FIELD(temp_a1, f32 *, 0xC)) + (temp_ft0f * M2C_FIELD(temp_a1, f32 *, 0x10)) + (temp_ft0 * M2C_FIELD(temp_a1, f32 *, 0x14)) + M2C_FIELD(temp_a1, f32 *, 0x28));
    M2C_FIELD(arg3, f32 *, 8) = (f32) ((temp_fv1f * M2C_FIELD(temp_a1, f32 *, 0x18)) + (temp_ft0f * M2C_FIELD(temp_a1, f32 *, 0x1C)) + (temp_ft0 * M2C_FIELD(temp_a1, f32 *, 0x20)) + M2C_FIELD(temp_a1, f32 *, 0x2C));
}
