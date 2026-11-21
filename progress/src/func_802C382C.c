void func_8023DF7C(void *, void *, s32, s32, s32, s32);
s32 func_80265464();
extern s32 D_8002D420;
extern u16 D_8004541C;
extern char D_80075518[];
extern struct { char pad[0x18]; s32 f18; } D_80075568;

void func_802C382C(void) {
    if (func_80265464() != 0) {
        D_80075568.f18 = 0;
        if (D_8004541C != 0) {
            func_8023DF7C(&D_80075568, D_80075518, 0x30, 0xA, 0x28, 2);
        }
        if (((D_8002D420 & 0x24) == 0x24) || (D_8002D420 & 0x800000)) {
            func_8023DF7C(&D_80075568, D_80075518, 0xA2, 0xA, 0x2D, 2);
        }
        if (((D_8002D420 & 0x28) == 0x28) || (D_8002D420 & 0x01000000)) {
            func_8023DF7C(&D_80075568, D_80075518, 0xA3, 0xA, 0x2D, 2);
        }
    }
}
