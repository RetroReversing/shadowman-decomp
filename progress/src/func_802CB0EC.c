typedef struct { f32 x, y, z; } Vec3;
typedef struct { u8 pad0[0x24]; Vec3 pos; f32 pad; f32 m[3][3]; } Obj;
extern char D_80075598[];
extern void func_802BAAF8(Vec3 *, Vec3 *, f32);

void func_802CB0EC(void) {
    Vec3 in;
    Vec3 out;
    Vec3 p;
    Vec3 *pi = &in;
    f32 (*m)[3] = (f32 (*)[3])(D_80075598 + 4);
    Obj *o;
    f32 c;
    in.x = 0.0f;
    in.y = 0.0f;
    in.z = *(f32 *)0x21867C;
    out.x = pi->y * m[0][1] + pi->z * m[0][2];
    out.y = pi->y * m[1][1] + pi->z * m[1][2];
    out.z = pi->y * m[2][1] + pi->z * m[2][2];
    o = (Obj *)((char *)m - 0x34);
    c = *(f32 *)0x218680;
    out.x += o->pos.x;
    out.y += o->pos.y - c;
    out.z += o->pos.z;
    p = *(Vec3 *)((char *)m - 0x10);
    p.y -= c;
    func_802BAAF8(&p, &out, 1.0f);
}
