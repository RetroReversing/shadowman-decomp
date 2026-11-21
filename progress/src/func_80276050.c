typedef struct { f32 x, y, z; } Vec3;
typedef struct { u8 pad[0x38]; f32 f38; u8 pad2[0x6C-0x3C]; } Ent;
extern Ent D_212078[];
extern u8 *D_8006A4FC;
extern u8 *D_8007AFF8;
extern struct { u8 p[0x78]; s32 f78; f32 f7C; f32 f80; f32 f84; u8 p2[4]; u8 *f8C; u8 *f90; } D_8006A510;
s32 func_802403D4(Vec3 *, Vec3 *, f32);

void func_80276050(void) {
    Vec3 a;
    Vec3 b;
    Vec3 *p = (Vec3 *)D_8006A4FC;
    a = *p;
    a.y += D_212078[D_8007AFF8[0x40]].f38;
    b.x = a.x;
    b.y = *(f32 *)(D_8006A4FC + 0x28) - *(f32 *)0x214290;
    b.z = a.z;
    func_802403D4(&a, &b, 5.0f);
    if (D_8006A510.f78 != 0) {
        *(s32 *)(D_8007AFF8 + 0xDC) = *(s32 *)(D_8006A510.f8C + 0x1C) + *(u16 *)(D_8006A510.f90 + 8) * 0x10;
        *(f32 *)(D_8007AFF8 + 0xD8) = D_8006A510.f84;
        *(s16 *)(D_8007AFF8 + 0xE0) = D_8006A510.f90[2];
    }
}
