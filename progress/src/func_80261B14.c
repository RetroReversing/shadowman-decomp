#define F(e, t, o) (*(t *)((u8 *)(e) + (o)))
s32 func_80239398();
void *func_8023C3E0();
s32 func_8023C43C();
s32 func_80261408();
s32 func_8026E67C();
s32 func_802D0B28();
extern char D_24F54C[];
extern s32 D_8005EA0C;
extern s32 D_8005EA14;

s32 func_80261B14(void *arg0, s32 arg1) {
    void *s0;

    s0 = func_8023C3E0();
    func_802D0B28(D_8005EA14, F(arg0, s16, 0x24), 1);
    F(s0, u8, 0x71) = F(arg0, u8, 0x25);
    F(s0, u16, 0x7A) = F(arg0, u16, 0x1A);
    F(s0, u16, 0x7C) = F(arg0, u16, 0x1E);
    F(s0, f32, 0x24) = F(arg0, f32, 4);
    F(s0, f32, 0x28) = F(arg0, f32, 8);
    F(s0, f32, 0x2C) = F(arg0, f32, 0xC);
    if (func_8026E67C(s0) != -1) {
        func_8023C43C(s0);
        return 0;
    } else {
        F(s0, f32, 0xC) = F(arg0, s32, 0x18);
        F(s0, f32, 0x10) = F(arg0, s32, 0x18);
        F(s0, s32, 0x88) = func_80239398(*(s32 *)((D_8005EA0C * 4) + func_80261408()), s0, arg1, D_24F54C, 0x20000);
        return 1;
    }
    func_8023C43C(s0);
    return 0;
}
