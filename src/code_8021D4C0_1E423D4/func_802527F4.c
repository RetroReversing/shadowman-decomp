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
s32 func_80255F0C();
s32 func_8025B644();
extern s32 D_80030C58;

void func_802527F4(void *arg0) {
    f32 temp_fs0;
    void *temp_a1;
    void *temp_s1;
    void *var_s0;

    func_8025B644();
    temp_s1 = M2C_FIELD(arg0, void **, 8);
    var_s0 = *(s32 *)*(s32 *)((M2C_FIELD(temp_s1, s8 *, 0x71) * 4) + D_80030C58);
    if (var_s0 != NULL) {
        temp_fs0 = *(f32 *)0x203318;
        do {
            if (M2C_FIELD(var_s0, s16 *, 0x14) == 0x14F) {
                temp_a1 = M2C_FIELD(var_s0, void **, 8);
                if (fabsf(M2C_FIELD(temp_s1, f32 *, 0) - M2C_FIELD(temp_a1, f32 *, 0)) < temp_fs0) {
                    if (*M2C_FIELD(temp_a1, s32 **, 0x6C) == 1) {
                        func_80109318(0x1B7, temp_a1 + 0x24, 0);
                    }
                    func_80255F0C(var_s0);
                }
            }
            var_s0 = M2C_FIELD(var_s0, void **, 0);
        } while (var_s0 != NULL);
    }
}
