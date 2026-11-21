extern s32 func_8024319C(void);
extern u16 D_80075534;

s32 func_80243300(void) {
    s32 r = 0;
    if (func_8024319C() == 1) {
        if (D_80075534 & 0x400) r = 1;
    }
    return r;
}
