struct B { s32 p0; s32 x; };
struct S { s32 p0; s32 flags; s32 state; s32 c; struct B *b; };
struct T { char pad[0x16]; s16 h; };
extern struct T *D_80075510;

void func_80245614(struct S *a) {
    s32 t = a->b->x;
    if (t == 2) {
        a->state = 4;
    } else if (t == 0) {
        a->state = 4;
        if (a->flags & 1) {
            a->state = 0;
        }
    }
    if (a->flags & 2) {
        D_80075510->h = 2;
    }
    if (!(a->flags & 1)) {
        a->c = 0;
    }
}
