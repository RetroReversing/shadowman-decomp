typedef struct A { char pad[8]; int state; struct { char pad[0x68]; int *p; } *c; } A;
extern int func_80245684(A *);
extern void func_80245614(A *);
int func_80243668(A *arg0) {
    int *p;
    switch ((unsigned)arg0->state) {
    case 0:
        break;
    case 1:
        if (func_80245684(arg0)) {
            p = arg0->c->p;
            if (p) {
                p[0] = 0;
                p[3] = 0;
            }
            arg0->state = 3;
        }
        break;
    case 2:
        break;
    case 3:
        func_80245614(arg0);
        break;
    }
    return 1;
}
