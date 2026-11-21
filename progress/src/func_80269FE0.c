typedef struct { u8 pad[0x84]; s32 v; } S;
typedef struct { s32 a[3]; } V;
extern S D_80075AA8;
extern s32 D_80075B00;
extern V D_20E260;
s32 func_80260368(s32);

s32 func_80269FE0(s32 a0) {
    V arr;
    s32 v;
    s32 t;
    arr = D_20E260;
    v = D_80075AA8.v + a0;
    D_80075AA8.v = v;
    if (v < 0) {
        a0 -= v;
        D_80075AA8.v = 0;
    } else {
        t = arr.a[func_80260368(0)];
        if (t < D_80075AA8.v) {
            a0 -= D_80075AA8.v - t;
            D_80075AA8.v = t;
        }
    }
    if (a0 != 0) {
        D_80075B00 = 1;
    }
    return a0;
}
