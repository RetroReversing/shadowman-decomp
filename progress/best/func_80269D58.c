extern struct { char pad[0x6C]; int x; } D_80075AA8;
extern float D_80075AA0;
extern int D_80075AE8;
int func_80269D58(int a) {
    if (a < 0) {
        a = 0;
    } else {
        int v = D_80075AA8.x + a;
        D_80075AA0 = 1.0f;
        D_80075AA8.x = v;
        if (v > 10000) {
            a -= v - 10000;
            D_80075AA8.x = 10000;
        }
    }
    if (a != 0) {
        D_80075AE8 = 1;
    }
    return a;
}
