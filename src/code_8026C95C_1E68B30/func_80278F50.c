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

M2C_UNK func_8023E724(s32, M2C_UNK, s32 *, s32);    /* extern */
M2C_UNK func_80278EA8();                            /* extern */
extern void *D_8007AFF8;
extern s32 D_8007B0C0;

void func_80278F50(void) {
    s32 sp10[3];

    sp10[0] = 0;
    sp10[1] = 0;
    sp10[2] = 0;
    func_8023E724(M2C_FIELD(D_8007AFF8, const s32 *, 0x10C), 4, sp10, D_8007B0C0 + 0x150);
    func_80278EA8();
}
