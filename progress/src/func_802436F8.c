typedef struct B { char pad[0xC]; int f; } B;
typedef struct C { char pad[0x68]; B *p; } C;
typedef struct A { char pad[8]; int state; C *c; } A;
extern int func_80245684(A *);
extern void func_80245614(A *);

int func_802436F8(A *a) {
    switch ((unsigned)a->state) {
    case 1:
        if (func_80245684(a)) {
            B *p = a->c->p;
            if (p != 0) {
                p->f = 0;
            }
            a->state = 3;
        }
        break;
    case 0:
        break;
    case 2:
        break;
    case 3:
        func_80245614(a);
        break;
    }
    return 1;
}
