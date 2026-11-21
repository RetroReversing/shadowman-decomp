/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8011E320(s32 arg0, s32 arg1) {
    s32 var_a1;
    register s32 var_a2;
    s32 var_a3;

    var_a2 = arg0;
    var_a3 = arg1;
    var_a1 = 0;
    if (var_a2 < 0) {
        var_a3 = -var_a3;
        var_a2 = -(u32)var_a2 - (var_a3 != 0);
        var_a1 = 1;
    }
    if ((var_a2 >> 0) < 0) {

    }
    if (var_a3 < 0) {

    }
    if (var_a1 != 0) {

    }
    return var_a2 >> 0x1F;
}
