extern int D_8002DBD0[];
extern char D_80075518[];
extern char D_80075568[];
s32 func_8023DF7C();

void func_802CF418(void) {
    if (D_8002DBD0[1] == 6) {
        func_8023DF7C(D_80075568, D_80075518, 0x10A, 0xA, 0x28, 0);
    } else if (D_8002DBD0[5] == 6) {
        func_8023DF7C(D_80075568, D_80075518, 0x10B, 0xA, 0x28, 1);
    }
}
