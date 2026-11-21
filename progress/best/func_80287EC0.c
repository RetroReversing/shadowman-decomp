/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80113AD0();                            /* extern */
s32 func_8023A0DC(s32, s32, f32, f32 *, void *); /* extern */
s32 func_802A1A98(f32 *, s32 *, s32 *, s32, f32, f32, s32); /* extern */
s32 func_802A5EC4(f32 *, f32 *, s32 *, s32, s32, s32); /* extern */
extern s32 D_217AAC;
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_80287EC0(void) {
    f32 sp20[3];
    s32 sp30[3];
    s32 sp40[3];
    char sp50[0x10];
    f32 temp_fv0f;
    f32 temp_fs0f;

    sp40[0] = 0;
    temp_fs0f = *(f32 *)0x215064;
    sp40[1] = (*(f32 *)((char *)(D_8006A4FC) + 0x1C)) - *(f32 *)0x215068;
    sp40[2] = 0;
    func_8023A0DC(sp40[0], sp40[0], temp_fs0f, sp20, D_8006A4FC + 0x34);
    sp20[0] += (*(f32 *)((char *)(D_8006A4FC) + 0x24));
    temp_fv0f = *(f32 *)0x215070;
    sp20[1] += (*(f32 *)((char *)(D_8006A4FC) + 0x28)) + *(f32 *)0x21506C;
    sp30[0] = sp40[0];
    sp30[1] = sp40[0];
    sp30[2] = sp40[0];
    sp20[2] += (*(f32 *)((char *)(D_8006A4FC) + 0x2C));
    func_802A1A98(sp20, sp30, sp40, 0x14, temp_fv0f, temp_fv0f, 0);
    func_80113AD0();
    func_80113AD0();
    func_8023A0DC(sp40[0], sp40[0], temp_fs0f, sp50, D_8006A4FC + 0x34);
    func_802A5EC4(sp20, sp50, &D_217AAC, 0, 1, (s32) (*(u8 *)((char *)(D_8007AFF8) + 0x40)));
}
