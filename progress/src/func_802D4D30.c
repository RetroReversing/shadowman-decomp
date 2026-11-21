typedef struct { s32 a; s32 b; void *c; } A;
typedef struct { s32 t; u8 pad[0x10]; u8 f; } B;
typedef struct { u8 pad[0x6C]; B *p; } C;
typedef struct { u8 pad[8]; C *c; } D;
extern struct { u8 pad[0x20]; s32 x; } *D_80030C58;
extern D *func_80239730(s32, s32, s32);
extern void func_8026E26C(s32);
extern void func_8026E9C4(C *, s32);

void *func_802D4D30(A *arg0) {
    D *d;
    C *c;
    B *p;
    func_8026E26C(arg0->b);
    if (arg0->b == 0x8A) {
        d = func_80239730(D_80030C58->x, 2, 0xF7);
        if (d != NULL) {
            c = d->c;
            p = c->p;
            p->f = 1;
            p->t = 6;
            func_8026E9C4(c, 1);
        }
    }
    return &arg0->c;
}
