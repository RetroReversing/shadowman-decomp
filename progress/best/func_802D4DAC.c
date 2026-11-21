typedef struct { float x, y, z; } Vec3f;
typedef struct { float w; Vec3f v; } Ent;
typedef struct { char pad[0x2FC]; Vec3f a; Vec3f b; Vec3f c; char pad2[0x388-0x31C-4]; unsigned char flag; } G;
extern G D_8007BF58;
extern Vec3f D_8007C868;

Ent *func_802D4DAC(Ent *arg0) {
    D_8007BF58.a.x = arg0->v.x;
    D_8007BF58.a.y = arg0->v.y;
    D_8007BF58.a.z = arg0->v.z;
    if (D_8007BF58.flag != 0) {
        D_8007BF58.c.x = arg0->v.x;
        D_8007BF58.c.y = arg0->v.y;
        D_8007BF58.c.z = arg0->v.z;
    }
    D_8007C868.x = arg0->v.x;
    D_8007C868.y = arg0->v.y;
    D_8007C868.z = arg0->v.z;
    return arg0 + 1;
}
