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

s32 func_80297254();
s32 func_80299D2C();

void func_8029EA68(void *arg0) {
    s32 temp_a0;
    u32 var_s0;
    void *temp_s1;

    if (M2C_FIELD(arg0, f32 *, 0x54) == 0.0f) {
        temp_s1 = M2C_FIELD(arg0, void **, 0x44);
        if (temp_s1 != NULL) {
            var_s0 = 0;
            if (M2C_FIELD(temp_s1, u32 *, 0) != 0) {
                do {
                    temp_a0 = *(s32 *)((var_s0 * 4) + M2C_FIELD(temp_s1, s32 *, 4));
                    if (temp_a0 != 0) {
                        func_80299D2C(temp_a0, arg0);
                    }
                    var_s0 += 1;
                } while (var_s0 < (u32) M2C_FIELD(temp_s1, u32 *, 0));
            }
        }
        func_80297254(arg0);
    }
}
