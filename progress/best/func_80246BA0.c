extern u32 D_80075F50;
f32 func_80246BA0(f32 arg0) {
    u32 v = (u32)arg0;
    v &= ~0x1E0;
    D_80075F50 = v;
    return (f32)v;
}
