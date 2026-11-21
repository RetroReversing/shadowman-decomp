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

extern void *D_8005E9EC;

typedef struct { float field_0; float field_4; float field_8; float field_C; float field_10; float field_14; unsigned char pad_18[104]; float field_80; float field_84; float field_88; } __repair_record_arg0;
void func_80241A24(void *arg0) {
    void **__base_D_8005E9EC;
    __base_D_8005E9EC = &D_8005E9EC;
    ((__repair_record_arg0*)arg0)->field_0 = (f32) (((__repair_record_arg0*)arg0)->field_0 + M2C_FIELD((*__base_D_8005E9EC), f32 *, 0x24));
    ((__repair_record_arg0*)arg0)->field_C = (f32) (((__repair_record_arg0*)arg0)->field_C + M2C_FIELD((*__base_D_8005E9EC), f32 *, 0x24));
    ((__repair_record_arg0*)arg0)->field_80 = (f32) (((__repair_record_arg0*)arg0)->field_80 + M2C_FIELD((*__base_D_8005E9EC), f32 *, 0x24));
    ((__repair_record_arg0*)arg0)->field_4 = (f32) (((__repair_record_arg0*)arg0)->field_4 + M2C_FIELD((*__base_D_8005E9EC), f32 *, 0x28));
    ((__repair_record_arg0*)arg0)->field_10 = (f32) (((__repair_record_arg0*)arg0)->field_10 + M2C_FIELD((*__base_D_8005E9EC), f32 *, 0x28));
    ((__repair_record_arg0*)arg0)->field_84 = (f32) (((__repair_record_arg0*)arg0)->field_84 + M2C_FIELD((*__base_D_8005E9EC), f32 *, 0x28));
    ((__repair_record_arg0*)arg0)->field_8 = (f32) (((__repair_record_arg0*)arg0)->field_8 + M2C_FIELD((*__base_D_8005E9EC), f32 *, 0x2C));
    ((__repair_record_arg0*)arg0)->field_14 = (f32) (((__repair_record_arg0*)arg0)->field_14 + M2C_FIELD((*__base_D_8005E9EC), f32 *, 0x2C));
    ((__repair_record_arg0*)arg0)->field_88 = (f32) (((__repair_record_arg0*)arg0)->field_88 + M2C_FIELD((*__base_D_8005E9EC), f32 *, 0x2C));
}
