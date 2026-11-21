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

s32 func_80296698(s32);                             /* extern */
void *func_80296BC0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_80036B1C;
extern M2C_UNK D_80036C80;

typedef struct { s32 w[3]; } __repair_words3;
typedef struct { unsigned char pad_0[76]; float field_4C; float field_50; float field_54; int field_58; float field_5C; unsigned char pad_60[12]; int field_6C; } __repair_record_temp_v0;
void *func_80299FB0(s32 arg0, M2C_UNK arg1, void *arg2, f32 arg3) {
    f32 temp_fv0;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg1, &D_80036B1C, &D_80036C80);
    if (temp_v0 != NULL) {
        ((__repair_record_temp_v0*)temp_v0)->field_6C = arg0;
        temp_fv0 = (f32) func_80296698(arg0);
        ((__repair_record_temp_v0*)temp_v0)->field_50 = temp_fv0;
        ((__repair_record_temp_v0*)temp_v0)->field_54 = temp_fv0;
        ((__repair_record_temp_v0*)temp_v0)->field_58 = 0;
        ((__repair_record_temp_v0*)temp_v0)->field_4C = arg3;
        ((__repair_record_temp_v0*)temp_v0)->field_5C = (f32) *(f32 *)0x215A88;
        M2C_FIELD(temp_v0, __repair_words3 *, 0x24) = *(__repair_words3 *) ((s8 *) arg2 + 0x0);
    }
    return temp_v0;
}
