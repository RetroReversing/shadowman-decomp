typedef struct { s32 x, y, z; } V3;
s32 func_8010E8F0(V3 *, void *, float);
s32 func_8023E724(s32, s32, s32 *, V3 *);
extern u8 *D_8007AFF8;
extern u8 *D_8007B0C0;

void func_80278F9C(void) {
    s32 sp10[3];
    V3 sp20;

    sp10[0] = 0;
    sp10[1] = 0;
    sp10[2] = 0;
    func_8023E724(*(s32 *)(D_8007AFF8 + 0x10C), 0x17, sp10, &sp20);
    if (D_8007B0C0[0x66] == 0) {
        if (func_8010E8F0(&sp20, D_8007B0C0 + 0x15C, 15.000001f) & 0xFF) {
            D_8007B0C0[0x66] = 1;
        }
    }
    *(V3 *)(D_8007B0C0 + 0x15C) = sp20;
}
