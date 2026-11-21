extern int func_8023DF7C(void *, void *, int, int, int, int);
extern int func_802C43C0();
extern int D_8002D420;
extern char D_80075518[];
extern char D_80075568[];

void func_802C37BC(void) {
    if (!(D_8002D420 & 2)) {
        if (func_802C43C0() != 0) {
            func_8023DF7C(D_80075568, D_80075518, 1, 0xA, 0x4B, 2);
        } else {
            func_8023DF7C(D_80075568, D_80075518, 0, 0xA, 0x4B, 2);
        }
    }
}
