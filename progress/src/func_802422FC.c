extern char *D_8005E90C;
extern s8 D_8006A7C2;
extern s8 D_8006A8C5;

void func_802422FC(void) {
    (*(u8 *)&D_8006A8C5) = 0xA6;
    (*(u8 *)&D_8006A7C2) = 1;
    *(s32 *)(D_8005E90C + 0xA60) |= 0x800000;
}
