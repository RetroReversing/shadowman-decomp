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

extern int D_8007AFD0;
extern int D_8007558C;
extern int D_8007AFD8;
extern int D_80075594;
extern float D_8007AFD4;
extern float D_80075590;
extern int D_8007AFC0;
extern float D_8007AFC4;
extern int D_8007AFC8;
s32 func_8026FCB8();
s32 func_8026FCC4();
s32 func_802753F0();
s32 func_802776D8();
extern char D_212078[];
extern void *D_8006A4FC;
extern char D_80075568[];
extern void *D_8007AFF8;
extern f32 D_8007B0A4;

s32 func_8026FB38(s32 arg0) {
    char *__base_D_212078;
    int *__base_D_80075594;
    int *__base_D_8007558C;
    s32 ret;
    f32 temp_fv0;
    f32 temp_fv0f;
    float *__base_D_80075590;

    __base_D_80075590 = &D_80075590;

    if (M2C_FIELD(D_8007AFF8, s8 *, 0x4F) >= 2) {
        return func_8026FCB8(D_8007AFF8, &D_8007B0A4);
    }
    temp_fv0 = M2C_FIELD(D_8007AFF8, f32 *, 0x6C);
    temp_fv0f = *(f32 *)0x213F1C;
    D_8007B0A4 = temp_fv0;
    if (temp_fv0 != temp_fv0f) {
        M2C_FIELD(D_8007AFF8, f32 *, 0x6C) = temp_fv0f;
        M2C_FIELD(D_8007AFF8, s32 *, 0x44) &= ~0x400;
    }
    if (D_8007B0A4 != 0.0f) {
        __base_D_8007558C = &D_8007558C;
        (*(s32 *)&D_8007AFD0) = (s32) (*__base_D_8007558C);
        __base_D_80075594 = &D_80075594;
        D_8007AFD8 = (s32) (*__base_D_80075594);
        D_8007AFD4 = (f32) ((*__base_D_80075590) + *(f32 *)0x213F20);
        (*(s32 *)&D_8007AFC0) = (s32) M2C_FIELD(D_8006A4FC, f32 *, 0x24);
        __base_D_212078 = D_212078;
        D_8007AFC4 = (f32) (M2C_FIELD(D_8006A4FC, f32 *, 0x28) + M2C_FIELD(((M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + __base_D_212078), f32 *, 0x30) + *(f32 *)0x213F24);
        D_8007AFC8 = (s32) M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
        func_8026FCC4((*(s32 *)&D_8007AFC0), D_8007AFC4, D_8007AFC8, (*(s32 *)&D_8007AFD0), D_8007AFD4, D_8007AFD8, *(f32 *)0x213F28);
        ret = func_8026FCB8();
    } else {
        M2C_FIELD(D_8007AFF8, s8 *, 0x4F) = 0;
        M2C_FIELD(D_8007AFF8, f32 *, 0x70) = (s32) (*__base_D_8007558C);
        M2C_FIELD(D_8007AFF8, f32 *, 0x74) = (f32) (*__base_D_80075590);
        M2C_FIELD(D_8007AFF8, f32 *, 0x78) = (s32) (*__base_D_80075594);
        func_802776D8();
        func_802753F0();
        ret = 1;
    }
    return ret;
}
