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

M2C_UNK func_80239A3C(f32);                         /* extern */
f32 func_802401D0(f32 *, f32 *, M2C_UNK);           /* extern */
extern M2C_UNK D_8002D390;
extern M2C_UNK D_8006A510;
extern s32 D_8006A5B4;
extern M2C_UNK D_80075568;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x68, 0x6c], gap at: 0x60. */
f32 func_802CA6E0(void *arg0) {
    M2C_UNK *__base_D_80075568;
    M2C_UNK *__base_D_8006A510;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30[3];
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft0f;
    f32 temp_ft0f_2;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_ft1f;
    f32 temp_ft1f_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 var_fv0;

    __base_D_80075568 = &D_80075568;
    func_80239A3C(M2C_FIELD(__base_D_80075568, f32 *, 0x1C));
    temp_ft1f = *(f32 *)0x218630;
    temp_fs0 = *(f32 *)0x218634;
    temp_ft1 = *(f32 *)0x218638;
    temp_ft0f = (M2C_FIELD(&D_8002D390, f32 *, 0) * temp_ft1f) + (M2C_FIELD(&D_8002D390, f32 *, 4) * temp_fs0) + (M2C_FIELD(&D_8002D390, f32 *, 8) * temp_ft1);
    sp30[1] = temp_fs0;
    sp30[0] = temp_ft1f;
    sp30[2] = temp_ft1;
    sp10 = temp_ft0f;
    M2C_FIELD(&sp10, f32 *, 4) = (f32) ((M2C_FIELD(&D_8002D390, f32 *, 0xC) * temp_ft1f) + (M2C_FIELD(&D_8002D390, f32 *, 0x10) * temp_fs0) + (M2C_FIELD(&D_8002D390, f32 *, 0x14) * temp_ft1));
    M2C_FIELD(&sp10, f32 *, 8) = (f32) ((M2C_FIELD(&D_8002D390, f32 *, 0x18) * temp_ft1f) + (M2C_FIELD(&D_8002D390, f32 *, 0x1C) * temp_fs0) + (M2C_FIELD(&D_8002D390, f32 *, 0x20) * temp_ft1));
    temp_ft0f_2 = temp_ft0f + M2C_FIELD(arg0, f32 *, 0);
    sp10 = temp_ft0f_2;
    temp_fs0f = *(f32 *)0x21863C;
    temp_fv0f = sp14 + M2C_FIELD(arg0, f32 *, 4);
    sp14 = temp_fv0f;
    D_8006A5B4 = 3;
    temp_fv0 = sp18 + M2C_FIELD(arg0, f32 *, 8);
    sp20 = temp_ft0f_2;
    sp24 = temp_fv0f - temp_fs0f;
    sp18 = temp_fv0;
    sp28 = temp_fv0;
    func_802401D0(&sp10, &sp20, 0x40A00000);
    __base_D_8006A510 = &D_8006A510;
    if ((M2C_FIELD(__base_D_8006A510, s32 *, 0x78) != 0) || (func_80239A3C(M2C_FIELD(__base_D_80075568, f32 *, 0x1C)), temp_ft1f_2 = *(f32 *)0x218640, temp_ft1_2 = *(f32 *)0x218644, temp_ft0 = (M2C_FIELD(&D_8002D390, f32 *, 0) * temp_ft1f_2) + (M2C_FIELD(&D_8002D390, f32 *, 4) * temp_fs0) + (M2C_FIELD(&D_8002D390, f32 *, 8) * temp_ft1_2), sp30[1] = temp_fs0, sp30[0] = temp_ft1f_2, sp30[2] = temp_ft1_2, sp10 = temp_ft0, M2C_FIELD(&sp10, f32 *, 4) = (f32) ((M2C_FIELD(&D_8002D390, f32 *, 0xC) * temp_ft1f_2) + (M2C_FIELD(&D_8002D390, f32 *, 0x10) * temp_fs0) + (M2C_FIELD(&D_8002D390, f32 *, 0x14) * temp_ft1_2)), M2C_FIELD(&sp10, f32 *, 8) = (f32) ((M2C_FIELD(&D_8002D390, f32 *, 0x18) * temp_ft1f_2) + (M2C_FIELD(&D_8002D390, f32 *, 0x1C) * temp_fs0) + (M2C_FIELD(&D_8002D390, f32 *, 0x20) * temp_ft1_2)), temp_ft0_2 = temp_ft0 + M2C_FIELD(arg0, f32 *, 0), sp10 = temp_ft0_2, temp_fv0f_2 = sp14 + M2C_FIELD(arg0, f32 *, 4), sp14 = temp_fv0f_2, temp_fv0_2 = sp18 + M2C_FIELD(arg0, f32 *, 8), sp20 = temp_ft0_2, sp24 = temp_fv0f_2 - temp_fs0f, sp18 = temp_fv0_2, sp28 = temp_fv0_2, var_fv0 = func_802401D0(&sp10, &sp20, 0x41700000), (M2C_FIELD(__base_D_8006A510, s32 *, 0x78) != 0))) {
        var_fv0 = *(f32 *)0x218648;
    }
    return var_fv0;
}
