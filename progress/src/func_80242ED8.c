extern s32 func_8026E2F4(s32);
extern s32 D_8002D4A4;

void func_80242ED8(void) {
    D_8002D4A4 = 0;
    if (func_8026E2F4(0x84)) {
        D_8002D4A4 = 6;
    } else if (func_8026E2F4(0x85)) {
        D_8002D4A4 = 5;
    } else if (func_8026E2F4(0x86)) {
        D_8002D4A4 = 4;
    } else if (func_8026E2F4(0x87)) {
        D_8002D4A4 = 3;
    } else if (func_8026E2F4(0x88)) {
        D_8002D4A4 = 2;
    } else if (func_8026E2F4(0x89)) {
        D_8002D4A4 = 1;
    }
}
