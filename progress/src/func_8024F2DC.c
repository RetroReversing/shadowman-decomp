typedef struct { char pad[0x24]; f32 x; f32 y; f32 z; } S1;
typedef struct { f32 x; f32 y; f32 z; } V;
extern S1 D_80075568;
extern V D_8007BE68;

void func_8024F2DC(void *arg0) {
    volatile f32 sp[3];
    f32 c;
    f32 a, b;
    S1 *p = *(S1 **)((char *)arg0 + 8);

    a = D_80075568.x - p->x;
    sp[0] = a;
    c = *(f32 *)0x2030F0;
    b = D_80075568.z - p->z;
    sp[2] = b;
    D_8007BE68.x = D_8007BE68.x + a * c;
    D_8007BE68.z = D_8007BE68.z + b * c;
}
