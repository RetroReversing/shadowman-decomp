extern u8 D_20B3DC[];
extern char D_20B3F0[];
extern struct { s32 a; void *b; s32 c[5]; } D_800309F0[];
extern u8 D_8007DC06;

void *func_8025FD6C(u32 arg0) {
    void *r;
    if (arg0 < 0x14U) {
        r = ((struct { s32 a; void *b; s32 c[5]; } *)((char *)D_800309F0 + D_8007DC06 * 4))[D_20B3DC[arg0]].b;
    } else {
        r = D_20B3F0;
    }
    return r;
}
