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

s32 func_8010EED0();
s32 func_80112120();
extern char D_1122B0[];
extern char D_112470[];

typedef struct { unsigned char pad_0[20]; int field_14; float field_18; int field_1C; int field_20; int field_24; int field_28; int field_2C; int field_30; } __repair_record_arg0;
void func_8011124C(void *arg0, s32 arg1) {
    func_80112120(arg0, D_1122B0, D_112470, 1);
    ((__repair_record_arg0*)arg0)->field_14 = func_8010EED0(0, 0, arg1, 1, 0x20);
    ((__repair_record_arg0*)arg0)->field_20 = 0;
    ((__repair_record_arg0*)arg0)->field_24 = 1;
    ((__repair_record_arg0*)arg0)->field_30 = 0;
    ((__repair_record_arg0*)arg0)->field_1C = 0;
    ((__repair_record_arg0*)arg0)->field_28 = 0;
    ((__repair_record_arg0*)arg0)->field_2C = 0;
    ((__repair_record_arg0*)arg0)->field_18 = (f32) *(f32 *)0x1021C0;
}
