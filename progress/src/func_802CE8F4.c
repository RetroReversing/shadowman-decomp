s32 func_80108B30();
s32 func_80109DB4();
s32 func_8011BA20();
s32 func_8023DF7C();
s32 func_80268AF8();
s32 func_802A3588();
extern s32 D_8002D420;
extern u8 D_80030E58;
extern char D_80030EB4[];
extern s32 D_800752D0;
extern char D_80075518[];
extern s16 D_8007552C;
extern char D_80075568[];
extern u8 D_8007DB81;

void func_802CE8F4(void) {
    char sp18[0x10];

    if (!(D_8002D420 & 0x200) || ((func_80268AF8(9) == 0) && (D_8007552C >= 0x29) && (D_8007DB81 == 0))) {
        func_8011BA20(sp18, 0, 0xC);
        if ((D_800752D0 == 0) && (D_80030E58 != 0)) {
            D_80030E58 = 0;
            func_802A3588(sp18, D_80030EB4, 0xD);
        }
        if ((func_80268AF8(9) == 0) && (func_80108B30() == 0)) {
            func_80109DB4(1);
        }
        func_8023DF7C(D_80075568, D_80075518, 0xF3, 0xA, 0x46, 1);
    }
}
