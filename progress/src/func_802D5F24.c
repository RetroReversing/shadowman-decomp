s32 func_80104E4C(s32, s32, s32);
s32 func_80104EB0(s32);
s32 func_80104EC4(s32 *, s32, s32, s32);

s32 func_802D5F24(s32 arg0, s32 arg1) {
    s32 sp10;

    while (1) {
        func_80104EC4(&sp10, 4, 1, arg0);
        if (func_80104EB0(arg0) != 0) {
            return 0;
        }
        func_80104E4C(arg0, -3, 1);
        if (sp10 == arg1) {
            break;
        }
    }
    func_80104E4C(arg0, 3, 1);
    return 1;
}
