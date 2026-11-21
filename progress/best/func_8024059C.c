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

extern s32 D_8006A5B0;

void func_8024059C(void *arg0, void *arg1, f32 arg2, void *arg3) {
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_ft1f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv1;
    f32 temp_fv1_2;

    M2C_FIELD(arg3, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg3, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(arg3, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
    temp_fv0 = M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg3, f32 *, 0x80) = temp_fv0;
    M2C_FIELD(arg3, f32 *, 0xC) = temp_fv0;
    temp_fv0_2 = M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg3, f32 *, 0x84) = temp_fv0_2;
    M2C_FIELD(arg3, f32 *, 0x10) = temp_fv0_2;
    temp_ft1 = M2C_FIELD(arg1, f32 *, 8);
    temp_fv1 = M2C_FIELD(arg3, f32 *, 0xC) - M2C_FIELD(arg3, f32 *, 0);
    M2C_FIELD(arg3, f32 *, 0x18) = arg2;
    M2C_FIELD(arg3, f32 *, 0x14) = temp_ft1;
    M2C_FIELD(arg3, f32 *, 0x88) = temp_ft1;
    M2C_FIELD(arg3, f32 *, 0x1C) = temp_fv1;
    M2C_FIELD(arg3, f64 *, 0x20) = M2C_BITWISE(f64, (temp_ft1 - M2C_FIELD(arg3, f32 *, 8)));
    M2C_FIELD(arg3, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0) - arg2);
    M2C_FIELD(arg3, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0) + arg2);
    M2C_FIELD(arg3, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 4) - arg2);
    M2C_FIELD(arg3, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 4) + arg2);
    M2C_FIELD(arg3, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 8) - arg2);
    temp_ft0 = M2C_BITWISE(f32, M2C_FIELD(arg3, f64 *, 0x20));
    temp_fv1_2 = M2C_FIELD(arg3, f32 *, 0x24);
    temp_ft1f = *(f32 *)0x202790;
    M2C_FIELD(arg3, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 8) + arg2);
    M2C_FIELD(arg3, f32 *, 0x40) = (f32) (M2C_FIELD(arg1, f32 *, 0) - arg2);
    M2C_FIELD(arg3, f32 *, 0x4C) = (f32) (M2C_FIELD(arg1, f32 *, 0) + arg2);
    temp_fv0f = (temp_fv1 * temp_fv1) + (temp_ft0 * temp_ft0) + (temp_fv1_2 * temp_fv1_2);
    M2C_FIELD(arg3, f32 *, 0x44) = (f32) (M2C_FIELD(arg1, f32 *, 4) - arg2);
    M2C_FIELD(arg3, f32 *, 0x50) = (f32) (M2C_FIELD(arg1, f32 *, 4) + arg2);
    M2C_FIELD(arg3, f32 *, 0x48) = (f32) (M2C_FIELD(arg1, f32 *, 8) - arg2);
    M2C_FIELD(arg3, f32 *, 0x5C) = temp_fv0f;
    M2C_FIELD(arg3, f32 *, 0x6C) = (f32) (M2C_FIELD(arg3, f32 *, 4) + (M2C_BITWISE(f32, M2C_FIELD(arg3, f64 *, 0x20)) * temp_ft1f));
    temp_fv0f_2 = sqrtf(temp_fv0f);
    M2C_FIELD(arg3, f32 *, 0x58) = temp_fv0f_2;
    M2C_FIELD(arg3, f32 *, 0x68) = (f32) (M2C_FIELD(arg3, f32 *, 0) + (M2C_FIELD(arg3, f32 *, 0x1C) * temp_ft1f));
    M2C_FIELD(arg3, f32 *, 0x70) = (f32) (M2C_FIELD(arg3, f32 *, 8) + (M2C_FIELD(arg3, f32 *, 0x24) * temp_ft1f));
    temp_fv0f_3 = temp_fv0f_2 + arg2;
    M2C_FIELD(arg3, f32 *, 0x54) = (f32) (M2C_FIELD(arg1, f32 *, 8) + arg2);
    M2C_FIELD(arg3, f32 *, 0x74) = (f32) (2.0f * temp_fv0f_2);
    M2C_FIELD(arg3, f32 *, 0x60) = (f32) (*(f32 *)0x202794 / M2C_FIELD(arg3, f32 *, 0x5C));
    M2C_FIELD(arg3, f32 *, 0x7C) = temp_fv0f_3;
    M2C_FIELD(arg3, f32 *, 0x64) = temp_fv0f_3;
    M2C_FIELD(arg3, s32 *, 0x78) = 0;
    M2C_FIELD(arg3, s32 *, 0x98) = 0;
    D_8006A5B0 = 0;
}
