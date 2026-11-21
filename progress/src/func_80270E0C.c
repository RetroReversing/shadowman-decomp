struct S { char pad[0x1C]; f32 f; };
extern struct S *D_8006A4FC;

void func_80270E0C(f32 arg0) {
    struct S *p = D_8006A4FC;
    f32 v;
    v = p->f;
    v += arg0;
    if (v < 0.0f) {
        v += *(f32 *)0x213F88;
    }
    if (*(f32 *)0x213F8C < v) {
        v -= *(f32 *)0x213F8C;
    }
    p->f = v;
}
