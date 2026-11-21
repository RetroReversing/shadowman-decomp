/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_801154E0(u32 arg0) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    u32 temp_v1;
    u32 var_a0;

    var_a0 = arg0;
    var_a1 = 0;
    var_a3 = 0xF;
    do {
        var_a2 = 0;
        if (var_a1 & 0x10) {
            var_a2 = 0x15;
        }
        var_a0 *= 2;
        temp_v1 = var_a0 >> 0xA;
        temp_v0 = (((var_a1 * 2) & 0xFF) | (temp_v1 & 1)) ^ var_a2;
        var_a1 = temp_v0;
        var_a3 -= 1;
    } while (0 <= var_a3);
    return temp_v0 & 0x1F;
}
