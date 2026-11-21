typedef struct { char pad[0x78]; int a; int pad2; int b; } S;
extern S D_80075AA8;
extern short D_80030F20, D_80030F22, D_80030F24;
extern float D_80075AA0, D_80030F1C;
extern int D_80075AFC;
int func_80269F4C(int a0) {
    S *s = &D_80075AA8;
    int v = s->b + a0;
    s->b = v;
    if (a0 > 0) {
        D_80030F20 = 0xFF;
        D_80030F22 = 0xFF;
        D_80030F24 = 0;
        D_80075AA0 = 1.0f;
        D_80030F1C = 1.0f;
    }
    if (v < 0) {
        a0 -= v;
        s->b = 0;
    } else if (s->a < v) {
        a0 -= v - s->a;
        s->b = s->a;
    }
    if (a0 != 0) {
        D_80075AFC = 1;
    }
    return a0;
}
