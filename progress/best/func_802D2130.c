/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_80045930;

s32 func_802D2130(s32 arg0) {
    s32 *var_v1;
    s32 var_a1;
    s32 var_a2;

    var_a2 = -1;
    var_a1 = 0;
    arg0 &= 0xFF;
    var_v1 = &D_80045930;
loop_1:
    if (var_a2 == -1) {
        if (((*(u8 *)((char *)(var_v1) + 0x10)) == arg0) && ((*(s32 *)((char *)(var_v1) + 8)) != 0)) {
            var_a2 = var_a1;
        }
        var_a1 += 1;
        var_v1 += 5;
        if (var_a1 < 0x14) {
            goto loop_1;
        }
    }
    return var_a2;
}
