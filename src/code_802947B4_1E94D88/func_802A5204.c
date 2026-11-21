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

s32 func_80113AD0();                                /* extern */
M2C_UNK func_802A1140(void *, void *, f32, f32, f32, s32, f32, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_8007DB88;

void func_802A5204(void *arg0) {
    f32 temp_fv0;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x54) - M2C_FIELD(&D_8007DB88, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x54) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    }
    if (!(func_80113AD0() & 1)) {
        func_802A1140(arg0, arg0 + 0x18, 0.98f, 16.0f, *(f32 *)0x216224, 0x1C, (f32) (func_80113AD0() % 3), (s32) M2C_FIELD(arg0, u8 *, 0x68), (s32) M2C_FIELD(arg0, u8 *, 0x69), (s32) M2C_FIELD(arg0, u8 *, 0x6A), 2);
    }
}
