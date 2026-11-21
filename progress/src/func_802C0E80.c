extern void func_80109A1C(s32);
extern void func_80246F50(s32, s32);
extern void func_80268E6C(s32, s32);
extern void func_8026B618(s32, s32);
extern void func_802A6548(void *, s32);
extern void func_802C074C(s32, s32, s32);
extern s32 D_8002DBD0[];
extern s32 D_80036B10;
extern s32 D_80075508;
extern char D_8007558C[];
extern s16 D_80075F58[];

void func_802C0E80(s16 arg0) {
    if (D_80075508 != 0) {
        func_80109A1C(D_80075508);
        D_80075508 = 0;
        func_802A6548(D_8007558C, 0x23);
    }
    if (D_80036B10 != 0) {
        func_80109A1C(D_80036B10);
        D_80036B10 = 0;
    }
    func_8026B618(0, 0);
    if (D_8002DBD0[5] != 7) {
        func_80268E6C(4, -0x2710);
    }
    if (D_8002DBD0[1] != -1) {
        D_80075F58[0] = arg0;
        D_80075F58[4] = ((u16 *)D_8002DBD0)[3];
    }
    func_80246F50(-1, 0);
    func_802C074C(-1, 0, 0x50);
}
