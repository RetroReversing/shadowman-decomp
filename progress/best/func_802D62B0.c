struct P { int a; int b; };
struct Q { int x; int i; int j; int y; int z; };
extern int D_80045EE0[];
extern struct P *D_80045F30[];
extern int D_8007DA70[];

void func_802D62B0(struct Q *arg0) {
    int k = arg0->i;
    struct P *p = &D_80045F30[k][arg0->j];
    arg0->j = p->b;
    if (D_80045EE0[k] != p->a) {
        arg0->z = p->a;
        if (D_8007DA70[k] == 0 || D_8007DA70[k] == p->a) {
            D_8007DA70[k] = p->a;
        }
    } else {
        arg0->z = D_80045EE0[k];
    }
    return;
    if (D_8007DA70[k] == 0 || D_8007DA70[k] == p->a) {
        D_8007DA70[k] = p->a;
    }
}
