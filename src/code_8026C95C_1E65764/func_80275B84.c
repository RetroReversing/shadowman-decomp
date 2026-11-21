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

s32 func_80109318();
extern s32 D_8006A4FC;
extern void *D_8007AFF8;

void func_80275B84(s32 arg0, f32 arg1) {
    s16 temp_a0;
    s32 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    if (!(M2C_FIELD(D_8007AFF8, s32 *, 0x44) & 0x10000000) && (arg1 == 0.0f)) {
        temp_v1 = M2C_FIELD(D_8007AFF8, s32 *, 0x48);
        if (!(temp_v1 & 0x400)) {
            M2C_FIELD(D_8007AFF8, s32 *, 0x48) = (s32) (temp_v1 | 0x400);
            temp_v0 = *(s32 *)(((arg0 & 0xFFFF) * 0x38) + M2C_FIELD(M2C_FIELD(D_8007AFF8, void **, 0x10C), s32 *, 0x30));
            if (temp_v0 != NULL) {
                temp_v0_2 = M2C_FIELD(temp_v0, void **, 4);
                if (temp_v0_2 != NULL) {
                    temp_a0 = M2C_FIELD(temp_v0_2, s16 *, 2);
                    if (temp_a0 != -1) {
                        func_80109318(temp_a0, D_8006A4FC + 0x24, 0);
                    }
                }
            }
        }
    }
}
