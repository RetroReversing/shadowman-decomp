extern f32 D_80045C40[];
extern s32 D_8007C8F4;
extern s32 D_8007C900[];
extern s32 D_8007DA60;

s32 func_802D5E88(void) {
    s32 *tab = D_8007C900;
    s32 idx = D_8007DA60;
    s32 prev = D_8007C900[idx - 1];
    s32 cur;
    s32 r = 0;
    f32 f;
    if (prev == -1) return 1;
    cur = D_8007C900[idx];
    if (cur == -1) return 1;
    f = 0.0f;
    if (idx != 0) f = (f32)prev;
    if ((s32)(f + ((f32)cur - f) * D_80045C40[1]) < D_8007C8F4) r = 1;
    return r;
}
