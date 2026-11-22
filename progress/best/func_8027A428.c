typedef struct { char pad[0x24]; f32 x; char pad2[4]; f32 z; } P;
typedef struct { char pad[4]; f32 x; f32 y; f32 z; char pad2[0x34-0x10]; } V;
typedef struct { char p0[0xC]; u16 *list; char p1[0x92-0x10]; u16 cur; char p2[0xA8-0x94]; s16 a8; char p3[0xB0-0xAA]; f32 bx, by, bz; char p4[4]; s32 c0; } S;
extern P D_80075568;
extern V *D_80036944;
extern S *D_8007AFF8;
extern u16 D_8007B0FC;
extern f32 fabsf(f32);

void func_8027A428(void) {
    s16 i;
    u16 *l;
    u16 best;
    f32 max = *(f32 *)0x214464;
    f32 d;
    V *v;

    l = D_8007AFF8->list;
    best = *l++;
    i = 0;
    do {
        D_8007B0FC = *l;
        v = &D_80036944[(s16)D_8007B0FC];
        d = fabsf(D_80075568.x - v->x) + fabsf(D_80075568.z - v->z);
        l++;
        if (max < d) {
            D_8007AFF8->bx = v->x;
            max = d;
            D_8007AFF8->by = v->y;
            best = D_8007B0FC;
            D_8007AFF8->bz = v->z;
        }
        i++;
    } while (i < 2);
    if ((s16)best != D_8007AFF8->cur) {
        D_8007AFF8->c0 = 0;
        D_8007AFF8->a8 = 0;
        D_8007AFF8->cur = best;
    }
}
