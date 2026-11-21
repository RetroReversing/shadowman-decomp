extern u8 *D_8002D2B0;

s32 func_80232D6C(s32 arg0) {
    if (D_8002D2B0 == 0) {
        return 1;
    }
    return D_8002D2B0[arg0 >> 3] & (1 << (arg0 & 7));
}
