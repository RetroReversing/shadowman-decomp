typedef struct B { int pad0[2]; int f8; struct B2 *f10; } B;
typedef struct B2 { int pad[8]; int f20; } B2;
typedef struct P { int pad0[2]; int f8; B2 *f10; } P;
typedef struct Q { int f0; int pad[9]; int f28; int f2C; int f30; } Q;
typedef struct O { char pad[0x68]; P *f68; Q *f6C; } O;
typedef struct A { int pad0[2]; int state; O *obj; int pad1[2]; int val; } A;
extern int func_80245684(A *);
extern void func_80245614(A *);
int func_80244C50(A *a) {
    switch (a->state) {
    case 1:
        if (func_80245684(a) != 0) {
            O *o = a->obj;
            P *p = o->f68;
            if (p != 0 && a->val < p->f10->f20 && a->val != p->f8) {
                Q *q = o->f6C;
                q->f0 = 0;
                q->f28 = 0;
                q->f2C = 0;
                q->f30 = 0;
                p->f8 = a->val;
            }
            a->state = 3;
        }
        break;
    case 3:
        func_80245614(a);
        break;
    }
    return 1;
}
