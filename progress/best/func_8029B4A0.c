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

f32 func_8022EBE8(f32);                             /* extern */
void *func_80296BC0(f32, M2C_UNK *);                     /* extern */
extern M2C_UNK D_80036DA0;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x28, 0x2c], gap at: 0x1c. */
typedef struct { float field_0; float field_4; float field_8; unsigned char pad_C[64]; float field_4C; float field_50; float field_54; float field_58; float field_5C; unsigned char pad_60[12]; int field_6C; unsigned char pad_70[2]; signed char field_72; } __repair_record_temp_v0;
void *func_8029B4A0(f32 arg2, s8 arg3) {
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv0f;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg2, &D_80036DA0);
    if (temp_v0 != NULL) {
        temp_fv0 = *(f32 *)0x215B70;
        temp_fs0 = *(f32 *)0x215B78;
        ((__repair_record_temp_v0*)temp_v0)->field_6C = 7;
        ((__repair_record_temp_v0*)temp_v0)->field_54 = temp_fv0;
        ((__repair_record_temp_v0*)temp_v0)->field_50 = temp_fv0;
        ((__repair_record_temp_v0*)temp_v0)->field_58 = (f32) *(f32 *)0x215B74;
        ((__repair_record_temp_v0*)temp_v0)->field_4C = (f32) *(f32 *)0x215B7C;
        ((__repair_record_temp_v0*)temp_v0)->field_0 = (f32) (((__repair_record_temp_v0*)temp_v0)->field_0 + func_8022EBE8(temp_fs0));
        ((__repair_record_temp_v0*)temp_v0)->field_4 = (f32) (((__repair_record_temp_v0*)temp_v0)->field_4 + func_8022EBE8(temp_fs0));
        temp_fv0f = ((__repair_record_temp_v0*)temp_v0)->field_8 + func_8022EBE8(temp_fs0);
        ((__repair_record_temp_v0*)temp_v0)->field_5C = arg2;
        ((__repair_record_temp_v0*)temp_v0)->field_72 = arg3;
        ((__repair_record_temp_v0*)temp_v0)->field_8 = temp_fv0f;
    }
    return temp_v0;
}
