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

M2C_UNK func_8010B470(f32);                         /* extern */
extern void *D_8007AFF8;

void func_8010E7D8(void *arg0, s32 arg1) {
    f32 var_fa0;
    f32 var_fv0;
    u8 temp_v0;
    void *temp_v1;

    if (M2C_FIELD(arg0, u8 *, 0x138) == 0) {
        temp_v1 = arg1 + (M2C_FIELD(M2C_FIELD(D_8007AFF8, void **, 0x10C), s16 *, 4) * 4);
        var_fa0 = M2C_FIELD(arg0, f32 *, 0x1C) * *(f32 *)0x1020D8 * (f32) M2C_FIELD(temp_v1, u8 *, 0);
        temp_v0 = M2C_FIELD(temp_v1, u8 *, 1);
        var_fv0 = (f32) temp_v0;
        if ((var_fv0 < var_fa0) || (var_fv0 = (f32) -(s32) temp_v0, (var_fa0 < var_fv0))) {
            var_fa0 = var_fv0;
        }
        func_8010B470(var_fa0);
    }
}
