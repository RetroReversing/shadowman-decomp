extern s32 D_8005901C, D_80046380, D_8007DC30, D_8007E03C, D_8007E050, D_8007E058, D_8007E074;
s32 func_80116D80(void *, s32 *, s32);
s32 func_80116EB0(void *, void *, s32);
s32 func_802295C0(s32, s32);
u32 func_802D9EC4(s32);

void func_802D8510(s32 arg0) {
    s32 sp10;
    s32 v;

    func_80116EB0(&D_8005901C, &D_80046380, 1);
    func_80116D80(&D_8007DC30, &sp10, 1);
    switch (func_802D9EC4(sp10)) {
    case 2:
        v = D_8007E03C;
        break;
    case 3:
        v = D_8007E050;
        break;
    case 4:
    case 6:
        v = D_8007E058;
        break;
    default:
        v = D_8007E074;
        break;
    }
    func_802295C0(arg0, v);
}
