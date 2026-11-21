/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_8002DBE4;
extern int D_8002DBD4;
s32 func_8023DF7C();
s32 func_80246F50();
s32 func_802601C0();
extern char D_8002DBD0[];
extern s16 D_80030630;
extern char D_80075518[];
extern char D_80075568[];

void func_802600F8(s32 arg0) {
    char *__base_D_80075568;
    char *var_v1;
    s32 var_a2;

    var_a2 = 0;
    var_v1 = &D_80030630;
loop_1:
    if (*(s16 *)var_v1 != 7) {
        var_a2 += 1;
        var_v1 += 0x20;
        if (var_a2 >= 0x1E) {
            return;
        }
        goto loop_1;
    }
    switch (arg0) {                                 /* irregular */
    case 0:
        if (D_8002DBE4 == 7) {
            func_8023DF7C(__base_D_80075568, D_80075518, -1, 0xA, 0x28, 0);
            __base_D_80075568 = D_80075568;
            func_802601C0();
            return;
        }
        if (arg0 != 1) {
            /* Duplicate return node #16. Try simplifying control flow for better match */
            func_80246F50(7, arg0, var_a2);
            func_802601C0();
            return;
        }
    case 1:
        if (D_8002DBD4 != 7) {
        default:
            func_80246F50(7, arg0, var_a2);
            func_802601C0();
            return;
        }
        func_8023DF7C(__base_D_80075568 + 0x5568, D_80075518, -1, 0xA, 0x28, arg0);
        func_802601C0();
        return;
    }
}
