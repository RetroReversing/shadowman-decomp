typedef struct { s32 a, b, c; } V3_;
typedef struct { s32 flag; s32 x; s32 y; V3_ v; s32 w; } B_;
typedef struct { char pad[0x24]; V3_ v; char pad2[0x3C]; B_ *b; } A_;
typedef struct { char pad[8]; A_ *a; } O_;

void func_8024AAF4(O_ *arg0) {
    A_ *a = arg0->a;
    B_ *b = a->b;
    if (b->flag == 0) {
        b->x = (s32)*(f32*)&a->v.b;
        b->flag = 1;
        b->y = (s32)*(f32*)&a->v.c;
        b->w = 0;
        b->v = a->v;
    }
}
