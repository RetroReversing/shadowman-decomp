extern s32 func_8026E2F4(s32);
extern s8 D_800311A0[];
extern s32 D_80074BB0;

s32 func_8026E9E0(void) {
    if (D_800311A0[D_80074BB0 * 3 + 1] == 1 && D_80074BB0 == 0 && func_8026E2F4(0xA) != 0) {
        return 1;
    }
    return 0;
}
