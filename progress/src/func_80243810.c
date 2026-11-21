typedef struct A { char pad[8]; int state; } A;
extern int func_80245684(A *);
extern void func_80245614(A *);
extern unsigned char D_8002D4A0;

int func_80243810(A *a) {
    switch ((unsigned)a->state) {
    case 1:
        if (func_80245684(a)) {
            a->state = 3;
            D_8002D4A0 = (D_8002D4A0 + 5) & 7;
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
