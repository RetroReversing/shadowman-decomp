typedef struct { char pad[0x24]; f32 x; f32 y; f32 z; } S1;
typedef struct { f32 x; f32 y; f32 z; } V;
extern S1 D_80075568;
extern V D_8007BE68;

void func_8024F2DC(void *arg0) {
    f32 sp0;
    f32 sp8;
    f32 c;
    S1 *p = *(S1 **)((char *)arg0 + 8);

    sp0 = D_80075568.x - p->x;
    c = *(f32 *)0x2030F0;
    sp8 = D_80075568.z - p->z;
    D_8007BE68.x = D_8007BE68.x + sp0 * c;
    D_8007BE68.z = D_8007BE68.z + sp8 * c;
}
