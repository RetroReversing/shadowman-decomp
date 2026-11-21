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
s32 func_80113AD0();
f32 func_8022EC3C();
void *func_80296BC0();
extern char D_80036D80[];

void *func_80297AF4(s32 arg0) {
    int *__base_D_80036B1C;
    f32 temp_fs0;
    f32 temp_fv0;
    s32 temp_ret;
    void *temp_v0;

    __base_D_80036B1C = &D_80036B1C;
    temp_v0 = func_80296BC0(arg0, __base_D_80036B1C);
    if (temp_v0 != NULL) {
        temp_ret = func_80113AD0();
        temp_fs0 = *(f32 *)0x215934;
        temp_fv0 = (f32) ((temp_ret % 40) + 0x46);
        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = (f32) (func_8022EC3C(temp_fs0, temp_ret / 40) + temp_fs0);
        M2C_FIELD(temp_v0, f32 *, 0xC) = (f32) (func_8022EC3C(*(f32 *)0x215938) + *(f32 *)0x21593C);
        M2C_FIELD(temp_v0, s32 *, 0x24) = (s32) (*__base_D_80036B1C);
        M2C_FIELD(temp_v0, s32 *, 0x28) = (s32) D_80036B20;
        M2C_FIELD(temp_v0, s32 *, 0x2C) = (s32) D_80036B24;
    }
    return temp_v0;
}
