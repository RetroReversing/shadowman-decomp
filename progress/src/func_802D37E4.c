extern s32 D_8002D4A8;
s32 func_8026E2F4(s32);
s32 func_802D37E4(void) {
    if (D_8002D4A8 != 5) {
        return 0;
    }
    return func_8026E2F4(0x40) == 0;
}
