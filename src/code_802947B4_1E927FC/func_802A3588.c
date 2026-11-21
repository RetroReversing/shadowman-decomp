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

M2C_UNK func_8023E724(M2C_UNK *, s32, void *, void *); /* extern */
void *func_80296BC0(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK D_80036B1C;
extern M2C_UNK D_80036D60;
extern M2C_UNK D_80075518;

typedef struct { s32 w[3]; } __repair_words3;
void *func_802A3588(void *arg0, void *arg1, s32 arg2) {
    f32 temp_fv0;
    void *temp_v0;

    temp_v0 = func_80296BC0(&D_80036B1C, 0, &D_80036D60);
    if (temp_v0 != NULL) {
        temp_fv0 = *(f32 *)0x2160CC;
        M2C_FIELD(temp_v0, s32 *, 0x6C) = arg2;
        M2C_FIELD(temp_v0, s8 *, 0x73) = 0;
        M2C_FIELD(temp_v0, __repair_words3 *, 0xC) = *(__repair_words3 *) ((s8 *) arg1 + 0x0);
        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0;
        M2C_FIELD(temp_v0, __repair_words3 *, 0x18) = *(__repair_words3 *) ((s8 *) arg0 + 0x0);
        func_8023E724(&D_80075518, M2C_FIELD(temp_v0, s32 *, 0x6C), temp_v0 + 0xC, temp_v0);
    }
    return temp_v0;
}
