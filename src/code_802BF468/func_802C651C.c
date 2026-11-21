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

M2C_UNK func_802A52E4(M2C_UNK, M2C_UNK);            /* extern */
s32 func_802C3E08();                                /* extern */
extern s32 D_80030E54;

void func_802C651C(void) {
    if ((D_80030E54 & 8) && (func_802C3E08() != 0)) {
        func_802A52E4(8, 9);
        func_802A52E4(8, 0xD);
        func_802A52E4(8, 0x10);
        func_802A52E4(8, 0x14);
    }
}
