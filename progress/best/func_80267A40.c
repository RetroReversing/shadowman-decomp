s32 func_80113AD0();
void func_8023DF7C(void *, void *, s32, s32, s32, s32);
extern char D_80075518[];
extern char D_80075568[];

void func_80267A40(void) {
    s32 r = func_80113AD0() % 3;
    if (r == 0) {
        func_8023DF7C(D_80075568, D_80075518, 0x2D, 0, 0x14, 2);
    } else if (r == 1) {
        func_8023DF7C(D_80075568, D_80075518, 0x2E, 0, 0x14, 2);
    } else {
        func_8023DF7C(D_80075568, D_80075518, 0x2F, 0, 0x14, 2);
    }
}
