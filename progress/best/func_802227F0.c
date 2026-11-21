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

M2C_UNK func_80116D80(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80117110(M2C_UNK *, s32, s32, M2C_UNK *, s32); /* extern */
M2C_UNK func_8011E150(f32);                         /* extern */
extern M2C_UNK D_80059100;

void func_802227F0(f32 arg0) {
    M2C_UNK sp20;

    func_8011E150(arg0 * *(f32 *)0x20017C);
    func_80117110(&sp20, 0, 0, &D_80059100, 0);
    func_80116D80(&D_80059100, 0, 1);
}
