extern s32 D_8002D420;
extern struct { char pad[0xA]; s16 f; } D_80075518;
extern char D_80075568[];
void func_8023DF7C(void *, void *, int, int, int, int);

void func_802CCAD8(void) {
    if (D_80075518.f == 0) {
        if (!(D_8002D420 & 0x80)) {
            func_8023DF7C(D_80075568, &D_80075518, 0x2A, 0xA, 0x50, 2);
        } else {
            func_8023DF7C(D_80075568, &D_80075518, 0x2B, 0xA, 0x50, 2);
        }
    }
}
