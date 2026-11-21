typedef struct { u8 pad[0x2F0]; f32 f2F0, f2F4, f2F8, f2FC, f300, f304, f308, f30C, f310, f314, f318, f31C, f320, f324, f328; u8 pad2[0x10]; f32 f33C; u8 pad3[0x48]; u8 f388; } G;
extern G D_8007BF58;
extern f32 D_8007C898[3];
extern f32 D_8007C860;

f32 *func_802D4F38(f32 *a) {
    G *g = &D_8007BF58;
    f32 x, y, z, w;
    if (g->f388) {
        g->f2FC = g->f314;
        g->f300 = g->f318;
        g->f304 = g->f31C;
        g->f2F0 = g->f308;
        g->f2F4 = g->f30C;
        g->f2F8 = g->f310;
    }
    x = a[1]; g->f308 = x;
    y = a[2]; g->f30C = y;
    z = a[3]; g->f310 = z;
    w = a[4] + a[4];
    g->f33C = w;
    D_8007C898[0] = a[1];
    D_8007C898[1] = a[2];
    D_8007C898[2] = a[3];
    D_8007C860 = a[4];
    g->f320 = (x - g->f2F0) / w;
    g->f324 = (y - g->f2F4) / w;
    g->f328 = (z - g->f2F8) / w;
    return a + 5;
}
