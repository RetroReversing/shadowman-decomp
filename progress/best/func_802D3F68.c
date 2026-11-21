typedef struct { f32 x, y, z; } V3;
typedef struct {
    u8 pad[0xC];
    V3 a;      /* C */
    f32 f18, f1c, f20;
    V3 pos;    /* 0x24 */
} O;
typedef struct { s32 p0, p1; O *o; s32 p3, p4; } T;
typedef struct { s32 a, idx; V3 pos; f32 f14, f18, f1c; } A;
extern T D_80045930[];
extern O D_80075568;
extern V3 D_8007BDB8;

A *func_802D3F68(A *arg0) {
    O *o = D_80045930[arg0->idx].o;
    o->pos.x = arg0->pos.x;
    o->pos.y = arg0->pos.y;
    o->pos.z = arg0->pos.z;
    if (o == &D_80075568) {
        D_8007BDB8 = o->pos;
    }
    o->f18 = arg0->f14;
    o->f1c = arg0->f18;
    o->a.x = 0;
    o->a.y = 0;
    o->a.z = 0;
    o->f20 = arg0->f1c;
    return arg0 + 1;
}
