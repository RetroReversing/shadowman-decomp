/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_802701A4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 temp_fa1;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 var_fv0;

    temp_fv0 = arg0 - arg3;
    temp_fa1 = arg1 - arg4;
    var_fv0 = ((temp_fa1 * temp_fa1) + (temp_fv0f * temp_fv0f)) + ((temp_fv0 * temp_fv0));
    temp_fv0f = arg2 - arg5;
    if (!(var_fv0 < (arg6 * arg6))) {
        var_fv0 = *(f32 *)0x213F44;
    }
    return var_fv0;
}
