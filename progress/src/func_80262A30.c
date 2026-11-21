extern s16 D_800273F4;
extern s16 D_800273F6;
extern u16 D_8004ECB8[];
extern u16 D_8004ED10[];

s32 func_80262A30(u16 **arg0, s32 arg1) {
    switch (arg1) {
    case 3:
        if (D_800273F4 < 0x28) {
            D_8004ED10[D_800273F4] = **arg0;
            D_800273F4++;
        }
        return 1;
    case 4:
        if (D_800273F4 < 0x28) {
            D_8004ECB8[D_800273F6] = **arg0;
            D_800273F6++;
        }
        return 1;
    default:
        return 0;
    }
}
