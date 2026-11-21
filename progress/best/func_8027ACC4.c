/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80113AD0();                                /* extern */
f32 func_80236880(f32 *, void *);                   /* extern */
s32 func_8023A0DC(f32, f32, s32, f32 *, void *); /* extern */
s32 func_80270E0C(f32);                         /* extern */
s32 func_8027AF08();                            /* extern */
s32 func_802A1A98(f32 *, f32 *, f32 *, s32, f32, f32, s32); /* extern */
s32 func_802A5EC4(f32 *, f32 *, s32 *, s32, s32, s32); /* extern */
extern s32 D_217B6C;
extern void *D_8006A4FC;
extern s32 D_80075568;
extern void *D_8007AFF8;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x70, 0x74, 0x78, 0x7c, 0x88, 0x8c, 0x90, 0x94], gap at: 0x80. */
void func_8027ACC4(f32 arg0, f32 arg1, f32 arg2) {
    s32 *__base_D_80075568;
    f32 sp20[2];
    f32 sp30[3];
    f32 sp40[3];
    f32 sp50[3];
    f32 sp60[3];
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1f;
    register f32 var_fv0f;
    s32 temp_v1;

    func_80270E0C(*(f32 *)0x2144D8);
    sp60[0] = 0.0f;
    sp60[2] = 0;
    sp60[1] = (*(f32 *)((char *)(D_8006A4FC) + 0x1C)) - *(f32 *)0x2144DC;
    func_8023A0DC(arg0, sp60[0], arg2, sp50, D_8006A4FC + 0x34);
    sp50[0] += (*(f32 *)((char *)(D_8006A4FC) + 0x24));
    sp50[1] += (*(f32 *)((char *)(D_8006A4FC) + 0x28)) - arg1;
    temp_fv0f = *(f32 *)0x2144E0;
    sp40[0] = sp60[0];
    sp40[1] = sp60[0];
    sp40[2] = sp60[0];
    func_802A1A98(sp50, sp40, sp60, 0x14, temp_fv0f, temp_fv0f, 0);
    sp50[2] += (*(f32 *)((char *)(D_8006A4FC) + 0x2C));
    __base_D_80075568 = &D_80075568;
    sp30[0] = (*(f32 *)((char *)(__base_D_80075568) + 0x24));
    sp30[1] = (*(f32 *)((char *)(__base_D_80075568) + 0x28));
    sp30[2] = (*(f32 *)((char *)(__base_D_80075568) + 0x2C));
    func_80113AD0();
    func_80113AD0();
    var_fv0f = (*(f32 *)((char *)(D_8006A4FC) + 0x1C)) - func_80236880(sp30, D_8006A4FC + 0x24);
    if (var_fv0f < sp60[0]) {
        var_fv0f += *(f32 *)0x2144E4;
    }
    temp_fv0 = *(f32 *)0x2144E8;
    if (var_fv0f > temp_fv0) {
        var_fv0f -= temp_fv0;
    }
    if (*(f32 *)0x2144EC < var_fv0f) {
        if (var_fv0f < *(f32 *)0x2144F0) {
            temp_fs0 = (f32) ((func_80113AD0() % 20) + 1);
            temp_v1 = func_80113AD0() % 20;
            temp_fv1f = *(f32 *)0x2144F4;
            sp20[0] = ((*(f32 *)((char *)(__base_D_80075568) + 0x24)) - (*(f32 *)((char *)(D_8006A4FC) + 0x24))) + (temp_fs0 - temp_fv1f);
            sp20[1] = ((*(f32 *)((char *)(__base_D_80075568) + 0x28)) - (*(f32 *)((char *)(D_8006A4FC) + 0x28))) + ((f32) (temp_v1 + 1) - temp_fv1f);
            func_8027AF08();
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        func_8023A0DC(0.0f, 0.0f, 0xC3480000, sp20, D_8006A4FC + 0x34);
        func_802A5EC4(sp50, sp20, &D_217B6C, 0, 1, (s32) (*(u8 *)((char *)(D_8007AFF8) + 0x40)));
        func_80270E0C(*(f32 *)0x2144F8);
        return;
    }
    func_8023A0DC(0.0f, 0.0f, 0xC3480000, sp20, D_8006A4FC + 0x34);
    func_802A5EC4(sp50, sp20, &D_217B6C, 0, 1, (s32) (*(u8 *)((char *)(D_8007AFF8) + 0x40)));
    func_80270E0C(*(f32 *)0x2144F8);
}
