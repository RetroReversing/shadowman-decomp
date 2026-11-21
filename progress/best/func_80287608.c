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

s32 func_8010EE1C(void *, void *, void *);          /* extern */
M2C_UNK func_80267F78(f32, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern u8 D_212078[];
extern s32 D_8006A4FC;
extern void *D_8007AFF8;
extern void *D_8007B1E0;

void func_80287608(void) {
    void **__base_D_8007B1E0;
    s32 var_v0;

    __base_D_8007B1E0 = &D_8007B1E0;
    if ((M2C_FIELD((*__base_D_8007B1E0), u8 *, 0x66) == 0) && ((var_v0 = func_8010EE1C((*__base_D_8007B1E0) + 0x164, (*__base_D_8007B1E0) + 0x158, (*__base_D_8007B1E0) + 0x140), (var_v0 > 0)) || (var_v0 = func_8010EE1C((*__base_D_8007B1E0) + 0x140, (*__base_D_8007B1E0) + 0x14C, (*__base_D_8007B1E0) + 0x164), (var_v0 > 0)))) {
        func_80267F78((f32) (M2C_FIELD(((M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + D_212078), u8 *, 0x24) * 0x64), D_212078, D_8006A4FC + 0x24, 7, var_v0 + 0x16);
        M2C_FIELD((*__base_D_8007B1E0), u8 *, 0x66) = 1U;
    }
}
