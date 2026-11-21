/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80233D40(s32);                             /* extern */
extern s32 D_8005E9FC;

void func_802D170C(void *arg0, s32 arg1) {
    register unsigned var_s1;
    void *var_s0;

    var_s1 = arg1;
    var_s0 = arg0;
    do {
        var_s1 -= 1;
        (*(s32 *)((char *)(var_s0) + 4)) = func_80233D40(D_8005E9FC);
        var_s0 += 8;
    } while (var_s1);
}
