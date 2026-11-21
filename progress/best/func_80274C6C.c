extern s32 D_800311FC;
extern s32 D_80031200;
extern s16 func_802922C0(s16);

s16 func_80274C6C(s16 arg0, s16 arg1) {
    if (D_800311FC != arg1) {
        if (D_80031200 == -1) {
            D_80031200 = arg1;
        }
        return -1;
    }
    if (arg0 < 0) {
        return -1;
    }
    return func_802922C0(arg0);
}
