/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_80052774;
s32 func_8022F084();
s32 func_8025CE84();
s32 func_8025CF80();
s32 func_8025D2AC();
s32 func_8025D4C4();
s32 func_8025D7FC();
s32 func_80262ED8();
extern s32 D_800305B4;
extern s32 D_80052768;
extern s32 D_8005276C;
extern char D_80052770[];
extern f32 D_80074BC0;
extern s32 D_80074BF4;

void func_8025D6EC(void) {
    s32 *__base_D_80074BF4;
    register s32 *__base_D_80052768;
    if (D_80052774 != 0) {
        D_8005276C += 1;
    }
    __base_D_80052768 = &D_80052768;
    (*__base_D_80052768) += D_80052774;
    if (D_800305B4 != 0) {
        D_80052774 = 1;
        D_80074BC0 = *(f32 *)0x20A1A4;
    }
    (*__base_D_80074BF4) = 1;
    __base_D_80074BF4 = &D_80074BF4;
    do { func_8025CF80(__base_D_80052768, D_80052774, D_80052770 + 4); } while (0);
    func_80262ED8();
    func_8025CE84();
    (*__base_D_80074BF4) = 2;
    func_8025D2AC();
    func_8025D4C4();
    func_8025D7FC();
    func_8022F084();
}
