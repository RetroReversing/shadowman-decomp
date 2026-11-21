typedef struct { f32 x, y, z; } V3;
typedef struct { f32 m[3][3]; } M3;
typedef struct { u8 pad0[0x24]; V3 pos; f32 padf; M3 mat; u8 pad1[0x6C-0x58]; s32 *p6c; } E;
typedef struct { u8 pad0[8]; E *e; } O;
typedef struct { s32 type; f32 val; u8 neg; } P;
extern s32 D_8007BE5C;
void func_802478C0(V3 *, V3 *);

void func_802516A0(O *arg0) {
    V3 v;
    V3 o;
    E *e = arg0->e;
    P *q = (P *)e->p6c;
    if (q->type == 2) {
        f32 t;
        v.x = 0;
        t = q->val;
        if (q->neg == 0) t = -t;
        v.y = t;
        v.z = 0;
        {
            f32 *a = (f32 *)&v;
            f32 *m = (f32 *)&e->mat;
            o.x = a[1] * m[1] + a[2] * m[2];
            o.y = a[1] * m[4] + a[2] * m[5];
            o.z = a[1] * m[7] + a[2] * m[8];
        }
        if (D_8007BE5C == 0) func_802478C0(&v, &e->pos);
    }
}
