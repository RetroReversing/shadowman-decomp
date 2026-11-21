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

f32 func_80236880(void *, f32 *);                   /* extern */
M2C_UNK func_80270E0C(f32);                         /* extern */
M2C_UNK func_802776D8(u8);                          /* extern */
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_8028D100(void) {
    void **__base_D_8007AFF8;
    void **__base_D_8006A4FC;
    f32 sp10[3];
    f32 temp_fv0;
    f32 var_fv0f;

    __base_D_8007AFF8 = &D_8007AFF8;
    sp10[0] = M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x70);
    sp10[1] = M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x74);
    sp10[2] = M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x78);
    __base_D_8006A4FC = &D_8006A4FC;
    var_fv0f = (M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x1C) - func_80236880((*__base_D_8006A4FC) + 0x24, sp10)) + *(f32 *)0x215404;
    if (var_fv0f < 0.0f) {
        var_fv0f += *(f32 *)0x215408;
    }
    temp_fv0 = *(f32 *)0x21540C;
    if (temp_fv0 < var_fv0f) {
        var_fv0f -= temp_fv0;
    }
    if ((var_fv0f < *(f32 *)0x215410) || (*(f32 *)0x215414 < var_fv0f)) {
        func_802776D8(M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x3B));
        func_80270E0C((f32) M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x5C));
    }
}
