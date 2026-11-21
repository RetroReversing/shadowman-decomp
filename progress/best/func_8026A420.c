typedef struct { char pad0[0x14]; s32 f14; char pad18[0x8]; s32 f20; s32 f24; char pad28[0x30]; s32 f58; } S8026;
extern S8026 D_80075AA8;
extern s32 D_80075AC8;
void func_80269604(void);

s32 func_8026A420(void) {
    S8026 *s = &D_80075AA8;
    if (s->f58 != 0 || !(s->f14 & 4)) {
        s->f20 = 1;
        s->f58 = 0;
        s->f24 = 0xB4;
        if (s->f14 & 4) goto l;
    } else {
l:
        s = &D_80075AA8;
        s->f24 = s->f24 - 1;
        if (s->f24 < 0) s->f20 = 0;
    }
    if (D_80075AC8 == 1) func_80269604();
    return 1;
}
