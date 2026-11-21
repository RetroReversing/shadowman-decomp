/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s8 func_8023646C();
u16 func_8023648C();
extern s32 D_8005E9FC;

void func_8023343C(u16 *arg0, s32 arg1) {
    s32 *__base_D_8005E9FC;
    u16 temp_a1;
    s32 var_s5;
    char *var_s4;
    u16 temp_s0;
    u16 temp_s1;
    u16 temp_v0;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    void *var_s2;

    var_s4 = arg0;
    var_s2 = var_s4 + 0x24;
    var_s5 = arg1;
    do {
        (*(s32 *)((char *)(var_s2) + -4)) = 0;
        __base_D_8005E9FC = &D_8005E9FC;
        (*(u16 *)((char *)(var_s2) + -0x22)) = func_8023648C((*__base_D_8005E9FC));
        *(u16 *)var_s4 = func_8023648C((*__base_D_8005E9FC));
        (*(u16 *)((char *)(var_s2) + -0xC)) = func_8023648C((*__base_D_8005E9FC));
        (*(u16 *)((char *)(var_s2) + -0xA)) = func_8023648C((*__base_D_8005E9FC));
        (*(u16 *)((char *)(var_s2) + -8)) = func_8023648C((*__base_D_8005E9FC));
        (*(u16 *)((char *)(var_s2) + -6)) = func_8023648C((*__base_D_8005E9FC));
        temp_s0 = func_8023648C((*__base_D_8005E9FC));
        temp_s1 = func_8023648C((*__base_D_8005E9FC));
        temp_v0 = func_8023648C((*__base_D_8005E9FC));
        temp_v1 = (*(u16 *)((char *)(var_s2) + -0xC));
        (*(s16 *)((char *)(var_s2) + -0x18)) = (s16) (temp_v1 - temp_s0);
        temp_v1_2 = (*(u16 *)((char *)(var_s2) + -0xA));
        (*(s16 *)((char *)(var_s2) + -0x16)) = (s16) (temp_v1 + temp_s0);
        (*(s16 *)((char *)(var_s2) + -0x14)) = (s16) (temp_v1_2 - temp_s1);
        temp_v1_3 = (*(u16 *)((char *)(var_s2) + -8));
        (*(s16 *)((char *)(var_s2) + -0x12)) = (s16) (temp_v1_2 + temp_s1);
        temp_a1 = temp_v1_3 + temp_v0;
        (*(s16 *)((char *)(var_s2) + -0x10)) = (s16) (temp_v1_3 - temp_v0);
        (*(s16 *)((char *)(var_s2) + -0xE)) = temp_a1;
        (*(s8 *)((char *)(var_s2) + -0x1A)) = func_8023646C((*__base_D_8005E9FC));
        var_s4 += 0x28;
        (*(s8 *)((char *)(var_s2) + -0x19)) = func_8023646C((*__base_D_8005E9FC));
        var_s5 -= 1;
        (*(s8 *)((char *)(var_s2) + 0)) = func_8023646C((*__base_D_8005E9FC));
        var_s2 += 0x28;
    } while (var_s5 != 0);
}
