extern char *D_8007AFF8;
extern char *D_8006A4FC;

f32 func_80272260(void) {
    f32 a = *(f32 *)(D_8007AFF8 + 0x84);
    f32 v = *(f32 *)(D_8006A4FC + 0x1C) - a;
    if (v < 0.0f) {
        v += *(f32 *)0x213FD8;
    }
    if (*(f32 *)0x213FDC < v) {
        v -= *(f32 *)0x213FDC;
    }
    return v;
}
