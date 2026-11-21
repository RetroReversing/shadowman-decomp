/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s16 func_8023648C();
extern char D_209890[];
extern s32 D_8005E9FC;
extern s32 D_80074BB0;

void func_802D175C(s16 *arg0, s32 arg1) {
    s32 *__base_D_8005E9FC;
    char *__base_D_209890;
    char *var_s1;
    s16 temp_s2;
    s16 temp_v0;
    s32 var_s3;
    void *var_s0;

    var_s1 = arg0;
    var_s0 = var_s1 + 4;
    var_s3 = arg1;
    do {
        __base_D_8005E9FC = &D_8005E9FC;
        *(s16 *)var_s1 = func_8023648C(arg0, (*__base_D_8005E9FC));
        (*(s16 *)((char *)(var_s0) + -2)) = func_8023648C((*__base_D_8005E9FC));
        temp_v0 = func_8023648C((*__base_D_8005E9FC));
        temp_s2 = func_8023648C((*__base_D_8005E9FC));
        __base_D_209890 = D_209890;
        if (!((*(u8 *)((char *)(((D_80074BB0 * 0x34) + __base_D_209890)) + 0x30)) & 1)) {
            (*(s16 *)((char *)(var_s0) + 0)) = temp_s2;
        } else {
            (*(s16 *)((char *)(var_s0) + 0)) = temp_v0;
        }
        var_s0 += 6;
        var_s3--;
        var_s1 += 6;
    } while (var_s3 != 0);
}
