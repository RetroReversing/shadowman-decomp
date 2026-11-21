typedef struct { char pad[0x2A]; s16 x; } T;
extern T D_80075518;
extern char D_80075568[];
extern s32 D_8002D424;
s32 func_8023DF7C();
s32 func_8026B618();

void func_802CDAD0(void) {
    func_8026B618(0, 0);
    if (D_80075518.x >= 0x1C) {
        if (D_8002D424 & 0x100) {
            func_8023DF7C(D_80075568, &D_80075518, 0xDB, 0xA, 0x14, 0);
        }
    }
    if (D_80075518.x >= 0x65) {
        func_8023DF7C(D_80075568, &D_80075518, 0xD4, 0xA, 0x78, 0);
    }
}
