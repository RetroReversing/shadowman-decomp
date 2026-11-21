extern struct { char pad[0x78]; int max; int x; } D_80075AA8;
extern int D_80075AF8;
int func_80269EF8(int a) {
    int v = D_80075AA8.x + a;
    D_80075AA8.x = v;
    if (v < 0) {
        a -= v;
        D_80075AA8.x = 0;
    } else if (v > D_80075AA8.max) {
        a -= v - D_80075AA8.max;
        D_80075AA8.x = D_80075AA8.max;
    }
    if (a != 0) {
        D_80075AF8 = 1;
    }
    return a;
}
