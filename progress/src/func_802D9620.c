extern s32 D_8007E078;
void func_802295E8();
void func_80229588();

void func_802D9620(s32 a0) {
    s32 x = D_8007E078;
    if (x != 0) {
        func_802295E8(a0, x);
    } else {
        func_80229588();
    }
}
