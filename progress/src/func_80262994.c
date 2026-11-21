extern s16 D_800273F0;
extern s16 D_800273F2;
extern u16 D_8004EC30[];
extern u16 D_8004ED60[];

s32 func_80262994(u16 **arg0, s32 arg1) {
    s16 i;
    u16 v;
    switch (arg1) {
    case 3:
        i = D_800273F0;
        if (i < 0x28) {
            v = **arg0;
            D_800273F0 = (u16)D_800273F0 + 1;
            D_8004EC30[i] = v;
        }
        return 1;
    case 4:
        i = D_800273F2;
        if (i < 0x28) {
            v = **arg0;
            D_800273F2 = (u16)D_800273F2 + 1;
            D_8004ED60[i] = v;
        }
        return 1;
    default:
        return 0;
    }
}
