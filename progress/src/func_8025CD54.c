typedef struct E { int a; int b; int c; int d; int e; } E;
extern void func_802D0850(void *);
extern void func_80239030(void);
extern s32 func_8023904C(void);
extern char D_20A124[];
extern E D_80045930[];
extern int D_8002DBD0[];
extern s32 D_80074BA0, D_80074BA4, D_80074BA8, D_80074BF0;

void func_8025CD54(void) {
    s32 i;
    func_802D0850(D_20A124);
    func_80239030();
    D_80074BF0 = func_8023904C();
    D_80074BA8 = func_8023904C();
    D_80074BA4 = func_8023904C();
    D_80074BA0 = func_8023904C();
    D_8002DBD0[0] = 0;
    D_8002DBD0[4] = 0;
    for (i = 0; i < 20; i++) {
        D_80045930[i].c = 0;
        D_80045930[i].d = 0;
    }
}
