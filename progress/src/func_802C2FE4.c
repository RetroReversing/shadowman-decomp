extern s32 D_8002D420;
extern f32 D_8002D418;
extern f32 D_8003A5E8;
extern s32 D_800458F0;
extern s32 D_8006A4F8;
extern s32 D_8006A504;
extern s16 D_80075518[];
extern char D_80075568[];
void func_8023DF7C(void *, void *, s32, s32, s32, s32);
#define K0 (*(f32 *)0x2183AC)
#define K1 (*(f32 *)0x2183B0)
#define K2 (*(f32 *)0x2183B4)
#define K3 (*(f32 *)0x2183B8)

void func_802C2FE4(void) {
    f32 f;
    if (!(D_8002D420 & 1)) {
        D_8003A5E8 = K0;
        if (D_80075518[2] == 8) {
            func_8023DF7C(D_80075568, D_80075518, 0, 10, 0x46, 2);
        } else {
            func_8023DF7C(D_80075568, D_80075518, 5, 10, 0, 2);
        }
    } else {
        f = D_8002D418 + K1;
        D_8003A5E8 = f * K2;
        if (D_800458F0 == 0) {
            D_8006A4F8 = f * ((f32)(D_8006A504 + 5) * K3);
        }
    }
}
