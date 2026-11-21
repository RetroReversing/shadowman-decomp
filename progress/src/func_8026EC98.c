s32 func_802D3A80(void);
extern u8 D_800311A0[];
extern s32 D_80074BB0;
extern u8 D_80075F21;
extern u8 D_8007DB78[];

void func_8026EC98(void) {
    u8 *p = D_8007DB78;
    if (p[0x8C] == 3) {
        D_80075F21 = D_800311A0[D_80074BB0 * 3 + 2];
        p[0x8C] = 2;
    }
    if (p[6] == 0) {
        func_802D3A80();
    }
}
