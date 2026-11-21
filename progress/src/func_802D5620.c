s32 func_802D5620(u8 *arg0) {
    s32 n = 0;
    u8 c = *arg0;
    s32 t = c & 0xFF;
    s32 t2;
    if (t != 0 && t != 0xA) {
        while (1) {
            if (c == 0xD) break;
            arg0++;
            c = *arg0;
            t2 = c & 0xFF;
            n++;
            if (t2 == 0 || t2 == 0xA) break;
        }
    }
    return n;
}
