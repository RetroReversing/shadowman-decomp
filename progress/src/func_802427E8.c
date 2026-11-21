typedef struct { u32 w0; u32 w1; } Gfx;
extern s32 D_8002C0F0;
extern u8 D_8002C1BD;
extern Gfx *D_8005387C;
extern Gfx *D_80056998;
extern s32 D_8006A9AC;
extern u8 D_8007DB98;

void func_802427E8(void) {
    Gfx *p; Gfx *q; Gfx *r; Gfx *s; Gfx *t; Gfx *u;
    if ((D_8002C1BD == 0) && !(D_8006A9AC & 1) && (D_8002C0F0 & 0x40) && (D_8007DB98 == 0)) {
        D_8002C1BD = 1;
        p = D_80056998++; p->w0 = 0xE7000000; p->w1 = 0;
        q = D_80056998++; q->w0 = 0xE3000A01; q->w1 = 0;
        r = D_80056998++; r->w0 = 0xE200001C; r->w1 = 0x504A50;
        s = D_8005387C++; s->w0 = 0xFC127FFF; s->w1 = -0xDC8;
        t = D_80056998++; t->w0 = 0xD9FEFFFF; t->w1 = 0;
        u = D_80056998++; u->w0 = 0xE7000000; u->w1 = 0;
    }
}
