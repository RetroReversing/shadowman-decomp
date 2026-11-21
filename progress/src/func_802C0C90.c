extern s16 D_80075F5A;
extern s32 D_8002DBD0[];
extern s16 D_80075F58[];
s32 func_80246F50();
s32 func_8025FE34();
s32 func_802C074C();

void func_802C0C90(s32 arg0, s32 arg1) {
    s32 *a;
    s16 *b;
    s32 t2, t3;
    if (arg1 != 1 || D_80075F5A != 0) {
        a = D_8002DBD0;
        t2 = a[5];
        if (t2 == -1) {
            b = D_80075F58;
            if (func_8025FE34(b[5]) != 0) {
                func_80246F50(b[5], 1);
                func_802C074C(b[5], 1, 0x50);
            }
            t3 = a[5];
            if (t3 == t2 && arg0 != 0 && a[1] != 7 && b[4] != 7) {
                func_80246F50(7, 1);
                func_802C074C(7, 1, 0x50);
                if (b[4] == 7) {
                    b[4] = t3;
                }
            }
        }
    }
}
