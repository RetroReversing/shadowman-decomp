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

extern float D_8007558C;
extern float D_80075594;
extern float D_8007BE68;
extern float D_8007BE70;
extern char D_80075568[];

void func_8024F2DC(void *arg0) {
    float *__base_D_8007BE68;
    float *__base_D_8007BE70;
    f32 sp0;
    f32 sp8;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1f;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 8);
    temp_fv0 = D_8007558C - M2C_FIELD(temp_v1, f32 *, 0x24);
    temp_fv1f = *(f32 *)0x2030F0;
    sp0 = temp_fv0;
    temp_fv1 = D_80075594 - M2C_FIELD(temp_v1, f32 *, 0x2C);
    sp8 = temp_fv1;
    __base_D_8007BE68 = &D_8007BE68;
    (*__base_D_8007BE68) = (f32) ((*__base_D_8007BE68) + (temp_fv0 * temp_fv1f));
    __base_D_8007BE70 = &D_8007BE70;
    (*__base_D_8007BE70) = (f32) ((*__base_D_8007BE70) + (temp_fv1 * temp_fv1f));
}
