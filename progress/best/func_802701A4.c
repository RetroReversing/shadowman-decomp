f32 func_802701A4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 r = arg6 * arg6;
    f32 dx = arg0 - arg3;
    f32 dy = arg1 - arg4;
    f32 dz = arg2 - arg5;
    f32 d = dx * dx + dy * dy + dz * dz;
    if (!(d < r)) {
        d = *(f32 *)0x213F44;
    }
    return d;
}
