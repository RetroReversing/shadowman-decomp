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

extern float D_8007AFC0;
extern float D_8007AFC4;
extern float D_8007AFC8;
extern float D_8007AFD0;
extern float D_8007AFD4;
extern float D_8007AFD8;
s32 func_802403F8();
extern void *D_8006A4FC;

void func_80271E98(f32 arg0) {
    D_8007AFC0 = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    D_8007AFC4 = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x28);
    D_8007AFC8 = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    D_8007AFD0 = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    D_8007AFD4 = (f32) (M2C_FIELD(D_8006A4FC, f32 *, 0x28) - arg0);
    D_8007AFD8 = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    func_802403F8(&D_8007AFC0, &D_8007AFD0);
}
