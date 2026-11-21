extern char D_2181EC[];
extern s32 D_8002D420;
extern s32 D_8002D424;
extern s32 D_800458F0;
extern s32 D_80045C40;
void func_802BE3D8(void);
void func_802BFE08(void);
void func_802D0850(char *, ...);

void func_802C0674(s16 *arg0) {
    s32 a, b;
    switch (arg0[0xB]) {
    case 0:
        func_802D0850(D_2181EC);
        func_802BFE08();
        arg0[0xB] = 2;
        break;
    case 1:
        a = D_8002D420;
        b = D_8002D424;
        if (D_800458F0 != 0) {
            D_8002D420 = D_80045C40;
        } else {
            D_8002D420 = 0;
        }
        D_8002D424 = 0;
        func_802BE3D8();
        D_8002D420 = a;
        D_8002D424 = b;
        break;
    case 2:
        func_802BE3D8();
        break;
    }
}
