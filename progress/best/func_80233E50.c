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

M2C_UNK func_8023988C(void *);                      /* extern */
extern M2C_UNK D_8002C0F8;
extern u16 D_8002C110;
extern u16 D_8002C112;

typedef struct { unsigned char pad_0[216]; float field_D8; unsigned char pad_DC[4]; float field_E0; float field_E4; unsigned char pad_E8[8]; float field_F0; float field_F4; float field_F8; float field_FC; float field_100; } __repair_record_arg0;
void func_80233E50(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 temp_ft0;
    f32 temp_ft1f;
    f32 temp_ft2;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;

    temp_fv1f = (f32) M2C_FIELD(&D_8002C0F8, s32 *, 0) / (f32) D_8002C110;
    temp_fv1 = (f32) M2C_FIELD(&D_8002C0F8, s32 *, 4) / (f32) D_8002C112;
    temp_ft0 = (arg3 - arg1) * temp_fv1f;
    temp_fv0 = *(f32 *)0x2022F0;
    temp_fv0f = (arg4 - arg2) * temp_fv1;
    ((__repair_record_arg0*)arg0)->field_FC = ((arg3 - arg1) * temp_fv1f);
    ((__repair_record_arg0*)arg0)->field_100 = temp_fv0f;
    temp_ft1f = (arg1 * temp_fv1f) + (((arg3 - arg1) * temp_fv1f) * temp_fv0);
    temp_ft2 = (arg2 * temp_fv1) + (temp_fv0f * temp_fv0);
    ((__repair_record_arg0*)arg0)->field_E0 = temp_ft1f;
    ((__repair_record_arg0*)arg0)->field_E4 = temp_ft2;
    ((__repair_record_arg0*)arg0)->field_D8 = arg5;
    ((__repair_record_arg0*)arg0)->field_F8 = arg6;
    M2C_FIELD(arg0, f64 *, 0xE8) = M2C_BITWISE(f64, (temp_ft1f + (((arg3 - arg1) * temp_fv1f) * temp_fv0)));
    ((__repair_record_arg0*)arg0)->field_F0 = (f32) (temp_ft2 - (((__repair_record_arg0*)arg0)->field_100 * temp_fv0));
    ((__repair_record_arg0*)arg0)->field_F4 = (f32) (temp_ft2 + (((__repair_record_arg0*)arg0)->field_100 * temp_fv0));
    func_8023988C(arg0 + 0x3C);
    func_8023988C(arg0 + 0x6C);
}
