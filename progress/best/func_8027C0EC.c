/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80113AD0();                                /* extern */
f32 func_802759C4(f32, void *);                     /* extern */
s32 func_802A5EC4(f32 *, f32 *, s32 *, s32, s32, s32); /* extern */
extern s32 D_2178AC;
extern void *D_8006A4FC;
extern s32 D_80075568;
extern void *D_8007AFF8;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x40, 0x50, 0x54], gap at: 0x44. */
void func_8027C0EC(void) {
    f32 sp18[3];
    f32 sp28[3];
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    f32 temp_fv1;
    s32 temp_v1;

    temp_fs0f = *(f32 *)0x214620;
    sp28[0] = (*(f32 *)((char *)(D_8006A4FC) + 0x24));
    sp28[1] = (*(f32 *)((char *)(D_8006A4FC) + 0x28)) + temp_fs0f;
    sp28[2] = (*(f32 *)((char *)(D_8006A4FC) + 0x2C));
    temp_fs0 = (f32) ((func_80113AD0() % 30) + 1);
    temp_v1 = func_80113AD0() % 30;
    temp_fv1 = *(f32 *)0x214624;
    temp_fs0_2 = temp_fs0 - temp_fv1;
    temp_fa0 = (((*(f32 *)((char *)(&D_80075568) + 0x28)) - (*(f32 *)((char *)(D_8006A4FC) + 0x28))) - temp_fs0f) + ((f32) (temp_v1 + 1) - temp_fv1);
    sp18[0] = ((*(f32 *)((char *)(&D_80075568) + 0x24)) - (*(f32 *)((char *)(D_8006A4FC) + 0x24))) + temp_fs0_2;
    sp18[1] = temp_fa0;
    sp18[2] = ((*(f32 *)((char *)(&D_80075568) + 0x2C)) - (*(f32 *)((char *)(D_8006A4FC) + 0x2C))) - temp_fs0_2;
    sp18[1] = func_802759C4(temp_fa0, D_8006A4FC);
    func_802A5EC4(sp28, sp18, &D_2178AC, 0, 1, (s32) (*(u8 *)((char *)(D_8007AFF8) + 0x40)));
}
