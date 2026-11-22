extern u8 D_8007E680[];
s32 func_80115800(s32, void *);
s32 func_802DCF28(s32);
s32 func_802DCFB4(s32, void *);
s32 func_80116D80(s32, void *, s32);

s32 func_802DCE50(s32 arg0, s32 arg1) {
    u8 sp10[8];
    u8 sp18[8];
    s32 temp_s0;

    func_802DCF28(arg1);
    func_80115800(1, D_8007E680);
    func_80116D80(arg0, sp18, 1);
    temp_s0 = func_80115800(0, D_8007E680);
    func_80116D80(arg0, sp18, 1);
    func_802DCFB4(arg1, sp10);
    if ((sp10[2] & 1) && (sp10[2] & 2)) {
        return 2;
    }
    if ((*(u16 *)&sp10[2] & 0x1FF) != 0x100) {
        return 1;
    }
    if (sp10[2] & 4) {
        return 4;
    }
    return temp_s0;
}
