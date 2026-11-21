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

s32 func_80108B30();                                /* extern */
M2C_UNK func_80109DB4(M2C_UNK);                     /* extern */
M2C_UNK func_8011BA20(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_80268AF8(M2C_UNK);                         /* extern */
M2C_UNK func_802A3588(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern s32 D_8002D420;
extern u8 D_80030E59;
extern M2C_UNK D_80030EC0;
extern s32 D_800752D0;
extern M2C_UNK D_80075518;
extern s16 D_8007552A;
extern M2C_UNK D_80075568;
extern u8 D_8007DB81;

void func_802CE9D8(void) {
    char sp18[0x10];

    if (!(D_8002D420 & 0x100) || ((func_80268AF8(9) == 0) && (D_8007552A >= 0x29) && (D_8007DB81 == 0))) {
        func_8011BA20(sp18, 0, 0xC);
        if ((D_800752D0 == 0) && (D_80030E59 != 0)) {
            D_80030E59 = 0;
            func_802A3588(sp18, &D_80030EC0, 9);
        }
        func_8023DF7C(&D_80075568, &D_80075518, 0xF6, 0xA, 0x46, 0);
        if ((func_80268AF8(9) == 0) && (func_80108B30() == 0)) {
            func_80109DB4(1);
        }
    }
}
