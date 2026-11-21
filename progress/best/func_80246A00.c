extern u32 D_80075F50;

f32 func_80246A00(f32 arg0) {
    u32 v = (u32)arg0;
    v &= ~0x3A0;
    D_80075F50 = v;
    return v;
}
