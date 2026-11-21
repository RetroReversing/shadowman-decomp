typedef struct { char pad0[0x14]; s32 f14; char pad18[0x18]; s32 f30; s32 f34; char pad38[0x2C]; s32 f64; } S8026;
extern S8026 D_80075AA8;
extern s32 D_80075AD8;
void func_8026974C(s32);

s32 func_8026A4B4(s32 a0) {
    S8026 *s = &D_80075AA8;
    if (s->f64 != 0 || !(s->f14 & 0x10)) {
        s->f30 = 1;
        s->f64 = 0;
        s->f34 = 0xB4;
        if (s->f14 & 0x10) goto l;
    } else {
l:
        D_80075AA8.f34 = D_80075AA8.f34 - 1;
        if (D_80075AA8.f34 < 0) D_80075AA8.f30 = 0;
    }
    if (D_80075AD8 == 1) func_8026974C(a0);
    return 1;
}
