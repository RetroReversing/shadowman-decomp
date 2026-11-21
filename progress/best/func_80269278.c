extern s32 func_80113AD0();
extern s32 D_8002C240;
extern char D_800756A0[];

void func_80269278(void) {
    s32 r = func_80113AD0();
    s32 v = (r % 128 + 0x80) << 8;
    *(s16 *)(D_800756A0 + (D_8002C240 << 9) + 0x3E) = (v & ~0x7FF) | 0x319;
}
