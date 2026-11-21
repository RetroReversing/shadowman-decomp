extern s32 D_8002D424;
extern s32 D_8002DBD0[];
extern s32 D_80075518;
extern s32 D_80075568;
void func_8023DF7C(s32 *, s32 *, s32, s32, s32, s32);

void func_802C9B90(void) {
    if (D_8002D424 & 0x80) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x5A, 0xA, 0x28, 2);
    }
    if (D_8002DBD0[2] == 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x37, 0xA, 0x28, 2);
    }
    if (D_8002DBD0[6] != 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x5A, 0xA, 0x28, 2);
    }
}
