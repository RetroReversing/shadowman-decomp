typedef struct { int a; int key; int c; int val; } Ent;
extern int D_8002D56C[];
extern Ent D_8002DBD0[];

int func_80245778(int arg0) {
    int r = 0;
    int i = 0;
    Ent *base = D_8002DBD0;
    int *p = D_8002D56C;
    do {
        Ent *e = (Ent *)((*p << 4) + (int)base);
        i++;
        if (e->key == arg0) r = e->val;
        p++;
    } while (i < 2 && r == 0);
    return r;
}
