typedef struct { char pad0[0x3C]; f32 m0; char pad[0xCC-0x40]; f32 sx; f32 sy; char padD4[0xE0-0xD4]; f32 ox; f32 oy; } Cam;
extern Cam *D_8005EA2C;

s32 func_8025DBE4(f32 *arg0, f32 *arg1) {
    Cam *c = D_8005EA2C;
    f32 *m;
    f32 x = arg0[0];
    f32 y = arg0[1];
    f32 z = arg0[2];
    f32 w, a, b, d;
    s32 r;
    m = (f32 *)((char *)c + 0x3C);
    a = x * c->m0 + y * m[1] + z * m[2] + m[9];
    b = x * m[3] + y * m[4] + z * m[5] + m[10];
    d = x * m[6] + y * m[7] + z * m[8] + m[11];
    w = *(const f32 *)0x20A1C8 / d;
    arg1[0] = a * c->sx * w + c->ox;
    r = 0;
    arg1[1] = -b * c->sy * w + c->oy;
    arg1[2] = w;
    if (!(w < 0.0f)) {
        r = 1;
    }
    return r;
}
