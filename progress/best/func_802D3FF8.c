typedef struct { s32 x[6]; } E;
extern struct { E tbl[2]; u8 pad0[0x1F4 - 0x30]; f32 a, b, c; u8 pad1[0x0C]; f32 d, e, f; } D_8007BF58;
extern s32 D_80030C74;

char *func_802D3FF8(char *arg0) {
    f32 *p = (f32 *)&D_8007BF58.tbl[((s32 *)arg0)[1]];
    D_8007BF58.a = p[2];
    D_8007BF58.b = p[3];
    D_8007BF58.c = p[4];
    D_8007BF58.d = p[5];
    D_8007BF58.e = p[6];
    D_80030C74 = 2;
    D_8007BF58.f = p[7];
    return arg0 + 8;
}
