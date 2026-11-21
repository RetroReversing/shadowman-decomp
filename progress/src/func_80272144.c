extern char *D_8007AFF8;
void func_80270090(u8 arg0);

s32 func_80272144(f32 arg0, u8 arg1) {
    f32 v = *(f32 *)(D_8007AFF8 + 0x80);
    s32 r = 0;
    if (v < arg0 * arg0 && 0.0f < v) {
        func_80270090(arg1);
        r = 1;
    }
    return r;
}
