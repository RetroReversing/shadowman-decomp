extern u16 D_8007551C;
extern s32 D_800753E4;
extern u8 D_8007DB78[];
extern s32 D_80030E34;
extern f32 D_80045440;
extern s32 func_8026E2F4(s32);

s32 func_802C13A8(void) {
    u8 *p;
    if (D_8007551C - 0x8C >= 2U && D_8007551C - 0x88 >= 2U && (s16)D_8007551C != 0x7E) {
        if (D_800753E4 == 0 || D_800753E4 == 6) {
            p = D_8007DB78;
            if (p[0x23] == 0 && D_80030E34 < 3 && D_80045440 == *(f32 *)0x2182A0) {
                if (func_8026E2F4(0x1A) != 0 || p[0x8D] == 0) return 1;
            }
        }
    }
    return 0;
}
