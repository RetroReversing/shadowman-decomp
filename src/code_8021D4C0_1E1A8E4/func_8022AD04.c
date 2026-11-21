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

M2C_UNK func_8022FE7C(s32);                         /* extern */

void func_8022AD04(s32 arg0, s32 arg1) {
    s32 var_a0;
    s32 var_s1;
    u16 temp_v1;
    void *var_s0;

    var_s1 = 0;
    if (arg1 > 0) {
        var_s0 = arg0 + 0x10;
        __repair_rows: {
            var_a0 = M2C_FIELD(var_s0, s32 *, 0);
            if (var_a0 != 0) {
                temp_v1 = M2C_FIELD(var_s0, u16 *, -2);
                if (!(temp_v1 & 6)) {
                    if (temp_v1 & 1) {
                        var_a0 = M2C_FIELD(var_s0, s32 *, 4);
                    }
                    func_8022FE7C(var_a0);
                }
                var_s1 += 1;
                if (!(M2C_FIELD(var_s0, u16 *, -2) & 8)) {
                    M2C_FIELD(var_s0, s32 *, 4) = 0;
                    M2C_FIELD(var_s0, s32 *, 0) = 0;
                }
            } else {
                var_s1 += 1;
            }
            var_s0 += 0x18;
        }
if (var_s1 < arg1) goto __repair_rows;
    }
}
