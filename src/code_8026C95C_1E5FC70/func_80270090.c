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

extern void *D_8007AFF8;

void func_80270090(u8 arg0) {
    void **__base_D_8007AFF8;
    __base_D_8007AFF8 = &D_8007AFF8;
    if (!(M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) & 0x10000000)) {
        if (M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x3B) != (arg0 & 0xFF)) {
            M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x3E) = 0;
            M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x3D) = 0x28;
        }
        M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x3B) = arg0;
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x6C) = (f32) *(f32 *)0x213F40;
        M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) = (s32) (M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) & ~0x400);
    }
}
