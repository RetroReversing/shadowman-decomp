void func_80266BA4(s32 a, s32 b, s32 c);
extern s32 D_8002D2B4;
extern s32 **D_80030C58;
extern s32 **D_80030C5C;

void func_80266D74(s32 arg0, s32 arg1) {
    if (arg0 & 1) {
        func_80266BA4(*D_80030C5C[D_8002D2B4], arg0, arg1);
    }
    arg0 &= ~1;
    if (arg0 != 0) {
        func_80266BA4(*D_80030C58[D_8002D2B4], arg0, arg1);
    }
}
