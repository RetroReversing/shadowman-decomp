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
M2C_UNK func_8023A0DC(M2C_UNK32, M2C_UNK32, M2C_UNK, f32 *, void *); /* extern */
f32 func_802759C4(f32, void *);                     /* extern */
M2C_UNK func_802A1A98(f32 *, M2C_UNK32 *, M2C_UNK32 *, M2C_UNK, f32, f32, s32); /* extern */
M2C_UNK func_802A5EC4(f32 *, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_217AAC;
extern void *D_8006A4FC;
extern M2C_UNK D_80075568;
extern void *D_8007AFF8;

void func_80287D08(void) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    M2C_UNK32 sp30;
    M2C_UNK32 sp34;
    M2C_UNK32 sp38;
    M2C_UNK32 sp40;
    f32 sp44;
    s32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fv0f;
    f32 temp_fv1;
    s32 temp_v1;

    sp40 = 0;
    sp48 = 0;
    sp44 = M2C_FIELD(D_8006A4FC, f32 *, 0x1C) - *(f32 *)0x215050;
    func_8023A0DC(sp40, sp40, 0x42DC0000, &sp20, D_8006A4FC + 0x34);
    sp20 += M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    temp_fv0f = *(f32 *)0x215058;
    sp24 += M2C_FIELD(D_8006A4FC, f32 *, 0x28) + *(f32 *)0x215054;
    sp30 = sp40;
    sp34 = sp40;
    sp38 = sp40;
    sp28 += M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    func_802A1A98(&sp20, &sp30, &sp40, 0x14, temp_fv0f, temp_fv0f, 0);
    temp_fs0 = (f32) ((func_80113AD0() % 60) + 1);
    temp_v1 = func_80113AD0() % 60;
    temp_fv1 = *(f32 *)0x21505C;
    temp_fs0_2 = temp_fs0 - temp_fv1;
    sp50 = (M2C_FIELD(&D_80075568, f32 *, 0x24) - M2C_FIELD(D_8006A4FC, f32 *, 0x24)) + temp_fs0_2;
    temp_fa0 = ((M2C_FIELD(&D_80075568, f32 *, 0x28) - M2C_FIELD(D_8006A4FC, f32 *, 0x28)) - *(f32 *)0x215060) + ((f32) (temp_v1 + 1) - temp_fv1);
    sp54 = temp_fa0;
    sp58 = (M2C_FIELD(&D_80075568, f32 *, 0x2C) - M2C_FIELD(D_8006A4FC, f32 *, 0x2C)) - temp_fs0_2;
    sp54 = func_802759C4(temp_fa0, D_8006A4FC);
    func_802A5EC4(&sp20, &sp50, &D_217AAC, 0, 1, (s32) M2C_FIELD(D_8007AFF8, u8 *, 0x40));
}
