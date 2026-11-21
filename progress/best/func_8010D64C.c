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

s16 func_8010D28C();
extern s32 D_80036944;
extern void *D_8006A4FC;

void func_8010D64C(s32 arg0, s32 arg1, s16 arg2) {
    void **__base_D_8006A4FC;
    s16 temp_v0;
    void *temp_v1;

    __base_D_8006A4FC = &D_8006A4FC;
    temp_v0 = func_8010D28C(arg0, (*__base_D_8006A4FC) + 0x24, arg2);
    if (temp_v0 != -1) {
        temp_v1 = D_80036944 + (temp_v0 * 0x34);
        M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x24) = (f32) M2C_FIELD(temp_v1, f32 *, 4);
        M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x28) = (f32) (M2C_FIELD(temp_v1, f32 *, 8) + *(f32 *)0x10203C);
        M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x2C) = (f32) M2C_FIELD(temp_v1, f32 *, 0xC);
    }
}
