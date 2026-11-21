/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023646C(s32, s32);                         /* extern */
s32 func_802D15C4();                                /* extern */
extern void *D_8005E9F0;
extern s32 D_8005E9FC;

s32 func_802D1544(s32 arg0) {
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 var_s1;
    s32 var_s1_2;
    unsigned int var_s2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;

    temp_v0 = (*(s16 *)((char *)(D_8005E9F0) + 0x20));
    var_s4 = (s32)arg0;
    if (temp_v0 > 0) {
        var_s1 = 1;
        do {
            var_s1 += 1;
        } while (var_s1 < temp_v0);
    }
    var_s1_2 = 0;
    if ((*(s16 *)((char *)(D_8005E9F0) + 0x20)) > 0) {
        var_s2 = 0;
loop_5:
        (*(s32 *)((char *)((var_s2 + (*(s32 *)((char *)(D_8005E9F0) + 8)))) + 0x20)) = var_s4;
        temp_v1 = (*(s16 *)((char *)(D_8005E9F0) + 0x20));
        var_v0 = temp_v1 + 7;
        if (var_v0 < 0) {
            var_v0 = temp_v1 + 0xE;
        }
        if ((var_v0 >> 3) > 0) {
            func_8023646C(arg0, D_8005E9FC);
            return func_802D15C4();
        }
        temp_v1_2 = (*(s16 *)((char *)(D_8005E9F0) + 0x20));
        var_v0_2 = temp_v1_2 + 7;
        if (var_v0_2 < 0) {
            var_v0_2 = temp_v1_2 + 0xE;
        }
        var_s4 += var_v0_2 >> 3;
        var_s2 += 0x28;
        var_s1_2 += 1;
        if (var_s1_2 >= temp_v1_2) {
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return var_s4;
        }
        goto loop_5;
    }
    return var_s4;
}
