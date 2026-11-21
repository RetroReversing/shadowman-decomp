/* identical to func_80269894 (matched), with its names changed by decompdecomp */
extern u8 D_80030F28[];
extern u16 D_80030F08, D_80030F0A, D_80030F0C;
extern struct { char pad[0x6C]; s32 a; s32 b; } D_80075AA8;
void func_8026A714(void *, f32, f32, f32, s32);

void func_80269998(void) {
    if (D_80075AA8.b != 0) {
        func_8026A714(D_80030F28, 10.0f, 0.0f, (f32)D_80075AA8.b,
            (((D_80030F08 << 8) & ~0x7FF) | ((D_80030F0A << 3) & 0x7C0) | ((D_80030F0C >> 2) & 0x3E) | 1) & 0xFFFF);
    }
    if (D_80075AA8.b != D_80075AA8.a) {
        func_8026A714(D_80030F28, 10.0f, (f32)D_80075AA8.b, (f32)D_80075AA8.a, 0x2001);
    }
    if (D_80075AA8.a != 10000) {
        func_8026A714(D_80030F28, 10.0f, (f32)D_80075AA8.a, 10000.0f, 0);
    }
}
