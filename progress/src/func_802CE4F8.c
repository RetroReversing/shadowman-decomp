void func_8023DF7C(void *, void *, s32, s32, s32, s32);
void func_8026B618(s32, s32);
extern s32 D_8002D424;
extern u8 D_80075568[];
extern struct { u8 pad[0x44]; u8 *p; } D_80075518;

void func_802CE4F8(void) {
    if (D_8002D424 & 0x100) {
        func_8023DF7C(D_80075568, &D_80075518, 0xF2, 0xA, 0x14, 0);
        *(f32 *)(D_80075518.p + 0x14C) = *(f32 *)0x218838;
    } else {
        func_8026B618(0, 0);
    }
}
