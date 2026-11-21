extern struct { char pad[0x78]; int x; } D_80075AA8;
extern int D_80075AF4;
int func_80269EA4(int a) {
    int v = D_80075AA8.x + a;
    D_80075AA8.x = v;
    if (v < 0) {
        a -= v;
        D_80075AA8.x = 0;
    } else if (v > 10000) {
        a = (10000 - v) + a;
        D_80075AA8.x = 10000;
    }
    if (a != 0) {
        D_80075AF4 = 1;
    }
    return a;
}
