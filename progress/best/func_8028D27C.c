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

M2C_UNK func_8023A0DC(M2C_UNK32, M2C_UNK32, M2C_UNK, f32 *, void *); /* extern */
M2C_UNK func_8028D3A4(f32 *, f32 *, M2C_UNK *);     /* extern */
M2C_UNK func_802A5EC4(f32 *, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_217BEC;
extern M2C_UNK D_217C4C;
extern void *D_8006A4FC;
extern M2C_UNK D_80075568;
extern void *D_8007AFF8;

void func_8028D27C(void) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    M2C_UNK32 sp28;
    f32 sp2C;
    s32 sp30;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 temp_fs0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;

    temp_fs0 = *(f32 *)0x215418;
    sp28 = 0;
    sp30 = 0;
    sp2C = M2C_FIELD(D_8006A4FC, f32 *, 0x1C) - temp_fs0;
    func_8023A0DC(sp28, sp28, 0x437A0000, &sp18, D_8006A4FC + 0x34);
    sp18 += M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    temp_fv1 = *(f32 *)0x21541C;
    sp1C += M2C_FIELD(D_8006A4FC, f32 *, 0x28);
    sp20 += M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    temp_fv1f = M2C_FIELD(&D_80075568, f32 *, 0x24) - M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    sp38 = temp_fv1f;
    temp_fv0f = M2C_FIELD(&D_80075568, f32 *, 0x28) - (M2C_FIELD(D_8006A4FC, f32 *, 0x28) + temp_fs0);
    sp3C = temp_fv0f;
    temp_fv1_2 = M2C_FIELD(&D_80075568, f32 *, 0x2C) - M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    sp38 = temp_fv1f + (M2C_FIELD(&D_80075568, f32 *, 0xC) * temp_fv1);
    sp3C = temp_fv0f + (M2C_FIELD(&D_80075568, f32 *, 0x10) * temp_fv1);
    sp40 = temp_fv1_2;
    sp40 = temp_fv1_2 + (M2C_FIELD(&D_80075568, f32 *, 0x14) * temp_fv1);
    if (M2C_FIELD(D_8007AFF8, u16 *, 0x98) == 0) {
        func_8028D3A4(&sp18, &sp38, &D_217BEC);
        return;
    }
    func_802A5EC4(&sp18, &sp38, &D_217C4C, 0, 1, (s32) M2C_FIELD(D_8007AFF8, u8 *, 0x40));
}
