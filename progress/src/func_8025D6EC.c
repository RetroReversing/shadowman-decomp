extern s32 D_800305B4;
extern s32 D_80052768;
extern s32 D_8005276C;
extern s32 D_80052774;
extern f32 D_80074BC0;
extern s32 D_80074BF4;
void func_8025CF80(void);
void func_80262ED8(void);
void func_8025CE84(void);
void func_8025D2AC(void);
void func_8025D4C4(void);
void func_8025D7FC(void);
void func_8022F084(void);

void func_8025D6EC(void) {
    if (D_80052774 != 0) {
        D_8005276C += 1;
    }
    D_80052768 += D_80052774;
    if (D_800305B4 != 0) {
        D_80052774 = 1;
        D_80074BC0 = *(f32 *)0x20A1A4;
    }
    D_80074BF4 = 1;
    func_8025CF80();
    func_80262ED8();
    func_8025CE84();
    D_80074BF4 = 2;
    func_8025D2AC();
    func_8025D4C4();
    func_8025D7FC();
    func_8022F084();
}
