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

s32 func_80109918();
f32 func_8022EC3C(f32);
s32 func_80296698();
void *func_80296BC0();
extern char D_80036D38[];

typedef struct { unsigned char pad_0[12]; float field_C; unsigned char pad_10[20]; float field_24; float field_28; float field_2C; unsigned char pad_30[20]; int field_44; unsigned char pad_48[4]; float field_4C; float field_50; float field_54; float field_58; float field_5C; unsigned char pad_60[19]; signed char field_73; } __repair_record_temp_v0;
void *func_8029EB04(s32 arg0, f32 arg1) {
    f32 temp_fv0f;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, 0, D_80036D38);
    if (temp_v0 != NULL) {
        temp_fv0f = *(f32 *)0x215DB0;
        ((__repair_record_temp_v0*)temp_v0)->field_73 = 0;
        ((__repair_record_temp_v0*)temp_v0)->field_4C = arg1;
        ((__repair_record_temp_v0*)temp_v0)->field_54 = temp_fv0f;
        ((__repair_record_temp_v0*)temp_v0)->field_C = temp_fv0f;
        ((__repair_record_temp_v0*)temp_v0)->field_50 = (f32) *(f32 *)0x215DB4;
        ((__repair_record_temp_v0*)temp_v0)->field_2C = 0.0f;
        ((__repair_record_temp_v0*)temp_v0)->field_28 = 0.0f;
        ((__repair_record_temp_v0*)temp_v0)->field_24 = 0.0f;
        ((__repair_record_temp_v0*)temp_v0)->field_58 = func_8022EC3C((f32) (func_80296698(0x1D) - 1));
        ((__repair_record_temp_v0*)temp_v0)->field_44 = func_80109918(temp_v0, 0xFF, 0x104);
        ((__repair_record_temp_v0*)temp_v0)->field_5C = (f32) *(f32 *)0x215DB8;
    }
    return temp_v0;
}
