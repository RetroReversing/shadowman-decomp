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
f32 func_80236880(f32 *, void *);                   /* extern */
M2C_UNK func_8023A0DC(f32, f32, M2C_UNK, f32 *, void *); /* extern */
M2C_UNK func_80270E0C(f32);                         /* extern */
M2C_UNK func_8027AF08();                            /* extern */
M2C_UNK func_802A1A98(f32 *, f32 *, f32 *, M2C_UNK, f32, f32, s32); /* extern */
M2C_UNK func_802A5EC4(f32 *, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_217B6C;
extern void *D_8006A4FC;
extern M2C_UNK D_80075568;
extern void *D_8007AFF8;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x70, 0x74, 0x78, 0x7c, 0x88, 0x8c, 0x90, 0x94], gap at: 0x80. */
void func_8027ACC4(f32 arg0, f32 arg1, M2C_UNK arg2) {
    f32 sp20;
    f32 sp24;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp60;
    f32 sp64;
    s32 sp68;
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1f;
    f32 var_fv0f;
    s32 temp_v1;

    func_80270E0C(*(f32 *)0x2144D8);
    sp60 = 0.0f;
    sp68 = 0;
    sp64 = M2C_FIELD(D_8006A4FC, f32 *, 0x1C) - *(f32 *)0x2144DC;
    func_8023A0DC(arg0, sp60, arg2, &sp50, D_8006A4FC + 0x34);
    sp50 += M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    sp54 += M2C_FIELD(D_8006A4FC, f32 *, 0x28) - arg1;
    temp_fv0f = *(f32 *)0x2144E0;
    sp40 = sp60;
    sp44 = sp60;
    sp48 = sp60;
    sp58 += M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    func_802A1A98(&sp50, &sp40, &sp60, 0x14, temp_fv0f, temp_fv0f, 0);
    sp30 = M2C_FIELD(&D_80075568, f32 *, 0x24);
    sp34 = M2C_FIELD(&D_80075568, f32 *, 0x28);
    sp38 = M2C_FIELD(&D_80075568, f32 *, 0x2C);
    func_80113AD0();
    func_80113AD0();
    var_fv0f = M2C_FIELD(D_8006A4FC, f32 *, 0x1C) - func_80236880(&sp30, D_8006A4FC + 0x24);
    if (var_fv0f < sp60) {
        var_fv0f += *(f32 *)0x2144E4;
    }
    temp_fv0 = *(f32 *)0x2144E8;
    if (temp_fv0 < var_fv0f) {
        var_fv0f -= temp_fv0;
    }
    if (*(f32 *)0x2144EC < var_fv0f) {
        if (var_fv0f < *(f32 *)0x2144F0) {
            temp_fs0 = (f32) ((func_80113AD0() % 20) + 1);
            temp_v1 = func_80113AD0() % 20;
            temp_fv1f = *(f32 *)0x2144F4;
            sp20 = (M2C_FIELD(&D_80075568, f32 *, 0x24) - M2C_FIELD(D_8006A4FC, f32 *, 0x24)) + (temp_fs0 - temp_fv1f);
            sp24 = (M2C_FIELD(&D_80075568, f32 *, 0x28) - M2C_FIELD(D_8006A4FC, f32 *, 0x28)) + ((f32) (temp_v1 + 1) - temp_fv1f);
            func_8027AF08();
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        func_8023A0DC(0.0f, 0.0f, 0xC3480000, &sp20, D_8006A4FC + 0x34);
        func_802A5EC4(&sp50, &sp20, &D_217B6C, 0, 1, (s32) M2C_FIELD(D_8007AFF8, u8 *, 0x40));
        func_80270E0C(*(f32 *)0x2144F8);
        return;
    }
    func_8023A0DC(0.0f, 0.0f, 0xC3480000, &sp20, D_8006A4FC + 0x34);
    func_802A5EC4(&sp50, &sp20, &D_217B6C, 0, 1, (s32) M2C_FIELD(D_8007AFF8, u8 *, 0x40));
    func_80270E0C(*(f32 *)0x2144F8);
}
