typedef struct { char pad[0xB]; s8 f; char pad2[0x60]; } E6C;
extern E6C D_00212078[];
extern char *D_8007AFF8;

u16 func_80276148(void) {
    u16 v = D_00212078[*(u8 *)(D_8007AFF8 + 0x40)].f;
    if (v >= 100) {
        v = 99;
    }
    v = v / 10;
    return v;
}
