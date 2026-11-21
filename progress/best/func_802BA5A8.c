/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802C8D44();                            /* extern */
s32 func_802C8D78();                            /* extern */
extern s32 D_80030C74;
extern s32 D_80030E34;
extern s32 D_80030E3C;

void func_802BA5A8(void) {
    D_80030C74 = 2;
    func_802C8D44();
    D_80030E34 = D_80030E3C;
    func_802C8D78();
}
