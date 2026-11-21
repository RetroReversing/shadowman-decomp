extern char D_21DCC4[];
extern char D_8004AE00[];
extern s32 *func_80236594();
s32 func_8021DD0C(s32 arg0, s16 arg1) {
    if (arg1 == -1) {
        return 0;
    } else {
        s32 *p = func_80236594(D_8004AE00, arg1, D_21DCC4);
        return p[2];
    }
}
