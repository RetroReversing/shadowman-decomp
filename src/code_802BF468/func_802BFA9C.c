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

M2C_UNK func_8022F17C(M2C_UNK);                     /* extern */
M2C_UNK func_8022F360();                            /* extern */
extern s32 D_8004563C;
extern s8 D_8007BD98;
extern s8 D_8007BDF8;

void func_802BFA9C(void) {
    if (D_8004563C < 3) {
        D_8007BD98 = 1;
        func_8022F360();
        func_8022F17C(0);
        D_8007BDF8 = 1;
    }
}
