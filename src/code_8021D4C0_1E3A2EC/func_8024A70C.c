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

M2C_UNK func_8024ED8C();                            /* extern */
extern void *D_8007BD48;

void func_8024A70C(void *arg0) {
    void *temp_v1;

    if ((D_8007BD48 != NULL) && (M2C_FIELD(D_8007BD48, s16 *, 0x52) == 3)) {
        temp_v1 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_v1, u16 *, 0x7E) = (u16) (M2C_FIELD(temp_v1, u16 *, 0x7E) & 0xFFFE);
        func_8024ED8C();
    }
}
