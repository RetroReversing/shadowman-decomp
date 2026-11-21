/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_80075F50;
s32 func_8022C730();
s32 func_8023B8B8();
s32 func_802BF468();
s32 func_802BFAE8();
s32 func_802BFBB0();
s32 func_802BFD18();
s32 func_802BFDA8();
extern char D_209890[];
extern s32 D_8004563C;
extern char D_80045640[];
extern char D_8004AE48[];
extern s32 D_80074BB0;
extern char D_80075560[];
extern s32 D_800755CC;
extern char D_80075F20[];

void func_802BFC3C(void) {
    char *__base_D_209890;
    register s32 *__base_D_8004563C;
    register void *temp_v0;

    if (D_80075F50 & 0x20) {
        func_802BFD18();
        return;
    }
    if (D_80075F50 & 0x40) {
        func_802BFD18();
        return;
    }
    if (D_80075F50 & 0x80) {
        func_802BFD18();
        return;
    }
    if (D_80075F50 & 0x100) {
        func_802BFD18();
        return;
    }
    if (D_80075F50 & 0x200) {
        func_802BFD18();
        return;
    }
    __base_D_209890 = D_209890;
    if ((*(s16 *)((char *)((((unsigned)D_80074BB0 * 0x34) + __base_D_209890)) + 8)) != 0) {
        __base_D_8004563C = &D_8004563C;
        temp_v0 = ((*__base_D_8004563C) * 6) + (unsigned)D_80045640;
        (*__base_D_8004563C) = 0;
        func_8023B8B8(D_8004AE48, (*(s16 *)((char *)(temp_v0) + 0)), (*(s16 *)((char *)(temp_v0) + 2)), &D_800755CC, D_80075560);
        if ((*__base_D_8004563C) != 0) {
            func_8022C730((*(s16 *)((char *)((((*__base_D_8004563C) * 6) + D_80045640)) + 4)), (*(s32 *)((char *)((&D_800755CC - 0x64)) + 0x80)), 0);
            func_802BFDA8();
            return;
        }
        func_802BF468(1);
        if (D_80075F50 & 4) {
            func_802BFBB0(D_800755CC, 0x3F000000);
        }
        if (D_80075F50 & 0x400) {
            func_802BFAE8(*(f32 *)0x2181D4);
        }
    } else {
        func_802BFD18(__base_D_209890);
    }
}
