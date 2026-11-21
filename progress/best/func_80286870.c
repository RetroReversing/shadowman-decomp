/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern float D_8007558C;
extern float D_80075590;
extern float D_80075594;
s32 func_80113AD0();
s32 func_8023A0DC();
f32 func_802759C4();
s32 func_802A5EC4();
extern char D_217C0C[];
extern void *D_8006A4FC;
extern char D_80075568[];
extern void *D_8007AFF8;

void func_80286870(s32 arg0, s32 arg1) {
    f32 sp18[3];
    s32 sp28[3];
    f32 sp38[3];
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fv1;
    s32 temp_v1;

    sp28[0] = 0;
    sp28[2] = 0;
    sp28[1] = (*(f32 *)((char *)(D_8006A4FC) + 0x1C)) - *(f32 *)0x214F88;
    do { func_8023A0DC(*(f32 *)0x214F84, sp28[0], 0x42B40000, sp18, D_8006A4FC + 0x34); } while (0);
    sp18[0] += (*(f32 *)((char *)(D_8006A4FC) + 0x24));
    sp18[1] += (*(f32 *)((char *)(D_8006A4FC) + 0x28));
    sp18[2] += (*(f32 *)((char *)(D_8006A4FC) + 0x2C));
    temp_fs0 = (f32) ((func_80113AD0() % 60) + 1);
    temp_v1 = func_80113AD0() % 60;
    temp_fv1 = *(f32 *)0x214F8C;
    temp_fs0_2 = temp_fs0 - temp_fv1;
    sp38[0] = (D_8007558C - (*(f32 *)((char *)(D_8006A4FC) + 0x24))) + temp_fs0_2;
    sp38[1] = temp_fa0;
    temp_fa0 = (D_80075590 - (*(f32 *)((char *)(D_8006A4FC) + 0x28))) + ((f32) (temp_v1 + 1) - temp_fv1);
    sp38[2] = (D_80075594 - (*(f32 *)((char *)(D_8006A4FC) + 0x2C))) - temp_fs0_2;
    sp38[1] = func_802759C4();
    func_802A5EC4(sp18, sp38, D_217C0C, 0, 1, (s32) (*(u8 *)((char *)(D_8007AFF8) + 0x40)));
}
