typedef struct { char pad[0x2C]; s16 v; } T;
extern T D_80075518;
extern char D_80075568[];
extern s32 D_8002D424;
s32 func_8023DF7C();
s32 func_8026B618();

void func_802CDA2C(void) {
    func_8026B618(1, 0);
    if (D_80075518.v >= 0x1C) {
        if (D_8002D424 & 0x200) {
            func_8023DF7C(D_80075568, &D_80075518, 0xCF, 0xA, 0x14, 1);
        }
    }
    if (D_80075518.v >= 0x65) {
        func_8023DF7C(D_80075568, &D_80075518, 0xC8, 0xA, 0x78, 1);
    }
}
