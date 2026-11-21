f32 func_8025D960(f32 *v) {
    f32 t[3];
    f32 sq;
    f32 len;
    f32 a;

    t[0] = v[0];
    t[1] = v[1];
    t[2] = v[2];
    sq = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    a = *(f32 *)0x20A1B0;
    if (sq != 0.0f) {
        a = sq;
    }
    if (sqrtf(a) != 0.0f) {
        a = *(f32 *)0x20A1B4;
        if (sq != 0.0f) {
            a = sq;
        }
        len = sqrtf(a);
    } else {
        len = *(f32 *)0x20A1B8;
    }
    if (len != 0.0f) {
        v[0] = t[0] / len;
        v[1] = t[1] / len;
        v[2] = t[2] / len;
    } else {
        v[0] = 0.0f;
        v[1] = 0.0f;
        v[2] = 0.0f;
    }
    return len;
}
