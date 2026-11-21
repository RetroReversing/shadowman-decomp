typedef struct { u8 pad[0xC]; s8 val; u8 rest[0x5F]; } Rec;
extern Rec D_212078[];
extern struct { u8 pad[0x40]; u8 idx; } *D_8007AFF8;

u16 func_80273800(void) {
    u16 v = D_212078[D_8007AFF8->idx].val;
    if (v >= 100) {
        v = 99;
    }
    v = v / 10;
    return v;
}
