extern f32 D_80030F10;
extern s16 D_80030F14;
extern s16 D_80030F16;
extern s16 D_80030F18;
extern f32 D_80075AA0;
extern char D_80075AA8[];
extern s32 D_80075AF4;

void func_80268ED8(s32 arg0, s32 arg1) {
    char *b = D_80075AA8;
    s32 *p = (s32 *)(b + arg0 * 4);
    if (p[27] == arg1) {
        D_80075AA0 = *(f32 *)0x20E1E4;
    } else {
        p[27] = arg1;
        D_80075AA0 = *(f32 *)0x20E1E8;
    }
    D_80075AF4 = 1;
    D_80030F14 = 0xFF;
    D_80030F10 = *(f32 *)0x20E1EC;
    D_80030F16 = 0;
    D_80030F18 = 0xFF;
}
