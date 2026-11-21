extern s32 D_80052770[];
extern s32 D_8007C2A0[];
extern s32 D_8007C2CC;

void func_802D69E0(void) {
    s32 *p = D_8007C2A0;
    s32 *q = p - 0xD2;
    if (p[2] == 1) {
        s32 v = q[0xDD];
        v -= D_80052770[1];
        q[0xDD] = v;
        if (v < 0) {
            p[2] = 0;
        }
    }
}
