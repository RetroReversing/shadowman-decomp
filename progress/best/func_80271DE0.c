extern float D_8007AFC0;
extern float D_8007AFC4;
extern float D_8007AFC8;
extern float D_8007AFD4;
extern float D_8007AFD0;
extern float D_8007AFD8;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023A0DC(s32, f32, s32, s32, s32, s32);
s32 func_802403F8(void *, void *, f32, s32);
extern void *D_8006A4FC;

void func_80271DE0(s32 arg0, f32 arg1, s32 arg2) {
    D_8007AFC0 = (f32) (*(f32 *)((char *)(D_8006A4FC) + 0x24));
    D_8007AFC4 = (f32) ((*(f32 *)((char *)(D_8006A4FC) + 0x28)) + arg1);
    D_8007AFC8 = (f32) (*(f32 *)((char *)(D_8006A4FC) + 0x2C));
    do { func_8023A0DC(arg0, arg1, arg2, 0, &D_8007AFD0, D_8006A4FC + 0x34); } while (0);
    D_8007AFD4 = (f32) D_8007AFC4;
    D_8007AFD8 = (f32) (D_8007AFD8 + D_8007AFC8);
    D_8007AFD0 = (f32) (D_8007AFD0 + D_8007AFC0);
    func_802403F8(&D_8007AFC0, &D_8007AFD0, 1.0f, 3);
}
