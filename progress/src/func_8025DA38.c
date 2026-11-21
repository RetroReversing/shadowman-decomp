extern float sqrtf(float);

f32 func_8025DA38(f32 arg0, f32 arg1, f32 arg2) {
    f32 t;
    f32 v;
    t = (arg0 * arg0) + (arg1 * arg1) + (arg2 * arg2);
    v = *(f32 *)0x20A1BC;
    if (t != 0.0f) {
        v = t;
    }
    if (sqrtf(v) != 0.0f) {
        v = *(f32 *)0x20A1C0;
        if (t != 0.0f) {
            v = t;
        }
        return sqrtf(v);
    }
    return *(f32 *)0x20A1C4;
}
