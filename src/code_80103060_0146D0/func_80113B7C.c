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

s32 func_8011360C();

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x1c, 0x28, 0x2c], gap at: 0x20. */
typedef struct { float field_0; unsigned char pad_4[16]; float field_14; unsigned char pad_18[16]; float field_28; unsigned char pad_2C[16]; float field_3C; } __repair_record_arg0;
void func_80113B7C(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_8011360C(arg0);
    ((__repair_record_arg0*)arg0)->field_0 = arg1;
    ((__repair_record_arg0*)arg0)->field_14 = arg2;
    ((__repair_record_arg0*)arg0)->field_28 = arg3;
    ((__repair_record_arg0*)arg0)->field_3C = (f32) *(f32 *)0x1024A4;
}
