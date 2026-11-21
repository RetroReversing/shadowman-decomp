typedef struct { f32 x, y, z; } V;
typedef struct { u8 p0[0x44]; u32 flags; u8 p1[0x0B]; u8 b53; u8 p2[0x28]; u8 b7C; u8 p3[0x67]; V a; V b; } T;
extern T *D_8007AFF8;

void func_8026FCC4(V a, V b, f32 a6) {
    T *t = D_8007AFF8;
    if (!(t->flags & 0x400)) {
        t->a.x = a.x;
        t->a.y = a.y;
        t->a.z = a.z;
        t->b.x = b.x;
        t->b.y = b.y;
        t->b.z = b.z;
        t->b7C = (u32)a6;
        t = D_8007AFF8;
        t->b53 = 0;
        t->flags |= 0x400;
    }
}
