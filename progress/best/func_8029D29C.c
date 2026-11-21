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
extern char D_80036D70[];

typedef struct { unsigned char pad_0[36]; float field_24; float field_28; float field_2C; unsigned char pad_30[28]; float field_4C; float field_50; float field_54; unsigned char pad_58[27]; signed char field_73; } __repair_record_temp_v0;
void func_8029D29C(s32 arg0) {
    f32 __repair_fzero = 0.0f;

    f32 temp_fv0;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, 0);
    if (temp_v0 != NULL) {
        temp_fv0 = *(f32 *)0x215CAC;
        ((__repair_record_temp_v0*)temp_v0)->field_73 = 0;
        ((__repair_record_temp_v0*)temp_v0)->field_50 = temp_fv0;
        ((__repair_record_temp_v0*)temp_v0)->field_54 = temp_fv0;
        ((__repair_record_temp_v0*)temp_v0)->field_4C = (f32) *(f32 *)0x215CB0;
        ((__repair_record_temp_v0*)temp_v0)->field_2C = __repair_fzero;
        ((__repair_record_temp_v0*)temp_v0)->field_28 = __repair_fzero;
        ((__repair_record_temp_v0*)temp_v0)->field_24 = __repair_fzero;
    }
}
