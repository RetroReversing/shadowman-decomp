extern u32 D_80075F50;
f32 func_80246AD0(f32 arg0) {
    u32 v = (u32)arg0;
    v |= 0x80000000;
    v &= ~0x360;
    D_80075F50 = v;
    return v;
}
