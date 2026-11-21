typedef struct { s32 a; s32 b; s32 c; f32 x, y, z; } Ent;
extern s32 func_80116EB0(void *, void *, s32);
extern s32 D_8002D1CC;
extern Ent D_800596F0[];
extern u8 D_80059738[];
extern u16 D_80075534;

void func_8022B114(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    Ent *e;
    s32 *p;
    if (!(D_80075534 & 4)) {
        Ent *q = D_800596F0;
        p = &D_8002D1CC;
        e = q + *p;
        e->c = arg0;
        e->a = 2;
        e->b = 0;
        e->x = arg1;
        e->y = arg2;
        e->z = arg3;
        func_80116EB0(D_80059738, e, 1);
        *p = (*p + 1) % 3;
    }
}
