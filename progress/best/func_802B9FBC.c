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

s32 func_80113AD0();                                /* extern */
M2C_UNK func_8011BA20(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
f32 func_8022EBE8(void);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
M2C_UNK func_80299D50(M2C_UNK, s32, M2C_UNK *, f32, f32, s32); /* extern */
M2C_UNK func_802A1140(s32, M2C_UNK *, M2C_UNK, f32, f32, s32, f32, s32, s32, s32, s32); /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x40, 0x44, 0x50, 0x54], gap at: 0x48. */
void func_802B9FBC(s32 arg0) {
    char sp30[0x10];
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;

    func_8011BA20(sp30, 0, 0xC);
    if (!(func_80113AD0() & 1)) {
        temp_fs0 = func_8022EC3C(*(f32 *)0x217F0C) + *(f32 *)0x217F10;
        func_80299D50(0x2D, arg0, sp30, temp_fs0, func_8022EC3C(*(f32 *)0x217F14) + *(f32 *)0x217F18, 1);
    }
    if (!(func_80113AD0() & 1)) {
        temp_fa0 = *(f32 *)0x217F20;
        temp_fs0_2 = func_8022EC3C(*(f32 *)0x217F1C) + temp_fa0;
        temp_fs0f = func_8022EBE8() + *(f32 *)0x217F24;
        func_802A1140(arg0, sp30, 0x3F733333, temp_fs0_2, temp_fs0f, 0x1C, (f32) (func_80113AD0() % 3), 0, 0, 0, 1);
    }
}
