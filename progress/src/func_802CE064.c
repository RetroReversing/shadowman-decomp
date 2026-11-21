typedef struct { char pad[8]; s16 x; char pad2[0x2a]; } E;
s32 func_8023DF7C();
s32 func_8026B618();
extern E D_209890[];
extern s32 D_80074BB0;
extern char D_80075518[];
extern char D_80075568[];
extern s32 D_8007BD90;

void func_802CE064(void) {
    if (D_8007BD90 != 0) {
        D_8007BD90 = 0;
        func_8026B618(0, 0);
        if (D_209890[D_80074BB0].x == 0) {
            func_8023DF7C(D_80075568, D_80075518, 0xD7, 0xA, 0x28, 0);
        } else {
            func_8023DF7C(D_80075568, D_80075518, 0xDD, 0xA, 0x28, 0);
        }
    }
}
