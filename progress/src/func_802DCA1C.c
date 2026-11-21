s32 func_80114D60(s32, s32, u16, s32 *);
s32 func_802DEC54(s32 *, s32);
s32 func_802DED94(void *);

s32 func_802DCA1C(void *arg0, u8 arg1, u16 *arg2, s8 arg3) {
    s32 sp10[8];
    s32 i;
    s32 r;

    *(s8 *)((char *)arg0 + 0x65) = arg3;
    r = func_802DED94(arg0);
    if (r != 0) {
        return r;
    }
    for (i = 0; i < 8; i++) {
        r = func_80114D60(*(s32 *)((char *)arg0 + 4), *(s32 *)((char *)arg0 + 8), ((arg1 & 0xFF) * 8) + i, sp10);
        if (r != 0) {
            *(s8 *)((char *)arg0 + 0x65) = 0;
            func_802DED94(arg0);
            return r;
        }
        *arg2 += func_802DEC54(sp10, 0x20);
    }
    *(s8 *)((char *)arg0 + 0x65) = 0;
    return func_802DED94(arg0);
}
