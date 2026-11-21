typedef struct A {
    u8 pad0[8];
    s32 state;
    struct B *b;
    u8 pad10[8];
    s32 lim;
    s32 d;
    u8 pad20[0x18];
    s32 acc;
} A;
typedef struct B {
    u8 pad[0x1C];
    f32 x;
    u8 pad2[0x7A-0x20];
    s16 flag;
} B;
extern s32 func_80245684(A *a);
extern void func_80245614(A *a);
s32 func_80244B78(A *a) {
    B *b = a->b;
    switch (a->state) {
    case 0:
        if (b->flag == 0) {
            if (func_80245684(a)) {
                a->acc = 0;
                a->state = 2;
            }
        } else {
            a->state = 0;
        }
        break;
    case 1:
        break;
    case 2: {
        s32 d = a->d;
        s32 e = a->acc;
        if (d < 0) d = -d;
        e += d;
        a->acc = e;
        b->x += (f32)a->d;
        if (a->acc >= a->lim) a->state = 3;
        break;
    }
    case 3:
        func_80245614(a);
        b->flag = 1;
        break;
    case 4:
        break;
    }
    return 1;
}
