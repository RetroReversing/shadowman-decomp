typedef struct {
    char pad0[0x2F0];
    f32 p0[3];
    f32 q0[3];
    char pad1[0x18];
    f32 v0[3];
    f32 w0[3];
    f32 t0;
    f32 t1;
} S25C0;
extern f32 D_80074BC0;
extern S25C0 D_8007BF58;

void func_802D25C0(void) {
    S25C0 *s = &D_8007BF58;
    if (s->t0 > 0.0f) {
        s->q0[0] += s->w0[0] * D_80074BC0;
        s->q0[1] += s->w0[1] * D_80074BC0;
        s->q0[2] += s->w0[2] * D_80074BC0;
    }
    s->t0 -= D_80074BC0;
    if (s->t1 > 0.0f) {
        s->p0[0] += s->v0[0] * D_80074BC0;
        s->p0[1] += s->v0[1] * D_80074BC0;
        s->p0[2] += s->v0[2] * D_80074BC0;
    }
    s->t1 -= D_80074BC0;
}
