extern s32 func_80109A1C(s32);
extern s32 func_8023DF7C(void *, void *, s32, s32, s32, s32);
extern s32 func_8026B618(s32, s32);
extern s32 D_8002D420;
extern s32 D_80075500[];
extern u8 D_80075518[];
extern u8 D_80075568[];

void func_802CF56C(void) {
    if (D_8002D420 & 0x200) {
        func_8023DF7C(D_80075568, D_80075518, 0x105, 0xA, 0x1E, 1);
    }
    if (D_80075500[1] != 0) {
        func_80109A1C(D_80075500[1]);
        D_80075500[1] = 0;
    }
    func_8026B618(1, 0);
}
