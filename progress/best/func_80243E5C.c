typedef struct B { char p[0x1C]; f32 f; char q[0x5A]; s16 h; } B;
typedef struct A { char p0[8]; s32 state; B *b; char p1[8]; s32 lim; s32 d; char p2[0x18]; s32 acc; } A;
extern s32 func_80245684(A *);
extern void func_80245614(A *);
s32 func_80243E5C(A *a) {
    B *b = a->b;
    switch (a->state) {
    case 1:
        if (b->h == 1) {
            if (func_80245684(a) != 0) {
                a->state = 2;
                a->acc = 0;
            }
        } else {
            a->state = 0;
        }
        break;
    case 2:
        {
            s32 d = a->d;
            s32 e = a->acc;
            if (d < 0) d = -d;
            a->acc = (d) + (e);
            b->f += (f32)a->d;
            if (a->acc >= a->lim) a->state = 3;
        }
        break;
    case 0:
    case 3:
    case 4:
        break;
    }
    func_80245614(a);
    b->h = 0;
    return 1;
}
