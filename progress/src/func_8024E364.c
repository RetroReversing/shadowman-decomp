typedef struct { char pad[0x24]; f32 x; f32 y; f32 z; } P;
typedef struct { char pad[8]; P *p; } A;
typedef struct { s32 a, b, c; } V;
extern P D_80075568;
extern char D_80075518;
extern f32 D_80045440;
extern P D_8007BEA8;
extern void func_80109318(s32, void *, s32);
extern void func_8023DF7C(void *, void *, s32, s32, s32, s32);

void func_8024E364(A *arg0) {
    P *p = arg0->p;
    f32 dx = p->x - D_80075568.x;
    f32 dz = p->z - D_80075568.z;
    f32 d = dx * dx + dz * dz - *(f32 *)0x203084;
    f32 c = *(f32 *)0x203088;
    D_80045440 = d;
    if (d < c) {
        D_80045440 = c;
    }
    *(V *)&D_8007BEA8 = *(V *)&p->x;
    func_80109318(-1, &D_80075568.x, 0);
    func_8023DF7C(&D_80075568, &D_80075518, 0x3A, 10, 0x32, 2);
}
