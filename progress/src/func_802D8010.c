extern s32 D_8007DB68[];
extern s32 D_8002D180[];
extern char D_8004635C[];
extern char D_25C440[];
extern char D_2D810C[];
extern s8 D_8002C1BC;
extern char *D_80052778;
extern s32 D_800591E0;
extern s16 D_8007DB74;
extern u8 D_8007DB78[];
void func_8022AD94(s32);
void func_80103B98(s32);
void func_8022AD04(void *, s32);
void func_801042FC(void);
void func_80227B4C(void);
void func_802255C0(void);

void func_802D8010(void) {
    func_8022AD94(D_8007DB68[0]);
    func_80103B98(D_8007DB68[2]);
    func_80103B98(D_8002D180[3]);
    D_8002D180[3] = 0;
    func_8022AD04(D_8004635C, 1);
    func_801042FC();
    func_80227B4C();
    func_802255C0();
    D_800591E0 &= ~0x80;
    if (D_8007DB68[3] & 0x8000) {
        D_8002C1BC = 1;
        D_80052778 = D_2D810C;
    } else {
        D_8002C1BC = 1;
        D_80052778 = D_25C440;
    }
    if (D_8007DB78[2] == 0 && D_8007DB78[0x8C] != 5) {
        D_8007DB78[4] = 0;
    }
    D_8007DB74 = 0;
}
