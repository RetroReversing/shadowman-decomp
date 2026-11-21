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

extern f32 D_80074BC0;

typedef struct { unsigned char pad_0[24]; float field_18; unsigned char pad_1C[28]; float field_38; float field_3C; short field_40; unsigned char pad_42[6]; float field_48; float field_4C; } __repair_record_arg0;
void func_80236CC8(void *arg0) {
    f32 *__base_D_80074BC0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;

    if (((__repair_record_arg0*)arg0)->field_40 == 0) {
        __base_D_80074BC0 = &D_80074BC0;
        temp_fv0 = ((((__repair_record_arg0*)arg0)->field_3C * (*__base_D_80074BC0))) + (((__repair_record_arg0*)arg0)->field_18);
        temp_fv0f = ((__repair_record_arg0*)arg0)->field_48;
        ((__repair_record_arg0*)arg0)->field_18 = temp_fv0;
        if (temp_fv0f < temp_fv0) {
            ((__repair_record_arg0*)arg0)->field_18 = temp_fv0f;
            ((__repair_record_arg0*)arg0)->field_40 = 1;
        }
    } else {
        temp_fv0_2 = ((__repair_record_arg0*)arg0)->field_18 - (((__repair_record_arg0*)arg0)->field_38 * (*__base_D_80074BC0));
        temp_fv0f_2 = ((__repair_record_arg0*)arg0)->field_4C;
        ((__repair_record_arg0*)arg0)->field_18 = temp_fv0_2;
        if (temp_fv0_2 < temp_fv0f_2) {
            ((__repair_record_arg0*)arg0)->field_18 = temp_fv0f_2;
            ((__repair_record_arg0*)arg0)->field_40 = 0;
        }
    }
}
