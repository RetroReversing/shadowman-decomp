/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023C450();                            /* extern */
s32 func_8025F250();                            /* extern */
s32 func_8025F550();                            /* extern */
extern s32 D_25EB34;
extern s32 D_25FB40;
extern s8 D_8002C1BC;
extern s32 D_8002D424;
extern s32 *D_80052778;
extern s32 *D_80074C44;

void func_8025F1E8(void) {
    func_8023C450();
    func_8025F250();
    func_8025F550();
    if (D_8002D424 & 0x2000) {
        D_8002C1BC = 1;
        D_80074C44 = &D_25EB34;
        D_80052778 = &D_25FB40;
    }
}
