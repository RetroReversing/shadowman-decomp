typedef struct { char b[28]; short s; } S;
extern S D_202520[];
extern S D_8006A4D0;
f32 func_802DB218(f32 arg0) {
    D_8006A4D0 = D_202520[(s32)arg0];
    return arg0;
}
