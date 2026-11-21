typedef struct { int a; int b; int c; char pad[0x50]; } Ent;
extern char D_002462B0[];
extern int D_8002D480;
extern Ent D_800707A8[];
void func_80109C88(Ent *);
void func_80236594(int, int, char *);

int func_80242B40(int arg0, short arg1) {
    int start = D_8002D480;
    int i;
    Ent *p;
    func_80236594(arg0, arg1, D_002462B0);
    i = start;
    if (i < D_8002D480) {
        Ent *b = D_800707A8; p = &b[i];
        do {
            func_80109C88(p);
            p->c = 0;
            p++;
            i++;
        } while (i < D_8002D480);
    }
    return 1;
}
