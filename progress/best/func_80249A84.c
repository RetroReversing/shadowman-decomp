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

typedef struct { unsigned char pad_0[24]; float field_18; unsigned char pad_1C[80]; void * field_6C; } __repair_record_temp_a0;
void func_80249A84(void *arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 *temp_a1;
    s32 temp_v1;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 8);
    temp_a1 = ((__repair_record_temp_a0*)temp_a0)->field_6C;
    temp_v1 = *temp_a1;
    switch (temp_v1) {
case 0: break;
                              /* irregular */
    case 3:
        temp_fv0 = ((__repair_record_temp_a0*)temp_a0)->field_18 + (D_80074BC0 * *(f32 *)0x202D90);
        ((__repair_record_temp_a0*)temp_a0)->field_18 = temp_fv0;
        if (*(f32 *)0x202D94 < temp_fv0) {
            *temp_a1 = 1;
            return;
        }
        return;
    case 4:
        temp_fv0_2 = ((__repair_record_temp_a0*)temp_a0)->field_18 - (D_80074BC0 * *(f32 *)0x202D98);
        ((__repair_record_temp_a0*)temp_a0)->field_18 = temp_fv0_2;
        if (temp_fv0_2 < *(f32 *)0x202D9C) {
            *temp_a1 = 2;
            return;
        }
        break;
    }
}
