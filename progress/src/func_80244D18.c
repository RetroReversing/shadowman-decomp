typedef struct A { char pad[0x24]; int f24; char pad2[0x44]; int *f6C; char pad3[0x18]; struct B *f88; } A;
typedef struct B { char pad[0x14]; short f14; } B;
typedef struct S { char pad[8]; int state; A *f0C; } S;
int func_80245684(S *);
void func_80245614(S *);
void func_80109318(int, void *, int);

int func_80244D18(S *arg0) {
    A *a;
    unsigned s = arg0->state;
    switch (s) {
    case 1:
        if (func_80245684(arg0)) {
            a = arg0->f0C;
            *a->f6C = 1;
            arg0->state = 3;
            if (a->f88->f14 >= 0x14A && (a->f88->f14 < 0x14D || a->f88->f14 == 0x14E)) {
                func_80109318(0x1BA, &a->f24, 1);
                func_80109318(0x1BB, &a->f24, 0);
            }
        }
        break;
    case 0:
    case 2:
        break;
    case 3:
        func_80245614(arg0);
        break;
    }
    return 1;
}
