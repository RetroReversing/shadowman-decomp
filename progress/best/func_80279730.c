extern char *D_8007AFF8;
extern u32 func_80113AD0(void);
extern void func_80239A3C(f32 a, int b, int c, int d, f32 e, f32 f, int g, int h, int i, f32 j, int k);
extern f32 D_002143D0, D_002143D4, D_002143D8, D_002143DC;

void func_80279730(void) {
    s32 r;
    if (D_8007AFF8[0x3B] != 0) {
        u16 t = *(u16 *)(D_8007AFF8 + 0x9C) - 1;
        *(u16 *)(D_8007AFF8 + 0x9C) = t;
        if ((s16)t <= 0) {
            r = func_80113AD0();
            *(u16 *)(D_8007AFF8 + 0x9C) = (r % 255) + 0x7F;
            func_80239A3C(*(f32 *)0x2143DC, 0, 0, 0, *(f32 *)0x2143D0, *(f32 *)0x2143D4, 0, 0, 0, *(f32 *)0x2143D8, 0);
        }
    }
}
