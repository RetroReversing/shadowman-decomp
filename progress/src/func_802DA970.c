extern void func_8022DAF0(u16);
extern char D_2D7DD0[];
extern u16 D_80000322;
extern s8 D_8002C1BC;
extern void *D_80052778;
extern s32 D_80059818;

void func_802DA970(void) {
    s32 i;

    if (D_80059818 != D_80000322) {
        func_8022DAF0(D_80000322);
        i = 0x989680;
        while (i--) {
        }
    }
    D_8002C1BC = 1;
    D_80052778 = D_2D7DD0;
}
