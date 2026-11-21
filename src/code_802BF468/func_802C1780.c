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

s32 func_80109A78();
extern char D_80045884[];

void func_802C1780(s32 arg0) {
    char *__base_D_80045884;
    s32 *temp_s0;

    __base_D_80045884 = D_80045884;
    temp_s0 = (arg0 * 4) + __base_D_80045884;
    func_80109A78(*temp_s0);
    *temp_s0 = -1;
}
