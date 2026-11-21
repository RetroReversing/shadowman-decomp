/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_8002DBD4;
extern int D_8002DBE4;
s32 func_80237F4C();
s32 func_802397D0();
s32 func_8023981C();
s32 func_80239A3C();
s32 func_80247574();
extern char D_8002D390[];
extern char D_8002DBD0[];
extern char D_8002DC0C[];
extern char D_80031C50[];
extern s32 D_80072BFC;
extern s32 D_80075558;
extern f32 D_80075584;
extern s32 D_8007B0F8;

void func_80247518(void) {
    s32 *__base_D_80072BFC;
    s32 sp10[3];
    register void *temp_v0;

    if (D_8007B0F8 != 0) {
        func_80237F4C(D_80031C50);
    }
    __base_D_80072BFC = &D_80072BFC;
    (*__base_D_80072BFC) = 0;
    if (D_8002DBD4 == 0xE) {
        func_80247574(D_8002DBD0);
        return;
    }
    if (D_8002DBE4 == 0xE) {
        temp_v0 = (9 << 6) + (s32)D_80075558;
        sp10[0] = (*(const s32 *)((char *)(temp_v0) + 0x24));
        sp10[1] = (*(const s32 *)((char *)(temp_v0) + 0x28));
        (*(&D_80072BFC)) = 1;
        sp10[2] = (*(const s32 *)((char *)(temp_v0) + 0x2C));
        func_80239A3C(D_80075584, __base_D_80072BFC);
        func_802397D0(D_8002D390);
        func_8023981C(D_8002DC0C);
        (*(s32 *)((char *)(D_8002DC0C) + -0x1C)) = sp10[0];
        (*(s32 *)((char *)(D_8002DC0C) + -0x18)) = sp10[1];
        (*(s32 *)((char *)(D_8002DC0C) + -0x14)) = sp10[2];
        do { func_80237F4C(D_8002DC0C - 0x1C, sp10[0], sp10[1], sp10[2]); } while (0);
    }
}
