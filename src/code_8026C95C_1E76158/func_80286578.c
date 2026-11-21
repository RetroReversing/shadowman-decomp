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

s32 func_80113AD0(void);                          /* extern */
M2C_UNK func_8023DF7C(s32, void *, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_80273BCC();                            /* extern */
extern M2C_UNK D_80034660;
extern s32 D_8006A4FC;
extern void *D_8007AFF8;

void func_80286578(void) {
    void **__base_D_8007AFF8;
    func_80273BCC();
    __base_D_8007AFF8 = &D_8007AFF8;
    M2C_FIELD(M2C_FIELD(D_8007AFF8, void **, 0x10C), M2C_UNK **, 0x34) = &D_80034660;
    M2C_FIELD(M2C_FIELD(D_8007AFF8, void **, 0x10C), s16 *, 4) = -1;
    M2C_FIELD(M2C_FIELD(D_8007AFF8, void **, 0x10C), s16 *, 2) = -1;
    M2C_FIELD(M2C_FIELD(D_8007AFF8, void **, 0x10C), s16 *, 0) = -1;
    func_8023DF7C(D_8006A4FC, M2C_FIELD(D_8007AFF8, void **, 0x10C), 9, ((func_80113AD0() & 7) + 1) * 0xA, 0xA, 2);
}
