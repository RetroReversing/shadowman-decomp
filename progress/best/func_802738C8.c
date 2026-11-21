/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_80234B70(f32 *);                       /* extern */
M2C_UNK func_802403F8(f32 *, f32 *, M2C_UNK, M2C_UNK); /* extern */
f32 func_802739A8(f32 *, f32 *, M2C_UNK);           /* extern */
f32 func_80273A54(M2C_UNK *, void *, M2C_UNK *);    /* extern */
extern M2C_UNK D_212078;
extern void *D_8006A4FC;
extern M2C_UNK D_8006A510;
extern f32 D_8007AFE4;
extern void *D_8007AFF8;

f32 func_802738C8(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
int *__repair_home0 = &arg0;

    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    f32 temp_fv1f_2;

    sp10 = arg3;
    sp14 = 0.0f;
    sp18 = arg4;
    func_80234B70(&sp10);
    temp_fv1f = sp10 * (f32) M2C_FIELD(D_8007AFF8, u8 *, 0x3E);
    sp10 = temp_fv1f;
    temp_fv1 = sp18 * (f32) M2C_FIELD(D_8007AFF8, u8 *, 0x3E);
    sp18 = temp_fv1;
    temp_fv1f_2 = temp_fv1f + M2C_BITWISE(f32, (*__repair_home0));
    sp10 = temp_fv1f_2;
    sp14 += arg1 + D_8007AFE4;
    temp_fv1_2 = temp_fv1 + arg2;
    sp20 = temp_fv1f_2;
    sp24 = arg1 - *(f32 *)0x21412C;
    sp18 = temp_fv1_2;
    sp28 = temp_fv1_2;
    if (M2C_FIELD(D_8007AFF8, s32 *, 0x48) & 0x40000) {
        return func_802739A8(&sp10, &sp20, 0x40A00000);
    }
    func_802403F8(&sp10, &sp20, 0x40A00000, 3);
    M2C_FIELD(D_8007AFF8, f32 *, 0x8C) = (f32) *(f32 *)0x214130;
    if ((M2C_FIELD(&D_8006A510, s32 *, 0x78) == 1) && (M2C_FIELD(&D_8006A510, s32 *, 0x98) == 0)) {
        M2C_FIELD(D_8007AFF8, f32 *, 0x8C) = (f32) -M2C_FIELD(((M2C_FIELD(M2C_FIELD(&D_8006A510, void **, 0x90), u16 *, 8) * 0x10) + M2C_FIELD(M2C_FIELD(&D_8006A510, void **, 0x8C), s32 *, 0x1C)), f32 *, 4);
        return func_80273A54(&D_212078, D_8007AFF8, &D_8006A510);
    }
    return M2C_FIELD(D_8006A4FC, f32 *, 0x28) - *(f32 *)0x214134;
}
