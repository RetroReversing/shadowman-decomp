typedef struct { u8 pad0[4]; s32 f4; s32 f8; u8 fC[0x20]; u8 pad2C[0x39]; u8 f65; } S;
s32 func_802DED94(S *);
s32 func_80114D60(s32, s32, s32, u8 *);

s32 func_802DECCC(S *a) {
    u8 buf[0x20];
    s32 r;
    s32 i;
    if (a->f65 != 0) {
        a->f65 = 0;
        r = func_802DED94(a);
        if (r != 0) return r;
    }
    r = func_80114D60(a->f4, a->f8, 1, buf);
    if (r != 0) {
        if (r != 2) return r;
        r = func_80114D60(a->f4, a->f8, 1, buf);
        if (r != 0) return r;
    }
    for (i = 0; i < 0x20; i++) {
        if (a->fC[i] != buf[i]) return 2;
    }
    return 0;
}
