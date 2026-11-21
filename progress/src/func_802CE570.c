void func_8023DF7C(void *, void *, s32, s32, s32, s32);
void func_8026B618(s32, s32);
extern s32 D_8002D424;
extern u8 D_80075568[];
extern struct { u8 pad[0x44]; u8 *p; } D_80075518;

void func_802CE570(void) {
    if (D_8002D424 & 0x200) {
        *(f32 *)(D_80075518.p + 0x20C) = *(f32 *)0x21883C;
        func_8023DF7C(D_80075568, &D_80075518, 0xF5, 0xA, 0x14, 1);
    } else {
        func_8026B618(1, 0);
    }
}
