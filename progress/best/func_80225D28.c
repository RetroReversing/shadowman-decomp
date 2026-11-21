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

extern s16 D_800591F0;
extern s8 D_800591F2;
extern s16 D_800591F4;
extern s16 D_80059400;
extern s16 D_80059402;
extern s16 D_80059404;
extern M2C_UNK D_80059410;
extern s16 D_8005941C;
extern void *D_8005E9EC;
extern void *D_8005EA2C;

void func_80225D28(void) {
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_fv1f;
    void *temp_v0;
    void *temp_v1;

    D_800591F4 = 0;
    D_800591F2 = 0;
    D_800591F0 = 0;
    D_80059404 = -1;
    D_80059402 = -1;
    D_80059400 = -1;
    D_8005941C = 0;
    temp_fv1f = M2C_FIELD(D_8005E9EC, f32 *, 0x24);
    temp_v0 = D_8005E9EC + 0x24;
    temp_v1 = D_8005EA2C + 0x3C;
    temp_ft1 = M2C_FIELD(temp_v0, f32 *, 4);
    temp_ft0f = M2C_FIELD(temp_v0, f32 *, 8);
    temp_ft0 = (temp_fv1f * M2C_FIELD(D_8005EA2C, f32 *, 0x3C)) + (temp_ft1 * M2C_FIELD(temp_v1, f32 *, 4)) + (temp_ft0f * M2C_FIELD(temp_v1, f32 *, 8));
    M2C_FIELD(&D_80059410, f32 *, 0) = temp_ft0;
    M2C_FIELD(&D_80059410, f32 *, 4) = (f32) ((temp_fv1f * M2C_FIELD(temp_v1, f32 *, 0xC)) + (temp_ft1 * M2C_FIELD(temp_v1, f32 *, 0x10)) + (temp_ft0f * M2C_FIELD(temp_v1, f32 *, 0x14)));
    M2C_FIELD(&D_80059410, f32 *, 8) = (f32) ((temp_fv1f * M2C_FIELD(temp_v1, f32 *, 0x18)) + (temp_ft1 * M2C_FIELD(temp_v1, f32 *, 0x1C)) + (temp_ft0f * M2C_FIELD(temp_v1, f32 *, 0x20)));
    M2C_FIELD(D_8005EA2C, f32 *, 0x60) = (f32) (M2C_FIELD(D_8005EA2C, f32 *, 0x60) + temp_ft0);
    M2C_FIELD(D_8005EA2C, f32 *, 0x64) = (f32) (M2C_FIELD(D_8005EA2C, f32 *, 0x64) + M2C_FIELD(&D_80059410, f32 *, 4));
    M2C_FIELD(D_8005EA2C, f32 *, 0x68) = (f32) (M2C_FIELD(D_8005EA2C, f32 *, 0x68) + M2C_FIELD(&D_80059410, f32 *, 8));
}
