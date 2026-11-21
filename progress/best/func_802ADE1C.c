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

void *func_80103878(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_802A7CD4();                            /* extern */

typedef struct { unsigned char pad_0[12]; void * field_C; unsigned char pad_10[16]; float field_20; unsigned char pad_24[8]; float field_2C; float field_30; int field_34; unsigned char pad_38[25]; signed char field_51; } __repair_record_arg0;
void func_802ADE1C(void *arg0) {
    f32 temp_fv0;
    void *temp_v0;

    func_802A7CD4();
    temp_fv0 = *(f32 *)0x2166C0;
    ((__repair_record_arg0*)arg0)->field_34 = 0;
    ((__repair_record_arg0*)arg0)->field_51 = 0;
    ((__repair_record_arg0*)arg0)->field_20 = (f32) *(f32 *)0x2166BC;
    ((__repair_record_arg0*)arg0)->field_2C = (*(f32 *)0x2166C0);
    ((__repair_record_arg0*)arg0)->field_30 = (*(f32 *)0x2166C0);
    temp_v0 = func_80103878(0x9C, 2, 0);
    ((__repair_record_arg0*)arg0)->field_C = temp_v0;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x98) = 0;
    }
}
