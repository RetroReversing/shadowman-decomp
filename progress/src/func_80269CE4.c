void func_80268AC0(int a, int b);
extern s32 D_80075AA4;
extern s32 D_80075B3C;
extern u8 D_8007DB84;

void func_80269CE4(void) {
    if (D_80075B3C > 0) {
        func_80268AC0(1, 0);
    } else {
        func_80268AC0(1, D_8007DB84);
    }
    if (D_80075AA4 > 0) {
        func_80268AC0(2, 0);
    } else {
        func_80268AC0(2, 1);
    }
    D_80075B3C = 0;
    D_80075AA4 = 0;
}
