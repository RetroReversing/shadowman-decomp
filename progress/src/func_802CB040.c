typedef struct { char p0[4]; s16 idx; } S;
extern s32 D_8002D420;
extern S D_80075518;
extern char D_80075568[];
s32 func_802C7FF4();
s32 func_8023DF7C(void *, void *, s32, s32, s32, s32);

void func_802CB040(void) {
    if ((D_8002D420 & 1) && (func_802C7FF4() != 0)) {
        if (D_80075518.idx == 0x4B) {
            func_8023DF7C(D_80075568, &D_80075518, 0x47, 0xA, 0x28, 2);
        }
        if (D_80075518.idx == 0x4C) {
            func_8023DF7C(D_80075568, &D_80075518, 0x48, 0xA, 0x28, 2);
        }
    }
}
