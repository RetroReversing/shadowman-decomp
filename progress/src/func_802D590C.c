s32 func_8011BF70();
struct E { int a; int b; };
extern struct E D_80045C80[];

u32 func_802D590C(s32 arg0) {
    u32 i;
    u32 r = -1;
    for (i = 0; i < 0x4B; i++) {
        if (r != -1) break;
        if (func_8011BF70(D_80045C80[i].a, arg0) == 0) r = i;
    }
    return r;
}
