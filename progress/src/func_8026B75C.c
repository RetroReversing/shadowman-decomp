extern char D_8007DB78[];
extern f32 D_80030F70;

void func_8026B75C(s32 idx, char *p, s32 flag) {
    char *b0 = D_8007DB78;
    if (*(s32 *)(b0 + idx * 4 + 0x30) != 3) return;
    switch (idx) {
    case 0:
        *(f32 *)(p + 0x1C) = *(f32 *)0x20E330;
        break;
    case 1:
        *(s32 *)(p + 0x1C) = 0;
        break;
    }
    if (flag == 0) {
        f32 v;
        f32 g = D_80030F70;
        char *base = D_8007DB78;
        f32 *q = (f32 *)(base + idx * 16 + 0x6C);
        D_80030F70 = g + *q;
        *(f32 *)(p + 0x18) = D_80030F70;
        if (*(u8 *)(base + idx + 0x48) == 1) {
            v = *q;
            if (v < *(f32 *)0x20E334) {
                *q = v + *(f32 *)(base + 0x14) * *(f32 *)0x20E338;
            }
        } else {
            v = *q;
            if (*(f32 *)0x20E33C < v) {
                *q = v - *(f32 *)(base + 0x14) * *(f32 *)0x20E340;
            } else {
                *q = *(f32 *)0x20E33C;
            }
        }
    }
}
