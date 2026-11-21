/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_8007558C;
extern float D_80075590;
extern int D_80075594;
s32 func_8010E590();
extern char D_80034B78[];
extern char D_80075568[];

void func_802876D4(void) {
    struct {
        s32 f10;
        f32 f14;
        s32 f18;
    } __repair_frame;

    __repair_frame.f10 = D_8007558C;
    __repair_frame.f14 = D_80075590;
    __repair_frame.f18 = D_80075594;
    func_8010E590(D_80034B78,  &__repair_frame);
    __repair_frame.f14 += *(f32 *)0x214FFC;
}
