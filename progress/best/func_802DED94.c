typedef struct { s32 f0; s32 f4; s32 f8; char pad[0x59]; u8 f65; } A;
s32 func_80115120(s32, s32, s32, u8 *, s32);

void func_802DED94(A *arg0) {
    u8 buf[32];
    s32 i;

    for (i = 0; i < 32; i++) {
        buf[i] = arg0->f65;
    }
    func_80115120(arg0->f4, arg0->f8, 0x400, buf, 0);
}
