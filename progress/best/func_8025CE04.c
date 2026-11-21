/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802D0850(s32 *);                   /* extern */
extern s32 D_20A16C;
extern s32 D_80030C74;
extern s8 D_80030E58;
extern s8 D_80030E59;
extern s32 D_8005276C;
extern s32 D_8005E9CC;
extern s32 D_80074BF8;
extern s8 D_80074C00;
extern s32 D_80075508;
extern s8 D_8007DB7B;

void func_8025CE04(void) {
    D_8005276C = 1;
    func_802D0850(&D_20A16C);
    D_80030C74 = 5;
    D_80074BF8 = 0x20;
    D_80074C00 = 0;
    D_8005E9CC = -1;
    D_8007DB7B = 0;
    (*(s32 *)((char *)(&D_80075508) + 0)) = 0;
    (*(s32 *)((char *)(&D_80075508) + 4)) = 0;
    D_80030E58 = 0;
    D_80030E59 = 0;
}
