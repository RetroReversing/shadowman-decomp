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
f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
M2C_UNK func_8029ACC8(M2C_UNK, M2C_UNK, f32 *, f32 *, s32 *, f32 *, f32, f32); /* extern */
M2C_UNK func_802A6548(f32 *, M2C_UNK);              /* extern */
extern void *D_8006A4FC;

void func_802825E4(void) {
    f32 sp20[3];
    f32 sp30[3];
    s32 sp40[3];
    f32 sp50[3];
    char sp60[0x10];
    f32 temp_fs0;
    f32 temp_fs0_2;

    func_8011BA20(sp60, 0, 0xC);
    sp20[0] = M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    temp_fs0 = *(f32 *)0x214BE4;
    sp20[1] = M2C_FIELD(D_8006A4FC, f32 *, 0x28) + *(f32 *)0x214BE0;
    sp20[2] = M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    sp30[0] = func_8022EBE8(temp_fs0);
    sp30[1] = func_8022EC3C(*(f32 *)0x214BE8) + *(f32 *)0x214BEC;
    sp30[2] = func_8022EBE8(temp_fs0);
    sp40[0] = 0;
    sp40[1] = 0;
    sp40[2] = 0;
    temp_fs0_2 = *(f32 *)0x214BF0;
    sp50[0] = func_8022EBE8(temp_fs0_2);
    sp50[1] = func_8022EBE8(temp_fs0_2);
    sp50[2] = func_8022EBE8(temp_fs0_2);
    func_8029ACC8(0x1A, 0, sp20, sp30, sp40, sp50, *(f32 *)0x214BF4, (f32) ((func_80113AD0() % 450) + 0x352));
    func_802A6548(sp20, 0x28);
}
