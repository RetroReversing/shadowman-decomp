/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s16 func_80221120(s32 arg0, s32 arg1, u8 *arg2) {
    int var_a3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    u8 *var_a2;

    var_a2 = arg2;
    var_a3 = 0;
    var_a1 = arg1 - 1;
    if (arg1 != 0) {
loop_2:
        var_a2 += 1;
        temp_v0 = *var_a2 & 0xFF;
        switch (temp_v0) {                          /* irregular */
        case 10:
            /* fallthrough */
        case 0:
            return var_a3;
        default:
            temp_v1 = var_a1;
            var_a1 -= 1;
            var_a3 += (*(u8 *)((char *)((temp_v0 + arg0)) + -0x1F)) + 1;
            if (temp_v1 == 0) {
                /* Duplicate return node #8. Try simplifying control flow for better match */
                return var_a3;
            }
            goto loop_2;
        }
    } else {
        return var_a3;
    }
}
