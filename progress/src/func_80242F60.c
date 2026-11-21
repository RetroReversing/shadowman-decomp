s32 func_8026E2F4(s32);
extern s32 D_8002D4A8;

void func_80242F60(void) {
    D_8002D4A8 = 0;
    if (func_8026E2F4(0x94)) {
        D_8002D4A8 = 5;
    } else if (func_8026E2F4(0x93)) {
        D_8002D4A8 = 4;
    } else if (func_8026E2F4(0x92)) {
        D_8002D4A8 = 3;
    } else if (func_8026E2F4(0x91)) {
        D_8002D4A8 = 2;
    } else if (func_8026E2F4(0x90)) {
        D_8002D4A8 = 1;
    }
}
