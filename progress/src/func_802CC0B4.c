typedef struct { char pad[4]; s16 f4; char pad2[0x2A]; char *p30; } G;
s32 func_8023DF7C(void *, void *, s32, s32, s32, s32);
void func_802C7278(void);
void func_802CBD70(void);
void func_802CC190(void);
extern s32 D_8002D420;
extern f32 D_80030E48;
extern s16 D_80044EC6;
extern f32 D_800458A8;
extern G D_80075518;
extern char D_80075568[];

void func_802CC0B4(void) {
    *(s32 *)(D_80075518.p30 + 0x410) = 0;
    *(s32 *)(D_80075518.p30 + 0x40C) = 0;
    if (D_80044EC6 != 0) {
        func_802CBD70();
        if (D_80075518.f4 != 0x14) {
            if (D_8002D420 & 2) {
                func_8023DF7C(D_80075568, &D_80075518, 0x15, 0xA, 0xA, 2);
            } else {
                func_8023DF7C(D_80075568, &D_80075518, 0x16, 0xA, 0x14, 2);
            }
        }
    }
    if (D_8002D420 & 0x80) {
        D_80030E48 = D_800458A8;
    }
    func_802C7278();
    func_802CC190();
}
