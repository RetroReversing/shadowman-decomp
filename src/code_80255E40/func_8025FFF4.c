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

M2C_UNK func_8025FEE8(M2C_UNK);                     /* extern */

void func_8025FFF4(void) {
    func_8025FEE8(0);
    func_8025FEE8(0x16);
    func_8025FEE8(0x18);
    func_8025FEE8(0x17);
    func_8025FEE8(0x1D);
    func_8025FEE8(0xA);
    func_8025FEE8(3);
    func_8025FEE8(0x1E);
    func_8025FEE8(4);
    func_8025FEE8(0x12);
    func_8025FEE8(7);
    func_8025FEE8(9);
    func_8025FEE8(6);
    func_8025FEE8(0xB);
    func_8025FEE8(0x14);
    func_8025FEE8(0x14);
    func_8025FEE8(1);
    func_8025FEE8(0x10);
    func_8025FEE8(0x1A);
    func_8025FEE8(2);
    func_8025FEE8(0x14);
    func_8025FEE8(0x1C);
    func_8025FEE8(0xE);
    func_8025FEE8(0xC);
    func_8025FEE8(0xD);
    func_8025FEE8(0x1A);
}
