/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802D3A80(void);              /* extern */
extern u8 D_800311A0[];
extern s32 D_80074BB0;
extern u8 D_80075F21;
extern s32 D_8007DB78;

void func_8026EC98(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if ((*(u8 *)((char *)(&D_8007DB78) + 0x8C)) == 3) {
        var_a0 = D_80074BB0;
        D_80075F21 = (*(u8 *)((char *)(((var_a0 * 3) + D_800311A0)) + 2));
        (*(u8 *)((char *)(&D_8007DB78) + 0x8C)) = 2U;
    }
    if ((*(u8 *)((char *)(&D_8007DB78) + 6)) == 0) {
        func_802D3A80();
    }
}
