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

void *func_80296BC0();
extern char D_80036D88[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x20, 0x24, 0x28, 0x2c], gap at: 0x14. */
typedef struct { unsigned char pad_0[12]; float field_C; float field_10; float field_14; unsigned char pad_18[52]; float field_4C; float field_50; float field_54; } __repair_record_temp_v0;
void func_80297F20(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 temp_fv0;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, 0, D_80036D88);
    if (temp_v0 != NULL) {
        ((__repair_record_temp_v0*)temp_v0)->field_C = arg1;
        ((__repair_record_temp_v0*)temp_v0)->field_10 = arg2;
        ((__repair_record_temp_v0*)temp_v0)->field_14 = arg3;
        ((__repair_record_temp_v0*)temp_v0)->field_4C = (f32) *(f32 *)0x21595C;
        temp_fv0 = *(f32 *)0x215960;
        ((__repair_record_temp_v0*)temp_v0)->field_54 = temp_fv0;
        ((__repair_record_temp_v0*)temp_v0)->field_50 = temp_fv0;
    }
}
