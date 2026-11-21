extern f32 D_80074BC0;
typedef struct { f32 a; f32 b; s32 st; } S1;
typedef struct { char pad0[0x1C]; f32 f; char pad1[0x4C]; s32 p; s32 pad2; } S0;

void func_80253B04(void *arg0) {
    char *a0 = *(char **)((char *)arg0 + 8);
    S1 *v1 = *(S1 **)(a0 + 0x6C);
    s16 h;
    f32 t;
    switch (v1->st) {
    case 0:
        h = *(s16 *)(a0 + 0x7A);
        if (h == 1) {
            v1->a = 0.0f;
            v1->b = *(f32 *)(a0 + 0x1C);
            v1->st = h;
            return;
        }
        return;
    case 1:
        t = D_80074BC0 * *(f32 *)0x2033A0;
        *(f32 *)(a0 + 0x1C) = *(f32 *)(a0 + 0x1C) + t;
        v1->a += t;
        if (*(f32 *)0x2033A4 <= v1->a) {
            *(s16 *)(a0 + 0x7A) = 0;
            *(f32 *)(a0 + 0x1C) = v1->b + *(f32 *)0x2033A4;
            v1->st = 0;
        } else {
            return;
        }
        break;
    }
}
