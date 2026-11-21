typedef struct { u32 w0; u32 w1; } Gfx;
extern Gfx *D_80056998;
void func_80220B14();
void func_80220A84();
void func_802DB808();

void func_802DA9F0(s32 arg0) {
    Gfx *g;
    func_80220B14();
    func_80220A84();
    if ((arg0 & 0xFF) == 0) {
        arg0 = 0xFF;
    }
    g = D_80056998++;
    g->w0 = 0xE7000000;
    g->w1 = 0;
    g = D_80056998++;
    g->w0 = 0xE3000C00;
    g->w1 = 0x80000;
    g = D_80056998++;
    g->w0 = 0xFC121824;
    g->w1 = 0xFF33FFFF;
    func_802DB808((u8)arg0, g);
}
