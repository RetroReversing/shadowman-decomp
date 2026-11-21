extern s32 D_80075F30[];

s32 func_8026E2F4(s32 arg0) {
    s32 t = arg0 / 32;
    s32 *p = &D_80075F30[t];
    return *p & (1 << (arg0 - t * 32));
}
