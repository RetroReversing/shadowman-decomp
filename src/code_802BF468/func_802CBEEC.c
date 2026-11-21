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

M2C_UNK func_802C71E4();                            /* extern */
s32 func_802CB828();                                /* extern */
M2C_UNK func_802CBD70();                            /* extern */
M2C_UNK func_802CC190();                            /* extern */
extern M2C_UNK D_80044EB0;
extern s32 D_800458B0;

void func_802CBEEC(void) {
    if ((M2C_FIELD(&D_80044EB0, s32 *, 0) != 0) && (M2C_FIELD(&D_80044EB0, s16 *, 0x16) != 0)) {
        if ((func_802CB828() == 0) || (D_800458B0 == 2)) {
            func_802CBD70();
            goto block_5;
        }
    } else {
block_5:
        func_802C71E4();
        func_802CC190();
    }
}
