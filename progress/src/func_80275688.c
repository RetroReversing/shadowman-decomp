extern s32 D_80075568;
extern char *D_8007AFF8;
extern void func_802776D8(s32, void *);

s32 func_80275688(s32 arg0) {
    char *p = D_8007AFF8;
    char *q;
    if (*(s32 *)(p + 0x44) & 0x40000000) {
        if (*(s8 *)(p + 0x4C) != 0) {
            return 0;
        }
        q = (char *)&D_80075568;
        *(f32 *)(p + 0x70) = *(f32 *)(q + 0x24);
        *(f32 *)(p + 0x74) = *(f32 *)(q + 0x28);
        *(f32 *)(p + 0x78) = *(f32 *)(q + 0x2C);
        func_802776D8(arg0 & 0xFF, p);
        return 1;
    }
    return 0;
}
