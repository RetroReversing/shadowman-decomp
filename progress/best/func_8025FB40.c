/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802255C0();                            /* extern */
extern s8 D_8002C1BC;
extern s32 D_80052778;
extern s32 D_80074C44;

void func_8025FB40(void) {
    D_8002C1BC = 1;
    func_802255C0();
    D_80052778 = D_80074C44;
}
