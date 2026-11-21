typedef struct { int a, b, c; } V3;
extern V3 D_8007C330;
extern struct { char pad[0x24]; V3 v; } D_80075568;
s32 func_8022DDD0();
s32 func_802D2B40();
extern s8 D_80075F21;

void func_802D3C24(void) {
    func_8022DDD0(1, 0x20, 0, 0, 0);
    D_80075568.v = D_8007C330;
    func_802D2B40(D_80075F21);
}
