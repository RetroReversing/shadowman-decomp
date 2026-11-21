typedef struct { char pad[0x10]; f32 a, b, c, d, e, f; char pad2[0x5C-0x28]; } E;
typedef struct { int pad; f32 a, b, c, d, e, f; } A;
extern s32 D_8002D480;
extern E D_800707A8[];

E *func_802457D0(A *arg0) {
    s32 i;
    for (i = 0; i < D_8002D480; i++) {
        E *p = &D_800707A8[i];
        if (p->a == arg0->a && p->b == arg0->b && p->c == arg0->c && p->d == arg0->d && p->e == arg0->e && p->f == arg0->f) {
            return p;
        }
    }
    return 0;
}
