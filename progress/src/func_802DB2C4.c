extern char D_8007DB78[];
extern char D_2D7100[];

s32 func_802DB2C4(s32 arg0) {
    u32 i = 0;
    char *p;
    char *base;
    s32 off;
    char *q;
    arg0 &= 0xFFFF;
    base = D_2D7100;
    q = D_8007DB78;
    p = base;
    off = i;
    for (; i < 0xD; i++) {
        if (*(u16 *)p == arg0) {
            p += 0x1C;
            return *(s32 *)((u32)(q[0x8E] * 4 + off) + (u32)base + 4);
        }
        p += 0x1C;
        off += 0x1C;
    }
}
