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

M2C_UNK func_8011BA20(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *D_8007BD80;

s32 func_802B7354(void) {
    void **__base_D_8007BD80;
    void *temp_a0;
    void *temp_s0;

    __base_D_8007BD80 = &D_8007BD80;
    temp_s0 = (*__base_D_8007BD80);
    temp_a0 = temp_s0;
    (*__base_D_8007BD80) = M2C_FIELD(temp_s0, void **, 0x28);
    func_8011BA20(temp_a0, 0, 0x30);
    return (s32) temp_s0;
}
