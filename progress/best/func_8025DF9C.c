/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8022F084();                            /* extern */
s32 func_8023C450();                            /* extern */
s32 func_8025E00C();                            /* extern */
s32 func_8025E214();                            /* extern */
extern s32 D_25D6EC;
extern s32 D_25E928;
extern s8 D_8002C1BC;
extern s32 D_8002D424;
extern s32 *D_80052778;
extern s32 *D_80074C44;

void func_8025DF9C(void) {
    func_8023C450();
    func_8022F084();
    func_8025E00C();
    func_8025E214();
    if (D_8002D424 & 0x2000) {
        D_8002C1BC = 1;
        D_80074C44 = &D_25D6EC;
        D_80052778 = &D_25E928;
    }
}
