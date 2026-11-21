extern s32 D_8002D4AC;
s32 func_8026E2F4(s32);
s32 func_802D383C(void) {
    if (D_8002D4AC != 5) {
        return 0;
    }
    return func_8026E2F4(0x42) == 0;
}
