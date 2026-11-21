/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

u32 func_801049E4(u8 *arg0, u32 arg1) {
    u32 var_v1;
    u32 var_a2;
    u8 *var_v0;

    var_v1 = 0;
    var_a2 = 0;
    if (arg1 != 0) {
        var_v0 = arg0;
        do {
            var_v0 = arg0 + var_v1;
            var_v1 += 1;
            var_a2 += *var_v0;
        } while (var_v1 < arg1);
    }
    return var_a2;
}
