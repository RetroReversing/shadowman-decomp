extern int D_8007558C;
extern unsigned short D_8007AFFE;
extern unsigned short D_8007B0A2;
unsigned short func_802761B0(int *, int);
unsigned short func_8027035C(void) {
    short v = func_802761B0(&D_8007558C, 0x44FA0000);
    D_8007B0A2 = v;
    if (v >= 0) {
        D_8007AFFE = v;
        return 1;
    }
    return D_8007B0A2 = D_8007AFFE;
}
