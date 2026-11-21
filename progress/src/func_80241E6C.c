extern char D_8006A710[];
extern char D_8006A820[];

void func_80241E6C(void) {
    s32 i;
    for (i = 0; i < 0x100; i++) {
        D_8006A820[i] = i;
        D_8006A710[i + 0xC] = 2;
    }
}
