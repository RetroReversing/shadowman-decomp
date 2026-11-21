s32 func_8026E2F4(s32);
extern s32 D_8002D4AC;

void func_80242FD8(void) {
    D_8002D4AC = 0;
    if (func_8026E2F4(0x99)) {
        D_8002D4AC = 5;
    } else if (func_8026E2F4(0x98)) {
        D_8002D4AC = 4;
    } else if (func_8026E2F4(0x97)) {
        D_8002D4AC = 3;
    } else if (func_8026E2F4(0x96)) {
        D_8002D4AC = 2;
    } else if (func_8026E2F4(0x95)) {
        D_8002D4AC = 1;
    }
}
