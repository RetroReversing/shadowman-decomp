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

M2C_UNK func_8011BA20(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_80036920;
extern s32 D_80036934;
extern s32 D_80036940;
extern s32 D_80036944;
extern s32 D_8003694C;

s32 func_802920F0(void) {
    s32 *__base_D_80036940;
    s32 *__base_D_8003694C;
    s32 *__base_D_80036944;
    if (D_80036934 != 0) {
        D_80036934 = 0;
    }
    __base_D_80036944 = &D_80036944;
    if ((*__base_D_80036944) != 0) {
        (*__base_D_80036944) = 0;
    }
    __base_D_80036940 = &D_80036940;
    if ((*__base_D_80036940) != 0) {
        (*__base_D_80036940) = 0;
    }
    __base_D_8003694C = &D_8003694C;
    if ((*__base_D_8003694C) != 0) {
        (*__base_D_8003694C) = 0;
    }
    func_8011BA20(&D_80036920, 0, 0x14);
    return 1;
}
