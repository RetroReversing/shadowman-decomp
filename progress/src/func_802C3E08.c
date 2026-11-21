extern s32 D_80074BB0;
s32 func_8026E2F4(s32);
s32 func_802C3E08(void) {
    switch (D_80074BB0) {
    case 0xC:
        return func_8026E2F4(0x63);
    case 0xE:
        return func_8026E2F4(0x64);
    }
    return 1;
}
