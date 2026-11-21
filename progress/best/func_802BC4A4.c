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
extern float D_8007BE68;
extern float D_8007BE6C;
extern float D_8007BE70;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */


void func_802BC4A4(void *arg0, f32 arg1) {
    float *__base_D_8007BE6C;
    D_8007BE68 = (f32) (D_8007BE68 + (M2C_FIELD(arg0, f32 *, 0) * arg1));
    __base_D_8007BE6C = &D_8007BE6C;
    (*__base_D_8007BE6C) = (f32) ((*__base_D_8007BE6C) + (M2C_FIELD(arg0, f32 *, 4) * arg1));
    D_8007BE70 = (f32) (D_8007BE70 + (M2C_FIELD(arg0, f32 *, 8) * arg1));
}
