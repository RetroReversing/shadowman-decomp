s32 func_802D5620(u8 *);
s32 func_80226F54(s32);

u32 func_802D5D18(u8 **arg0) {
    u8 *s2 = *arg0;
    u32 s0 = func_802D5620(s2);
    u8 *s1;

    if (s0 >= 0x3A) {
        s1 = (u8 *)((u32)s0 + (u32)s2);
        do {
            while (func_80226F54(*s1) != 0 && s0 != 0) {
                s1--;
                s0--;
            }
            while (func_80226F54(*s1) == 0 && s0 != 0) {
                s1--;
                s0--;
            }
        } while (s0 >= 0x3A);
    }
    while (func_80226F54(s2[s0]) != 0 && s0 < func_802D5620(s2)) {
        s0++;
    }
    return s0;
}
