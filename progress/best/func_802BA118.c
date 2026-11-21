/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern u8 D_80036E30[];

s32 func_802BA118(s32 arg0, u32 arg1) {
    s32 *__base_D_80036E30;
    char *var_v1;
    s32 var_a2;
    
s32 __repair_phase_var_v0;
    s32 var_v0_2;

    if (arg1 >= 4U) {
        return -1;
    }
    __base_D_80036E30 = D_80036E30;
    var_a2 = -1;
    if ((*D_80036E30) != -1) {
        var_v0_2 = *var_v1;
        var_v1 = __base_D_80036E30;
        var_a2 = 0;
loop_6:
        var_v1 += 0x18;
        if (var_v0_2 != arg0) {
            var_v0_2 = *(s32 *)var_v1;
            var_a2 += 0x18;
            if ((s32)var_v0_2 == -1) {
    return -1;
            }
            goto loop_6;
        }
        __repair_phase_var_v0 = (*(s32 *)((char *)(((arg1 * 4) + var_a2 + D_80036E30)) + 8));
        /* Duplicate return node #3. Try simplifying control flow for better match */
        return __repair_phase_var_v0;
    }
    return var_a2;
}
