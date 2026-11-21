extern s32 func_80270090(s32);
extern f32 func_802712B0(f32, f32);
extern u8 *D_8006A4FC;
extern u8 *D_8007AFF8;

s32 func_80271304(f32 arg0, s32 arg1) {
    f32 b = (f32) *(u16 *)(D_8007AFF8 + 0x2C);
    if (arg0 <= func_802712B0(*(f32 *)(D_8006A4FC + 0x1C), b)) {
        func_80270090(arg1 & 0xFF);
        return 1;
    }
    return 0;
}
