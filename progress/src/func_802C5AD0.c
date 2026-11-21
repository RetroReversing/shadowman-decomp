s32 func_802C4308();
void func_8023DF7C(void *, void *, s32, s32, s32, s32);
void func_802C5290();
void func_802C651C();
extern s32 D_8002D420;
extern u8 D_80075518[];
extern u8 D_80075568[];

void func_802C5AD0(void) {
    if (func_802C4308() != 0 && !(D_8002D420 & 2)) {
        func_8023DF7C(D_80075568, D_80075518, 0x35, 0xA, 0x1E, 2);
    } else {
        func_802C5290();
        func_802C651C();
    }
}
