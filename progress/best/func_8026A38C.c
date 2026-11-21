typedef struct { char pad0[0x14]; s32 f14; char pad18[0x10]; s32 f28; s32 f2c; char pad30[0x2C]; s32 f5c; } S8026;
extern S8026 D_80075AA8;
extern s32 D_80075AD0;
s32 func_802694BC(void);

s32 func_8026A38C(void) {
    S8026 *s = &D_80075AA8;
    if (s->f5c != 0 || !(s->f14 & 8)) {
        s->f28 = 1;
        s->f5c = 0;
        s->f2c = 0xB4;
        if (s->f14 & 8) goto l;
    } else {
l:
        s = &D_80075AA8;
        s->f2c = s->f2c - 1;
        if (s->f2c < 0) s->f28 = 0;
    }
    if (D_80075AD0 == 1) func_802694BC();
    return 1;
}
