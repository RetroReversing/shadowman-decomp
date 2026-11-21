extern u8 D_21AB8C[];
extern u8 D_80045C3C;
extern u8 D_80075F20[2];
extern u8 D_8007C320;

void func_802D3CC4(void) {
    u8 i;
    if (D_8007C320 != 0) {
        D_80075F20[0] = 4;
        D_80075F20[1] = 0x18;
        D_8007C320 = 0;
        return;
    }
    i = D_80045C3C;
    D_80045C3C = i + 1;
    D_80075F20[0] = D_21AB8C[i * 4 + 1];
    D_80075F20[1] = D_21AB8C[i * 4 + 3];
    if (*(s16 *)&D_21AB8C[D_80045C3C * 4] < 0) {
        D_80045C3C = 0;
    }
}
