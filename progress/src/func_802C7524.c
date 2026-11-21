extern int D_8002D420;
extern int D_80044EB0;
extern short D_80044EB0_16[];
extern char D_80075518[], D_80075568[];
void func_8023DF7C(void *, void *, int, int, int, int);
void func_802C71E4(void);
void func_802CBBA8(void);
void func_802CC190(void);

void func_802C7524(void) {
    if (D_80044EB0 != 0 && *(short *)((char *)&D_80044EB0 + 0x16) != 0) {
        func_802CBBA8();
        if ((D_8002D420 & 0x28) == 0x28) {
            func_8023DF7C(D_80075568, D_80075518, 0x95, 10, 20, 2);
        } else if (D_8002D420 & 0x01000000) {
            func_8023DF7C(D_80075568, D_80075518, 0x95, 10, 20, 2);
        } else {
            func_8023DF7C(D_80075568, D_80075518, 0xBB, 10, 20, 2);
        }
    }
    func_802C71E4();
    func_802CC190();
}
