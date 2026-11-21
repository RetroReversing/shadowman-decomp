typedef struct A { char pad[8]; int state; } A;
extern int func_80245684(A *);
extern void func_80245614(A *);
extern void func_80243050(void);
extern int D_8002D4A4;

int func_80244118(A *a) {
    switch ((unsigned)a->state) {
    case 1:
        if (func_80245684(a)) {
            D_8002D4A4 = D_8002D4A4 + 1;
            func_80243050();
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
