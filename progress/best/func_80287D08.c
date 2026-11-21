/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80113AD0();                                /* extern */
s32 func_8023A0DC(s32, s32, s32, f32 *, void *); /* extern */
f32 func_802759C4(f32, void *);                     /* extern */
s32 func_802A1A98(f32 *, s32 *, s32 *, s32, f32, f32, s32); /* extern */
s32 func_802A5EC4(f32 *, f32 *, s32 *, s32, s32, s32); /* extern */
extern s32 D_217AAC;
extern void *D_8006A4FC;
extern s32 D_80075568;
extern void *D_8007AFF8;

void func_80287D08(void) {
    s32 *__base_D_80075568;
    f32 sp20[3];
    s32 sp30[3];
    s32 sp40[3];
    f32 sp50[3];
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fv0f;
    f32 temp_fv1;
    s32 temp_v1;

    sp40[0] = 0;
    sp40[2] = 0;
    func_8023A0DC(sp40[0], sp40[0], 0x42DC0000, sp20, D_8006A4FC + 0x34);
    sp40[1] = (*(f32 *)((char *)(D_8006A4FC) + 0x1C)) - *(f32 *)0x215050;
    sp20[0] += (*(f32 *)((char *)(D_8006A4FC) + 0x24));
    temp_fv0f = *(f32 *)0x215058;
    sp20[1] += (*(f32 *)((char *)(D_8006A4FC) + 0x28)) + *(f32 *)0x215054;
    sp30[0] = sp40[0];
    sp30[1] = sp40[0];
    sp30[2] = sp40[0];
    sp20[2] += (*(f32 *)((char *)(D_8006A4FC) + 0x2C));
    do { func_802A1A98(sp20, sp30, sp40, 0x14, temp_fv0f, temp_fv0f, 0); } while (0);
    temp_fs0 = (f32) ((func_80113AD0() % 60) + 1);
    temp_v1 = func_80113AD0() % 60;
    temp_fv1 = *(f32 *)0x21505C;
    temp_fs0_2 = temp_fs0 - temp_fv1;
    __base_D_80075568 = &D_80075568;
    sp50[0] = ((*(f32 *)((char *)(__base_D_80075568) + 0x24)) - (*(f32 *)((char *)(D_8006A4FC) + 0x24))) + temp_fs0_2;
    temp_fa0 = (((*(f32 *)((char *)(__base_D_80075568) + 0x28)) - (*(f32 *)((char *)(D_8006A4FC) + 0x28))) - *(f32 *)0x215060) + ((f32) (temp_v1 + 1) - temp_fv1);
    sp50[1] = temp_fa0;
    sp50[2] = ((*(f32 *)((char *)(__base_D_80075568) + 0x2C)) - (*(f32 *)((char *)(D_8006A4FC) + 0x2C))) - temp_fs0_2;
    sp50[1] = func_802759C4(temp_fa0, D_8006A4FC);
    func_802A5EC4(sp20, sp50, &D_217AAC, 0, 1, (s32) (*(u8 *)((char *)(D_8007AFF8) + 0x40)));
}
