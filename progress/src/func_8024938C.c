typedef struct { s32 a; s32 b; s32 c; s32 d; s32 e; } G;
typedef struct { char pad[0x6C]; s32 *p; } O;
extern G *D_80073324;
extern s32 func_8026E2F4(s32);
extern void func_80248C84(void);
extern void func_80109318(s32, void *, s32);

void func_8024938C(s32 *arg0) {
    G *g;
    O *o;
    s32 *q;
    if (func_8026E2F4(0xA7) == 0) {
        func_80248C84();
        return;
    }
    g = D_80073324;
    o = (O *)arg0[2];
    q = o->p;
    if ((s32)o == g->d) {
        if (g->a == 1 && g->b == 0 && *q == 0) {
            *q = g->a;
            func_80109318(0x15E, (char *)o + 0x24, 0);
        }
    } else if ((s32)o == g->e) {
        if (g->a == 1 && g->b == g->a && *q == 0) {
            *q = g->b;
            func_80109318(0x15E, (char *)o + 0x24, 0);
        }
    }
}
