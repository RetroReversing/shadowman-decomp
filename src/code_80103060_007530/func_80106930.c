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

s32 func_80104A14();
s32 func_80104BC0();
s32 func_8010670C();
s32 func_80106848();
s32 func_80118370();

s32 func_80106930(s32 *arg0, s16 arg1) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = func_80104BC0(arg0, arg1);
    temp_s1 = func_80104A14(*arg0 + (arg1 * 0xC)) + *arg0;
    temp_v0 = func_8010670C(temp_s2, 0);
    func_80118370(temp_v0, temp_s2);
    func_80106848(temp_v0, temp_s1 + 8);
    return temp_v0;
}
