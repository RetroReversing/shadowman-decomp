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

s32 func_80257068(f32, f32, s32);                   /* extern */
M2C_UNK func_80257138(void *, s32);                 /* extern */
M2C_UNK func_802D0B28(s32, s32, M2C_UNK);            /* extern */
extern s32 *D_8005E9F0;
extern s32 D_8005EA14;

void func_802571C0(void *arg0) {
    s32 *__base_D_8005EA14;
    s32 *temp_s1;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    temp_s1 = D_8005E9F0;
    __base_D_8005EA14 = &D_8005EA14;
    func_802D0B28((*__base_D_8005EA14), M2C_FIELD(temp_s0, s8 *, 0x71), 1);
    temp_v0 = func_80257068(M2C_FIELD(temp_s0, f32 *, 0x24), M2C_FIELD(temp_s0, f32 *, 0x28), M2C_FIELD(temp_s0, s32 *, 0x2C));
    if (temp_v0 >= 0) {
        func_80257138(arg0, temp_v0);
    }
    func_802D0B28((*__base_D_8005EA14), *temp_s1, 1);
}
