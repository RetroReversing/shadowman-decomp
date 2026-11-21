struct B { u8 pad[0x2C]; s16 v; u8 pad2[0xA]; };
struct C { u8 pad[8]; s16 *p; };
struct G { u8 pad0[4]; s16 idx; u8 pad6[0x10]; s16 f16; u8 pad18[0x18]; struct B *b; struct C *c; };
extern struct G D_80075518;
extern struct { s32 a; s32 b; } D_80052770;
extern s32 D_8006A504;

s32 func_802C4308(void) {
    s16 *p = D_80075518.c[D_80075518.b[D_80075518.idx].v].p;
    if (p == NULL) {
        return 1;
    }
    return *p < D_80075518.f16 + D_80052770.b * (D_8006A504 + 5);
}
