s32 func_802456B4(s32 arg0, s32 arg1) {
    s32 t, t2, v;
    if (arg0 < 0) {
        do { arg0 += 360; } while (arg0 < 0);
    }
    arg0 = arg0 % 360;
    if (arg1 < 0) {
        do { arg1 += 360; } while (arg1 < 0);
    }
    arg1 = arg1 % 360;
    t = arg0 - arg1;
    v = t;
    if (t < 0) v = -v;
    t2 = v - 360;
    if (v >= 181) {
        v = t2;
        if (t2 < 0) v = -v;
    }
    return v;
}
