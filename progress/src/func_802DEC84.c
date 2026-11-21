s32 func_802DEC84(u16 *arg0, u16 *arg1, u16 *arg2) {
    u32 i = 0;
    u16 t;
    *arg2 = 0;
    *arg1 = 0;
    do {
        t = *(u16 *)((u8 *)arg0 + i);
        i += 2;
        *arg1 += t;
        *arg2 += ~t;
    } while (i < 0x1C);
    return 0;
}
