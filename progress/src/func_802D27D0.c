extern f32 D_80030C70;
extern char D_8007BF58[];

void func_802D27D0(void) {
    char *b = D_8007BF58;
    *(f32 *)(b + 0x1E8) = *(f32 *)(b + 0x1E8) + (*(f32 *)(b + 0x1F4) - *(f32 *)(b + 0x1E8)) / D_80030C70;
    *(f32 *)(b + 0x1EC) = *(f32 *)(b + 0x1EC) + (*(f32 *)(b + 0x1F8) - *(f32 *)(b + 0x1EC)) / D_80030C70;
    *(f32 *)(b + 0x1F0) = *(f32 *)(b + 0x1F0) + (*(f32 *)(b + 0x1FC) - *(f32 *)(b + 0x1F0)) / D_80030C70;
}
