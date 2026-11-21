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
extern char D_80036D08[];

typedef struct { unsigned char pad_0[80]; float field_50; float field_54; unsigned char pad_58[16]; unsigned char field_68; signed char field_69; signed char field_6A; } __repair_record_temp_v0;
void *func_802A51A8(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, arg1, D_80036D08);
    if (temp_v0 != NULL) {
        ((__repair_record_temp_v0*)temp_v0)->field_68 = 0xB4;
        ((__repair_record_temp_v0*)temp_v0)->field_69 = 0xA;
        ((__repair_record_temp_v0*)temp_v0)->field_6A = 5;
        ((__repair_record_temp_v0*)temp_v0)->field_50 = (f32) *(f32 *)0x21621C;
        ((__repair_record_temp_v0*)temp_v0)->field_54 = (f32) *(f32 *)0x216220;
    }
    return temp_v0;
}
