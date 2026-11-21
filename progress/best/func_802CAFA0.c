typedef struct { char pad[8]; s16 f8; char pad2[0x2A]; } Ent34;
s32 func_8023DF7C();
s32 func_802C7FF4();
s32 func_802CB01C();
extern Ent34 D_209890[];
extern s32 D_8002D420;
extern s32 D_80074BB0;
extern char D_80075518[];
extern char D_80075568[];

void func_802CAFA0(void) {
    if ((D_8002D420 & 1) && (func_802C7FF4() != 0)) {
        if (D_209890[D_80074BB0].f8 == 0) {
            func_802CB01C(D_80075568, D_80075518, 0x20);
            return;
        }
        func_8023DF7C(D_80075568, D_80075518, 0x1F, 0xA, 0x28, 2);
    }
}
