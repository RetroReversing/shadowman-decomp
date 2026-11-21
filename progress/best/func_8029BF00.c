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

void *func_80296BC0(M2C_UNK, M2C_UNK, M2C_UNK *);   /* extern */
M2C_UNK func_8029706C(s32, void *);                 /* extern */
extern M2C_UNK D_80036C38;

typedef struct { unsigned char pad_0[76]; float field_4C; float field_50; int field_54; float field_58; unsigned char pad_5C[16]; int field_6C; short field_70; signed char field_72; signed char field_73; } __repair_record_temp_v0;
void *func_8029BF00(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_80296BC0(0, 0, &D_80036C38);
    if (temp_v0 != NULL) {
        ((__repair_record_temp_v0*)temp_v0)->field_72 = arg0;
        ((__repair_record_temp_v0*)temp_v0)->field_6C = 7;
        ((__repair_record_temp_v0*)temp_v0)->field_73 = 0;
        ((__repair_record_temp_v0*)temp_v0)->field_54 = 0;
        ((__repair_record_temp_v0*)temp_v0)->field_70 = -1;
        ((__repair_record_temp_v0*)temp_v0)->field_4C = (f32) *(f32 *)0x215BD8;
        ((__repair_record_temp_v0*)temp_v0)->field_50 = (f32) *(f32 *)0x215BDC;
        ((__repair_record_temp_v0*)temp_v0)->field_58 = (f32) *(f32 *)0x215BE0;
        func_8029706C(arg0 & 0xFF, temp_v0);
    }
    return temp_v0;
}
