extern u8 D_8007DB7F;
extern struct { char pad[0x6C]; s32 a; s32 b; } D_80075AA8;
extern s16 D_80030F0A;
extern f32 D_80075AA0;
extern s32 D_80075AEC;

s32 func_80269DC8(s32 arg0) {
    s32 t;
    if (D_8007DB7F == 1) {
        return arg0;
    }
    t = D_80075AA8.b + arg0;
    D_80075AA8.b = t;
    if (t <= 0) {
        arg0 -= t;
        D_80075AA8.b = 0;
    } else {
        D_80030F0A = 0xFF;
        D_80075AA0 = *(f32 *)0x20E258;
        if (D_80075AA8.a < t) {
            arg0 -= t - D_80075AA8.a;
            D_80075AA8.b = D_80075AA8.a;
        }
    }
    if (arg0 != 0) {
        D_80075AEC = 1;
    }
    return arg0;
}
