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

s32 func_802329DC(s32, s32);                        /* extern */
s32 func_802329E8();                                /* extern */
extern void *D_8005E9F0;
extern M2C_UNK D_8005EA30;

s32 func_80232908(void *arg0) {
    void **__base_D_8005E9F0;
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    s32 var_v1;
s16 __repair_result_var_v1;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_v0;
    void *temp_v0;
    void *temp_v1;

    temp_fv1f = M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(&D_8005EA30, f32 *, 0);
    sp0 = temp_fv1f;
    temp_fv1 = M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(&D_8005EA30, f32 *, 4);
    sp4 = temp_fv1;
    temp_fv0f = M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(&D_8005EA30, f32 *, 8);
    var_v1 = 0;
    sp8 = temp_fv0f;
    __base_D_8005E9F0 = &D_8005E9F0;
    if ((*__base_D_8005E9F0) == NULL) {
        return func_802329E8();
    }
    temp_a1 = M2C_FIELD(D_8005E9F0, s32 *, 4);
    temp_a0 = M2C_FIELD(M2C_FIELD(D_8005E9F0, void **, 0x14), s32 *, 0x1C);
    var_v0 = 0 * 0x10;
loop_4:
    temp_v1 = temp_a1 + ((var_v0 + var_v1) * 2);
    temp_v0 = temp_a0 + (M2C_FIELD(temp_v1, s16 *, 0) * 0x10);
    if (((M2C_FIELD(temp_v0, f32 *, 0) * temp_fv1f) + (M2C_FIELD(temp_v0, f32 *, 4) * temp_fv1) + (M2C_FIELD(temp_v0, f32 *, 8) * temp_fv0f) + M2C_FIELD(temp_v0, f32 *, 0xC)) > 0.0f) {
        return func_802329DC(temp_a0, temp_a1);
    }
    __repair_result_var_v1 = M2C_FIELD(temp_v1, s16 *, 4);
    var_v0 = __repair_result_var_v1 * 0x10;
    if (__repair_result_var_v1 < 0) {
        return ~__repair_result_var_v1;
    }
    goto loop_4;
}
