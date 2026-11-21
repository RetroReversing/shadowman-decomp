/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

extern int D_8002C0F8;
extern int D_8002C0FC;
s32 func_8023988C();
extern u16 D_8002C110;
extern u16 D_8002C112;

void func_80233E50(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 temp_ft0;
    f32 temp_ft1f;
    f32 temp_ft2;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;

    temp_fv1f = (f32) D_8002C0F8 / (f32) D_8002C110;
    temp_fv1 = (f32) D_8002C0FC / (f32) D_8002C112;
    temp_ft0 = (arg3 - arg1) * temp_fv1f;
    temp_fv0 = *(f32 *)0x2022F0;
    temp_fv0f = (arg4 - arg2) * temp_fv1;
    M2C_FIELD(arg0, f32 *, 0xFC) = temp_ft0;
    M2C_FIELD(arg0, f32 *, 0x100) = temp_fv0f;
    temp_ft1f = (arg1 * temp_fv1f) + (temp_ft0 * temp_fv0);
    temp_ft2 = (arg2 * temp_fv1) + (temp_fv0f * temp_fv0);
    M2C_FIELD(arg0, f32 *, 0xE0) = temp_ft1f;
    M2C_FIELD(arg0, f32 *, 0xE4) = temp_ft2;
    M2C_FIELD(arg0, f32 *, 0xD8) = arg5;
    M2C_FIELD(arg0, f32 *, 0xF8) = arg6;
    M2C_FIELD(arg0, f64 *, 0xE8) = M2C_BITWISE(f64, (temp_ft1f + (temp_ft0 * temp_fv0)));
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) (temp_ft2 - (M2C_FIELD(arg0, f32 *, 0x100) * temp_fv0));
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) (temp_ft2 + (M2C_FIELD(arg0, f32 *, 0x100) * temp_fv0));
    func_8023988C(arg0 + 0x3C);
    func_8023988C(arg0 + 0x6C);
}
