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

extern float D_8007558C;
extern float D_80075590;
s32 func_80113AD0();
s32 func_8023A0DC();
f32 func_802759C4();
s32 func_80282580();
s32 func_802A1A98();
s32 func_802A5EC4();
extern char D_217B6C[];
extern void *D_8006A4FC;
extern char D_80075568[];
extern void *D_8007AFF8;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x60, 0x64, 0x68, 0x78, 0x7c, 0x80, 0x84], gap at: 0x6c. */
void func_802823C4(f32 arg0, f32 arg1, void *arg2) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    s32 sp48;
    f32 sp50;
    f32 sp54;
    f32 temp_fs0;
    f32 temp_fv0f;
    f32 temp_fv1f;
    s32 temp_v1;

    sp40 = 0.0f;
    sp48 = 0;
    sp44 = M2C_FIELD(D_8006A4FC, f32 *, 0x1C) - *(f32 *)0x214BCC;
    func_8023A0DC(arg0, arg1, sp40, &sp20, D_8006A4FC + 0x34);
    sp20 += M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    sp24 += M2C_FIELD(D_8006A4FC, f32 *, 0x28) - arg1;
    temp_fv0f = *(f32 *)0x214BD0;
    sp30 = sp40;
    sp34 = sp40;
    sp38 = sp40;
    sp28 += M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    func_802A1A98(&sp20, &sp30, &sp40, 0x14, temp_fv0f, temp_fv0f, 0);
    if (sp40 < arg0) {
        if (arg0 < *(f32 *)0x214BD4) {
            temp_fs0 = (f32) ((func_80113AD0(arg0) % 60) + 1);
            temp_v1 = func_80113AD0() % 60;
            temp_fv1f = *(f32 *)0x214BD8;
            sp50 = (D_8007558C - M2C_FIELD(D_8006A4FC, f32 *, 0x24)) + (temp_fs0 - temp_fv1f);
            sp54 = ((D_80075590 - M2C_FIELD(D_8006A4FC, f32 *, 0x28)) - *(f32 *)0x214BDC) + ((f32) (temp_v1 + 1) - temp_fv1f);
            func_80282580(D_8006A4FC);
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        func_8023A0DC(arg0, NULL, arg2, &sp50, D_8006A4FC + 0x34);
        sp54 = func_802759C4(sp54);
        func_802A5EC4(&sp20, &sp50, D_217B6C, 0, 1, (s32) M2C_FIELD(D_8007AFF8, u8 *, 0x40));
        return;
    }
    func_8023A0DC(arg0, NULL, arg2, &sp50, D_8006A4FC + 0x34);
    sp54 = func_802759C4(sp54);
    func_802A5EC4(&sp20, &sp50, D_217B6C, 0, 1, (s32) M2C_FIELD(D_8007AFF8, u8 *, 0x40));
}
