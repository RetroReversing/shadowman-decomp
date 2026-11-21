extern struct { char pad[0x8C]; int x; } D_80075AA8;
extern int D_80075B08;
int func_8026A1A4(int a) {
    int v = D_80075AA8.x + a;
    D_80075AA8.x = v;
    if (v < 0) {
        a -= v;
        D_80075AA8.x = 0;
    } else if (v > 0x200) {
        a -= v - 0x200;
        D_80075AA8.x = 0x200;
    }
    if (a != 0) {
        D_80075B08 = 1;
    }
    return a;
}
