typedef struct { char pad[0x14]; f32 f14; char pad2[0x14]; } T2C;
extern T2C D_203A10[];
extern s32 D_8007338C;

void func_8024F7E0(void *arg0) {
    char *p = arg0;
    if (*(s16 *)(p + 0x14) == D_8007338C) {
        char *v1 = *(char **)(p + 8);
        s32 *a1 = *(s32 **)(v1 + 0x6C);
        T2C *e = D_203A10;
        a1[4] = 1;
        *(f32 *)(a1 + 1) = *(f32 *)(v1 + 0x1C);
        a1[0] = 2;
        a1[2] = (s32) e[*(s16 *)(p + 0x14)].f14;
    }
}
