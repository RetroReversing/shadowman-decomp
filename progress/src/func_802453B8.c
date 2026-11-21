extern s32 func_80245684();
extern void func_8026E26C(s32);
extern void func_802422FC(void);
extern void func_80266E0C(s32, void *);
extern char D_25B474[];
extern s16 D_8006A9D4;
extern s32 D_80074BB0;

s32 func_802453B8(s32 *arg0) {
    if (arg0[2] == 1 && func_80245684() != 0) {
        D_8006A9D4 = 0;
        switch (D_80074BB0) {
        case 0xC:
            func_8026E26C(0x63);
            func_802422FC();
            break;
        case 0xE:
            func_8026E26C(0x64);
            func_802422FC();
            break;
        }
        func_80266E0C(0x10000, D_25B474);
        arg0[2] = 2;
    }
    return 1;
}
