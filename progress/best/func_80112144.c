/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void *func_80112144(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16, s32 arg17, s32 arg18, s32 arg19, void *arg20) {
    int temp_v1;
    s32 var_s1;
    void **var_s0;
    void *temp_a0;
    void *temp_a2;
    void *temp_a2_2;
    void *var_a2;
    void *temp_v0;
    void *temp_v0_2;
    register void *temp_a2_3;

    arg17 = arg1;
    var_s1 = 0;
    arg19 = arg3;
    temp_a2 = arg20 + 8;
    (*(s32 *)((char *)(arg20) + 0)) = 0x02000440;
    temp_v1 = arg2 * 2;
    (*(s32 *)((char *)(arg20) + 4)) = temp_v1;
    (*(s32 *)((char *)(arg20) + 8)) = 0x02000580;
    (*(s32 *)((char *)(temp_a2) + 4)) = temp_v1;
    var_a2 = temp_a2 + 8;
    if ((*(s32 *)((char *)(arg0) + 0x14)) > 0) {
        var_s0 = (*(void ***)((char *)(arg0) + 0x1C));
        do {
            temp_v0 = *var_s0;
            arg4 = var_a2;
            temp_a0 = *var_s0;
            var_s0 += 4;
            var_s1 += 1;
            temp_a2_2 = temp_v0_2 + 8;
            temp_v0_2 = (*(void *(**)(void *, s32, s32, s32))((char *)(temp_v0) + 4))(temp_a0, arg17, arg2, arg19);
            temp_a2_3 = temp_a2_2 + 8;
            (*(s32 *)((char *)(temp_v0_2) + 0)) = 0x08000000;
            (*(s32 *)((char *)(temp_v0_2) + 4)) = (s32) (temp_v1 & 0xFFFF);
            (*(s32 *)((char *)(temp_v0_2) + 8)) = 0x0C007FFF;
            (*(s32 *)((char *)(temp_a2_2) + 4)) = 0x06C00440;
            (*(s32 *)((char *)(temp_a2_2) + 8)) = 0x0C007FFF;
            (*(s32 *)((char *)(temp_a2_3) + 4)) = 0x08000580;
            var_a2 = temp_a2_3 + 8;
        } while (var_s1 < (*(s32 *)((char *)(arg0) + 0x14)));
    }
    return var_a2;
}
