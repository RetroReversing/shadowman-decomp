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

extern int D_80036B1C;
extern int D_80036B20;
extern int D_80036B24;
f32 func_8011B7E0();
s32 func_80296A04();
extern char D_8006A510[];

void func_80296F90(void *arg0) {
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    void *temp_s0;

    temp_s0 = M2C_FIELD(M2C_FIELD(D_8006A510, void **, 0x8C), s32 *, 0x1C) + (M2C_FIELD(M2C_FIELD(D_8006A510, void **, 0x90), u16 *, 8) * 0x10);
    temp_fa0 = M2C_FIELD(temp_s0, f32 *, 0);
    temp_fv0 = M2C_FIELD(temp_s0, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x24) = func_8011B7E0(sqrtf((temp_fa0 * temp_fa0) + (temp_fv0 * temp_fv0)), -M2C_FIELD(temp_s0, f32 *, 4), M2C_FIELD(D_8006A510, void **, 0x8C));
    M2C_FIELD(arg0, f32 *, 0x28) = func_8011B7E0(-M2C_FIELD(temp_s0, f32 *, 0), -M2C_FIELD(temp_s0, f32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) D_80036B1C;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) D_80036B20;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) D_80036B24;
    temp_fv0_2 = (f32) (func_80296A04(0, D_80036B1C, D_80036B20, D_80036B24) - 2);
    M2C_FIELD(arg0, f32 *, 0x50) = temp_fv0_2;
    M2C_FIELD(arg0, f32 *, 0x54) = temp_fv0_2;
    M2C_FIELD(arg0, s8 *, 0x73) = 1;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) *(f32 *)0x2158F4;
}
