typedef struct Q { char pad[0x1C]; f32 f1C; } Q;
typedef struct P { char pad[0x10]; Q *q; } P;
typedef struct O2 { char pad[0x20]; f32 f20; char pad2[0x44]; P *p; s32 *r; char pad3[0xA]; s16 st; } O2;
typedef struct A { char pad[8]; O2 *o; } A;
extern s32 D_80072C2C;
extern s32 D_8005276C;
extern s32 D_80052774;
void func_8026E4CC(O2 *, s32);
void func_8024EC7C(A *arg0) {
    O2 *o;
    Q *q;
    s32 *r;
    u32 t;
    if (D_80072C2C == D_8005276C) return;
    o = arg0->o;
    D_80072C2C = D_8005276C;
    if (o->st == 0x7F) {
        q = o->p->q;
        q->f1C = 0;
    } else if (o->st == 0) {
        o->f20 = *(f32 *)0x2030C0;
    } else if (o->st == 1) {
        r = o->r;
        q = o->p->q;
        t = r[0];
        switch (t) {
        case 0:
            {f32 f = *(f32 *)0x2030C4;
            r[0] = 1;
            r[1] = 0x168;
            q->f1C = f;}
            break;
        case 1:
            r[1] -= D_80052774;
            if (r[1] < 0) {
                q->f1C = 0;
                r[0] = 2;
            }
            break;
        case 2:
            func_8026E4CC(o, 0x7F);
            o->st = t;
            break;
        default:
            break;
        }
    }
}
