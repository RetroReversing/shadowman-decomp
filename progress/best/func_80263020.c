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

extern float D_80075198;
extern float D_8007519C;
extern float D_800751A0;
extern s32 D_800753E0;

void func_80263020(s32 arg0, void *arg1, s32 arg2) {
    D_80075198 = (f32) M2C_FIELD(arg1, f32 *, 0);
    D_8007519C = (f32) M2C_FIELD(arg1, f32 *, 4);
    D_800751A0 = (f32) M2C_FIELD(arg1, f32 *, 8);
    D_800753E0 = arg2;
}
