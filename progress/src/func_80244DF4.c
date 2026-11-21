typedef struct B { char pad[0x6C]; int *p; } B;
typedef struct A { char pad[8]; int state; B *b; } A;
extern int func_80245684(A *);
extern void func_80245614(A *);

int func_80244DF4(A *a) {
    switch ((unsigned)a->state) {
    case 1:
        if (func_80245684(a)) {
            *a->b->p = 2;
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
