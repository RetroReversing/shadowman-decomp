typedef struct { u32 w0; u32 w1; } Gfx;
extern s32 D_8002C0F0;
extern u8 D_8002C1BD;
extern Gfx *D_80056998;
extern s32 D_8006A9AC;
extern u8 D_8007DB98;

#define PUSH(a, b) { Gfx *g = D_80056998++; g->w0 = (a); g->w1 = (b); }

void func_802428D8(void) {
    if (D_8002C1BD != 0 && !(D_8006A9AC & 1) && (D_8002C0F0 & 0x40) && D_8007DB98 == 0) {
        D_8002C1BD = 0;
        PUSH(0xE7000000, 0);
        PUSH(0xE3000A01, 0);
        PUSH(0xE200001C, 0x504A50);
        PUSH(0xFC121824, 0xFF33FFFF);
        PUSH(0xD9FEFFFF, 0);
        PUSH(0xE7000000, 0);
    }
}
