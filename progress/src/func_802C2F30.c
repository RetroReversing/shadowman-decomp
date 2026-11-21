extern s32 D_8002D420;
extern s16 D_80075518[];
extern s32 D_80075568[];
void func_8023DF7C(void *, void *, s32, s32, s32, s32);

void func_802C2F30(void) {
    if (D_8002D420 & 0x40) {
        if (D_80075518[2] == 1) {
            func_8023DF7C(D_80075568, D_80075518, 0xB, 0xA, 0, 2);
        } else if (D_80075518[2] == 0) {
            func_8023DF7C(D_80075568, D_80075518, 0xA, 0xA, 0, 2);
        } else if (D_80075518[2] == 4) {
            func_8023DF7C(D_80075568, D_80075518, 0x72, 0xA, 0x1E, 2);
        } else {
            func_8023DF7C(D_80075568, D_80075518, 0xA, 0xA, 0xA, 2);
        }
    }
}
