typedef struct { char pad[0x18]; u8 *buf; s32 pad2; s16 n; } T;
extern T *D_8005E9F0;
extern s32 D_8005E9FC;
s8 func_8023646C();

s32 func_802D166C(u8 *arg0) {
    s32 n;
    u32 i;
    s32 cnt;
    n = D_8005E9F0->n;
    D_8005E9F0->buf = arg0;
    cnt = (n + 7) / 8;
    for (i = 0; i < cnt; i++) {
        D_8005E9F0->buf[i] = func_8023646C(D_8005E9FC);
    }
    arg0 += cnt;
    return (s32)arg0;
}
