typedef struct { f32 x, y, z; } Vec3f;
typedef struct {
    s32 a[256];
    s32 b[256];
    Vec3f c[256];
    Vec3f d[256];
    Vec3f e;
    s32 pad[2];
    s32 f;
    s32 g;
} Unk;
extern Unk *D_80036960;
extern Vec3f D_800369F8[];
extern Vec3f D_80036A28[];
extern Vec3f D_80036A58[];
extern s32 D_80074BB0;
extern Vec3f D_80075568[];
extern Vec3f D_8007B650;
extern void *func_80103878(s32, s32, s32);
extern void func_8011BA20(void *, s32, s32);
extern s32 func_80113AD0(void);
extern void func_80234B70(void *);
extern void func_80109318(s32, void *, s32);

void func_80295544(void) {
    s32 i;
    if (D_80036960 == NULL) {
        D_80036960 = func_80103878(0x201C, 2, 0);
        func_8011BA20(D_80036960, 0, 0x201C);
        D_80036960->f = 0x100;
        for (i = 0; i < 256; i++) {
            D_80036960->a[i] = func_80113AD0() % 511;
            D_80036960->b[i] = func_80113AD0() % 2 + 1;
        }
        for (i = 0; i < 256; i++) {
            D_80036960->c[i].x = func_80113AD0() % 320 - 160;
            D_80036960->c[i].y = func_80113AD0() % 320 - 160;
            D_80036960->c[i].z = func_80113AD0() % 320 - 160;
            func_80234B70(&D_80036960->c[i]);
            D_80036960->d[i].x = func_80113AD0() % 320;
            D_80036960->d[i].y = func_80113AD0() % 320;
            D_80036960->d[i].z = func_80113AD0() % 320;
        }
        D_80036960->e = D_80075568[3];
        D_8007B650 = D_80075568[3];
        func_80109318(0x1AB, &D_80075568[3], 0);
        switch (D_80074BB0) {
        case 9:
            for (i = 0; i < 4; i++) func_80109318(0x1AA, &D_800369F8[i], 0);
            break;
        case 12:
            for (i = 0; i < 4; i++) func_80109318(0x1AA, &D_80036A28[i], 0);
            break;
        case 14:
            for (i = 0; i < 4; i++) func_80109318(0x1AA, &D_80036A58[i], 0);
            break;
        }
    }
}
