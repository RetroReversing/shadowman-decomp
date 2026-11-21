/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802456B4(s32 arg0, s32 arg1) {
    unsigned long temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    if (var_a0 < 0) {
        do {
            var_a0 += 0x168;
        } while (var_a0 < 0);
    }
    if (var_a1 < 0) {
        do {
            var_a1 += 0x168;
        } while (var_a1 < 0);
    }
    temp_v0 = (var_a0 % 360) - (var_a1 % 360);
    var_v1 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = -var_v1;
    }
    temp_v0_2 = var_v1 - 0x168;
    if (var_v1 >= 0xB5) {
        var_v1 = temp_v0_2;
        if (temp_v0_2 < 0) {
            var_v1 = -var_v1;
        }
    }
    return var_v1;
}
