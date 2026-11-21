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
 * Saved: [0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x70, 0x74], gap at: 0x64. */
f32 func_802C9F60(void *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_ft1f;
    f32 temp_ft1f_2;
    f32 temp_ft2f;
    f32 temp_ft3;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv0f_4;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    f32 temp_fv1f_3;
    f32 temp_fv1f_4;
    f32 var_fv0;

    func_80239A3C(M2C_FIELD(&D_80075568, f32 *, 0x1C));
    temp_fs0f = *(f32 *)0x2185DC;
    temp_ft3 = *(f32 *)0x2185E0;
    sp14 = temp_fs0f;
    sp10 = temp_ft3;
    sp18 = *(f32 *)0x2185E4;
    temp_ft1f = M2C_FIELD(&sp10, f32 *, 4);
    temp_ft1 = M2C_FIELD(&sp10, f32 *, 8);
    temp_fv1f = (M2C_FIELD(&D_8002D390, f32 *, 0) * temp_ft3) + (temp_ft1f * M2C_FIELD(&D_8002D390, f32 *, 4)) + (temp_ft1 * M2C_FIELD(&D_8002D390, f32 *, 8));
    temp_fv0f = (M2C_FIELD(&D_8002D390, f32 *, 0xC) * temp_ft3) + (temp_ft1f * M2C_FIELD(&D_8002D390, f32 *, 0x10)) + (temp_ft1 * M2C_FIELD(&D_8002D390, f32 *, 0x14));
    temp_fv1 = (M2C_FIELD(&D_8002D390, f32 *, 0x18) * temp_ft3) + (temp_ft1f * M2C_FIELD(&D_8002D390, f32 *, 0x1C)) + (temp_ft1 * M2C_FIELD(&D_8002D390, f32 *, 0x20));
    sp20 = temp_fv1f;
    sp24 = temp_fv0f;
    sp28 = temp_fv1;
    temp_fv1f_2 = temp_fv1f + M2C_FIELD(arg0, f32 *, 0);
    sp20 = temp_fv1f_2;
    temp_fv0f_2 = temp_fv0f + M2C_FIELD(arg0, f32 *, 4);
    temp_fs0 = *(f32 *)0x2185E8;
    sp24 = temp_fv0f_2;
    D_8006A5B4 = 3;
    temp_fv1_2 = temp_fv1 + M2C_FIELD(arg0, f32 *, 8);
    sp30 = temp_fv1f_2;
    sp34 = temp_fv0f_2 - temp_fs0;
    sp28 = temp_fv1_2;
    sp38 = temp_fv1_2;
    func_802401D0(&sp20, &sp30, 0x40A00000);
    if ((M2C_FIELD(&D_8006A510, s32 *, 0x78) != 0) || (func_80239A3C(M2C_FIELD(&D_80075568, f32 *, 0x1C)), temp_ft2f = *(f32 *)0x2185EC, sp14 = temp_fs0f, sp10 = temp_ft2f, sp18 = *(f32 *)0x2185F0, temp_ft1f_2 = M2C_FIELD(&sp10, f32 *, 4), temp_ft1_2 = M2C_FIELD(&sp10, f32 *, 8), temp_fv1f_3 = (M2C_FIELD(&D_8002D390, f32 *, 0) * temp_ft2f) + (temp_ft1f_2 * M2C_FIELD(&D_8002D390, f32 *, 4)) + (temp_ft1_2 * M2C_FIELD(&D_8002D390, f32 *, 8)), temp_fv0f_3 = (M2C_FIELD(&D_8002D390, f32 *, 0xC) * temp_ft2f) + (temp_ft1f_2 * M2C_FIELD(&D_8002D390, f32 *, 0x10)) + (temp_ft1_2 * M2C_FIELD(&D_8002D390, f32 *, 0x14)), temp_fv1_3 = (M2C_FIELD(&D_8002D390, f32 *, 0x18) * temp_ft2f) + (temp_ft1f_2 * M2C_FIELD(&D_8002D390, f32 *, 0x1C)) + (temp_ft1_2 * M2C_FIELD(&D_8002D390, f32 *, 0x20)), sp20 = temp_fv1f_3, sp24 = temp_fv0f_3, sp28 = temp_fv1_3, temp_fv1f_4 = temp_fv1f_3 + M2C_FIELD(arg0, f32 *, 0), sp20 = temp_fv1f_4, temp_fv0f_4 = temp_fv0f_3 + M2C_FIELD(arg0, f32 *, 4), sp24 = temp_fv0f_4, temp_fv1_4 = temp_fv1_3 + M2C_FIELD(arg0, f32 *, 8), sp30 = temp_fv1f_4, sp34 = temp_fv0f_4 - temp_fs0, sp28 = temp_fv1_4, sp38 = temp_fv1_4, var_fv0 = func_802401D0(&sp20, &sp30, 0x41700000), (M2C_FIELD(&D_8006A510, s32 *, 0x78) != 0))) {
        var_fv0 = *(f32 *)0x2185F4;
    }
    return var_fv0;
}
