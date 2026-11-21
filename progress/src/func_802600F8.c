extern s32 D_8002DBD0[];
extern s16 D_80030630[][16];
extern char D_80075518[];
extern char D_80075568[];
s32 func_8023DF7C();
s32 func_80246F50();

void func_802600F8(s32 arg0) {
    s32 i;
    for (i = 0; i < 0x1E; i++) {
        if (D_80030630[i][0] == 7) {
            if (arg0 == 0 && D_8002DBD0[5] == 7) {
                func_8023DF7C(D_80075568, D_80075518, -1, 10, 0x28, 0);
            } else if (arg0 == 1 && D_8002DBD0[1] == 7) {
                func_8023DF7C(D_80075568, D_80075518, -1, 10, 0x28, arg0);
            } else {
                func_80246F50(7, arg0);
            }
            return;
        }
    }
}
