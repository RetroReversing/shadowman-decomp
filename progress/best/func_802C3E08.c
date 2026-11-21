/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8026E2F4(s32);                     /* extern */
s32 func_802C3E4C();                            /* extern */
extern s32 D_80074BB0;

void func_802C3E08(void) {
    if (D_80074BB0 != 0xC) {
        if (D_80074BB0 != 0xE) {
            func_802C3E4C();
            return;
        }
        func_8026E2F4(0x64);
        return;
    }
    func_802C3E4C();
    func_8026E2F4(0x63);
}
