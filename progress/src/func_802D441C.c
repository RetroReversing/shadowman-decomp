extern s32 D_8007C300;
extern s32 D_8007C304;
extern s32 D_8007C308;
extern f32 D_8007C30C;
extern f32 D_8007C310;
extern f32 D_8007C314;

typedef struct { s32 a; s32 idx; f32 f; s32 v; } S;
S *func_802D441C(S *arg0) {
    S *p = arg0;
    s32 i = p->idx;
    if (i == 0) {
        D_8007C30C = arg0->f;
        D_8007C300 = arg0->v;
    }
    if (i == 1) {
        D_8007C310 = arg0->f;
        D_8007C304 = arg0->v;
    }
    if (i == 2) {
        D_8007C314 = arg0->f;
        D_8007C308 = arg0->v;
    }
    return p + 1;
}
