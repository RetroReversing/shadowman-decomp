typedef struct { char pad[0x2C]; u16 s2C; char pad2[0xE]; u8 b3B; char pad3[4]; s32 f44; char pad4[0x28]; f32 x70, x74, x78; char pad5[0x1C-0x14+0x0]; } X;
typedef struct { char pad[0x24]; f32 a, b, c; } Y;
typedef struct { char pad[0x1C]; f32 v; } Z;
extern f32 func_80272260();
extern void func_802776D8(u8);
extern void func_802712B0(f32, f32);
extern void func_80270E0C(f32);
extern Z *D_8006A4FC;
extern Y D_80075568;
extern char *D_8007AFF8;

void func_802754B0(void) {
    f32 t = func_80272260();
    if (t < *(f32 *)0x214260 || *(f32 *)0x214264 < t) {
        char *p = D_8007AFF8;
        *(s32 *)(p + 0x44) |= 0x40;
        *(f32 *)(p + 0x70) = D_80075568.a;
        *(f32 *)(p + 0x74) = D_80075568.b;
        *(f32 *)(p + 0x78) = D_80075568.c;
        func_802776D8(*(u8 *)(p + 0x3B));
        func_802712B0(D_8006A4FC->v, (f32)*(u16 *)(D_8007AFF8 + 0x2C));
        func_80270E0C((f32)*(s8 *)(D_8007AFF8 + 0x5C));
    }
}
