s32 func_80269374(void);
extern struct { s32 pad0[5]; s32 f14; s32 pad1[8]; s32 f38; s32 f3C; s32 pad2[8]; s32 f60; } D_80075AA8;

s32 func_8026A548(void) {
    if (D_80075AA8.f60 != 0 || !(D_80075AA8.f14 & 2)) {
        D_80075AA8.f38 = 1;
        D_80075AA8.f60 = 0;
        D_80075AA8.f3C = 0xB4;
    }
    if (D_80075AA8.f14 & 2) {
        if (--D_80075AA8.f3C < 0) {
            D_80075AA8.f38 = 0;
        }
    }
    if (D_80075AA8.f38 == 1) {
        func_80269374();
    }
    return D_80075AA8.f38;
}
