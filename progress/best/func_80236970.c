/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_80236970(void *arg0, void *arg1, f32 arg2) {
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1f;
    f32 var_fv0;

    temp_fv0 = (*(f32 *)((char *)(arg0) + 0)) - (*(f32 *)((char *)(arg1) + 0));
    temp_fv1f = (*(f32 *)((char *)(arg0) + 4)) - (*(f32 *)((char *)(arg1) + 4));
    var_fv0 = ((temp_fv1f * temp_fv1f) + (temp_fv0f * temp_fv0f)) + ((temp_fv0 * temp_fv0));
    temp_fv0f = (*(f32 *)((char *)(arg0) + 8)) - (*(f32 *)((char *)(arg1) + 8));
    if (!(var_fv0 < (arg2 * arg2))) {
        var_fv0 = 0.0f;
    }
    return var_fv0;
}
