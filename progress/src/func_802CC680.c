s32 func_8023DF7C();
s32 func_802654E8();
extern f32 D_800754F0;
extern char D_80075518[];
extern char D_80075568[];
extern s32 D_800755F8;

void func_802CC680(void) {
    if ((D_800755F8 != 0) && (D_800754F0 > *(f32 *)0x218714)) {
        func_8023DF7C(D_80075568, D_80075518, 0x28, 0xA, 0x1E, 2);
    }
    if (func_802654E8() == 0) {
        func_8023DF7C(D_80075568, D_80075518, 0x30, 0xA, 0x46, 2);
    }
}
