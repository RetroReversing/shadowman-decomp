extern s32 D_80031200;
extern s32 D_800311FC;
extern s16 D_8007B0A2;
extern void func_8027035C(void);
extern s32 func_8029224C(void);
extern void func_8029215C(s16, s32);

void func_80274CD0(void) {
    if (D_80031200 == -1) {
        func_8027035C();
        D_80031200 = D_8007B0A2;
    }
    if (D_80031200 >= 0) {
        if (func_8029224C() < D_80031200) {
            D_80031200 = -1;
        } else {
            func_8029215C(((s16 *)&D_80031200)[1], 0x23);
            D_800311FC = D_80031200;
            D_80031200 = -1;
        }
    }
}
