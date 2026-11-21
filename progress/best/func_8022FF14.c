/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_80059874;
extern u16 D_80059880;

s32 func_8022FF14(s32 arg0) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    char *var_v1;
    char *var_v1_2;
    u16 temp_v0;

    var_a1 = 0;
    if (!(arg0 & 0xFF)) {
        var_a0 = D_80059880 - 1;
        if (var_a0 != 0) {
            var_v1 = (var_a0 * 8) + D_80059874;
            do {
                if (*(u16 *)var_v1 == 0xFFFF) {
                    var_a1 += 1;
                }
                var_v1 -= 8;
                var_a0--;
            } while (var_a0 != 0);
            return var_a1 << 8;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return var_a1 << 8;
    }
    var_a0_2 = D_80059880 - 1;
    if (var_a0_2 != 0) {
        var_v1_2 = (var_a0_2 * 8) + D_80059874;
        do {
            temp_v0 = *(u16 *)var_v1_2;
            if ((temp_v0 != 0xFFFF) && (temp_v0 & 0x8000)) {
                var_a1 += 1;
            }
            var_a0_2 -= 1;
            var_v1_2 -= 8;
        } while (var_a0_2 != 0);
    }
    return var_a1 << 8;
}
