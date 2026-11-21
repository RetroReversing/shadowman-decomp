extern short D_80075546;
extern float D_80075578;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023DF7C();
s32 func_802C71E4();
s32 func_802CC190();
extern s32 D_8002D420;
extern s32 D_80030E40;
extern f32 D_800458A8;
extern char D_80075518[];
extern char D_80075568[];

void func_802C76CC(void) {
    s32 *__base_D_80030E40;
    if (D_80075546 == 0) {
        (*(s32 *)((char *)(__base_D_80030E40) + 0)) = 0;
        __base_D_80030E40 = &D_80030E40;
    }
    if (D_80075578 <= 0.0f) {
        if (D_80075546 >= 7) {
            func_8023DF7C(D_80075568, D_80075518, 0x97, 0xA, 0x28, 2);
        }
    }
    if ((*(s32 *)((char *)(__base_D_80030E40) + 0)) >= 0x19) {
        func_8023DF7C(D_80075568, D_80075518, 0x97, 0xA, 0x4B, 2);
    }
    if (D_8002D420 & 0x80) {
        (*(f32 *)((char *)(__base_D_80030E40) + 8)) = (f32) D_800458A8;
    }
    func_802C71E4();
    func_802CC190();
}
