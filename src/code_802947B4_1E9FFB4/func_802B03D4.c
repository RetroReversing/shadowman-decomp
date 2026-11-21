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

M2C_UNK func_802A6508(void *, M2C_UNK);             /* extern */
M2C_UNK func_802A7CD4();                            /* extern */
extern f32 D_80036DB0;

void func_802B03D4(void *arg0) {
    f32 temp_fv0;

    func_802A7CD4(arg0);
    temp_fv0 = D_80036DB0 + *(f32 *)0x216860;
    D_80036DB0 = temp_fv0;
    M2C_FIELD(arg0, f32 *, 0x88) = temp_fv0;
    func_802A6508(arg0, 0x24);
}
