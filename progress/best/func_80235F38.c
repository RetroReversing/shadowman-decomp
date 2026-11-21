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

extern float D_8005EA48;
extern float D_8005EA40;
extern float D_8005EA4C;
extern float D_8005EA44;
s32 func_80235FAC();
extern f32 D_8005EA50;
extern void *D_80061A10;

void func_80235F38(void *arg0) {
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    void *temp_v0;

    temp_v0 = (M2C_FIELD(arg0, u16 *, 8) * 0x10) + M2C_FIELD(D_80061A10, s32 *, 0x1C);
    temp_ft0 = -M2C_FIELD(temp_v0, f32 *, 0);
    temp_fv1f = -M2C_FIELD(temp_v0, f32 *, 8);
    temp_fv1 = sqrtf((temp_ft0 * temp_ft0) + (temp_fv1f * temp_fv1f));
    temp_ft0f = -M2C_FIELD(temp_v0, f32 *, 4);
    if (temp_fv1 < *(f32 *)0x2023BC) {
        func_80235FAC();
        return;
    }
    D_8005EA48 = (f32) -temp_fv1;
    D_8005EA40 = temp_ft0f;
    D_8005EA4C = (f32) (temp_ft0 / temp_fv1);
    D_8005EA44 = (f32) (temp_fv1f / temp_fv1);
    D_8005EA50 = temp_ft0f;
}
