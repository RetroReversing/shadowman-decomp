s32 func_80241114();
s32 func_80241120();

s32 func_80241070(u8 *arg0, f32 *arg1, f32 arg2) {
    f32 d[3];
    f32 e[2];
    f32 t;
    s16 *p;

    t = (f32)*(u16 *)(arg0 + 0x10) + arg2;
    t = t * t;
    p = (s16 *)(arg0 + 0xA);
    d[0] = (f32)p[0] - arg1[0];
    d[1] = (f32)p[1] - arg1[1];
    d[2] = (f32)p[2] - arg1[2];
    e[0] = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (t < e[0]) {
        return 0;
    }
    return func_80241120(arg0, arg1);
}
