extern u8 D_80075F68[];

void func_8026E1F0(s32 arg0) {
    s32 idx = arg0 / 8;
    s32 bit = arg0 - idx * 8;
    u8 m = 1 << bit;
    D_80075F68[idx & 0xFF] |= m;
}
