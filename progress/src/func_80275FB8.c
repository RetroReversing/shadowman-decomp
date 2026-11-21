extern signed char D_8007AFE1;
extern signed char D_8007AFE0;
s32 func_8027363C();
s32 func_80275F40();
extern char D_8004EC80[];
extern s32 D_80074BB0;
extern s8 D_8007AFA4;
extern s8 D_8007AFBC;
extern s8 D_8007AFE2;
extern s8 D_8007B008;

void func_80275FB8(void) {
    s32 temp_v0;
    s32 var_a0;

    var_a0 = 6;
    D_8007B008 = 1;
    D_8007AFA4 = 1;
    D_8007AFBC = 1;
    D_8007AFE2 = 1;
    D_8007AFE1 = 1;
    do {
        var_a0 -= 1;
        *(var_a0 + D_8004EC80) = 0;
    } while (var_a0 != 0);
    D_8007AFE0 = 0;
    if ((D_80074BB0 == 3) || (D_80074BB0 == 0x13)) {
        temp_v0 = func_80275F40(0x1F);
        if (temp_v0 != 0) {
            func_8027363C(temp_v0, 0x10);
        }
    }
}
