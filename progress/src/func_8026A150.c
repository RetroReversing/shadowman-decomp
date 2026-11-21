extern struct { char pad[0x88]; int x; } D_80075AA8;
extern int D_80075B04;
int func_8026A150(int a) {
    int v = D_80075AA8.x + a;
    D_80075AA8.x = v;
    if (v < 0) {
        a -= v;
        D_80075AA8.x = 0;
    } else if (v >= 1000) {
        a -= v - 999;
        D_80075AA8.x = 999;
    }
    if (a != 0) {
        D_80075B04 = 1;
    }
    return a;
}
