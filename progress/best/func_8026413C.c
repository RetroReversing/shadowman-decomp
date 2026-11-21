/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80233F78(s32 *);                   /* extern */
extern s32 D_80074E60;
extern s32 D_80074E68;
extern s32 D_800751A8;
extern s32 D_800752D0;
extern s32 D_800753E4;

void func_8026413C(s32 arg0) {
    D_800752D0 = 0;
    D_80074E60 = 0;
    D_800751A8 = arg0;
    func_80233F78(&D_80074E68);
    D_800753E4 = 7;
}
