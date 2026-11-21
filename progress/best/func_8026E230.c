extern unsigned char D_80075F68[];

s32 func_8026E230(s32 arg0) {
    s32 idx = arg0;
    s32 mask;
    if (arg0 < 0) {
        idx = arg0 + 7;
    }
    idx >>= 3;
    mask = 1 << (arg0 - idx * 8);
    return D_80075F68[idx & 0xFF] & mask;
}
