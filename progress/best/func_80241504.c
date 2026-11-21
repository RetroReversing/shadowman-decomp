/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80241614(f32, f32);                        /* extern */

s32 func_80241504(void *arg0, void *arg1, f32 arg2, void *arg3, f32 arg4) {
    f32 temp_fa0;
    f32 temp_fa0f;
    f32 temp_fa1;
    f32 temp_fa1f;
    f32 temp_fa1f_2;
    f32 temp_ft3;
    f32 temp_ft1_2;
    f32 temp_ft1_3;
    f32 temp_ft1f;
    f32 temp_ft1f_2;
    f32 temp_ft1f_3;
    f32 temp_ft2;
    f32 temp_ft2_2;
    f32 temp_ft2_3;
    f32 temp_ft2f;
    f32 temp_ft1;
    f32 temp_ft3f;
    f32 temp_ft4;
    f32 temp_ft4f;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    long var_v0;

    temp_fa1f_2 = temp_fa1f * temp_fa1f;
    temp_fa1f = arg4 + arg2;
    temp_fv1 = (*(f32 *)((char *)(arg1) + 4));
    temp_ft4f = (*(f32 *)((char *)(arg0) + 4));
    temp_ft3 = temp_fv1 - temp_ft4f;
    temp_fv0f = (*(f32 *)((char *)(arg1) + 8));
    temp_ft4 = (*(f32 *)((char *)(arg0) + 8));
    temp_ft2f = temp_fv0f - temp_ft4;
    temp_fa0f = (*(f32 *)((char *)(arg3) + 4));
    temp_ft1f = temp_fa0f - temp_fv1;
    temp_ft3f = (*(f32 *)((char *)(arg3) + 8));
    temp_ft2 = temp_ft3f - temp_fv0f;
    temp_fa1 = (*(f32 *)((char *)(arg3) + 0));
    temp_fv0 = (*(f32 *)((char *)(arg1) + 0));
    temp_ft1 = temp_fa1 - temp_fv0;
    temp_ft5 = (*(f32 *)((char *)(arg0) + 0));
    temp_fa0 = temp_fv0 - temp_ft5;
    temp_fv1f = (temp_fa0 * temp_fa0) + (temp_ft3 * temp_ft3) + (temp_ft2f * temp_ft2f);
    if (((temp_ft1 * temp_ft1) + (temp_ft1f * temp_ft1f) + (temp_ft2 * temp_ft2)) < temp_fa1f_2) {
        /* Duplicate return node #1. Try simplifying control flow for better match */
        return 1;
    }
    temp_ft1_2 = temp_fa1 - temp_ft5;
    temp_ft1f_2 = temp_fa0f - temp_ft4f;
    temp_ft2_2 = temp_ft3f - temp_ft4;
    if (!(((temp_ft1_2 * temp_ft1_2) + (temp_ft1f_2 * temp_ft1f_2) + (temp_ft2_2 * temp_ft2_2)) < temp_fa1f_2)) {
        if (temp_fv1f == 0.0f) {
            return func_80241614(temp_fa0, temp_fa1);
        }
        temp_fv1f_2 = ((temp_ft1_2 * temp_fa0) + (temp_ft1f_2 * temp_ft3) + (temp_ft2_2 * temp_ft2f)) / temp_fv1f;
        if ((temp_fv1f_2 < 0.0f) || (*(f32 *)0x20279C < temp_fv1f_2)) {
            return 0;
        }
        temp_ft1_3 = (*(f32 *)((char *)(arg3) + 0)) - ((*(f32 *)((char *)(arg0) + 0)) + (temp_fa0 * temp_fv1f_2));
        temp_ft1f_3 = (*(f32 *)((char *)(arg3) + 4)) - ((*(f32 *)((char *)(arg0) + 4)) + (temp_ft3 * temp_fv1f_2));
        temp_ft2_3 = (*(f32 *)((char *)(arg3) + 8)) - ((*(f32 *)((char *)(arg0) + 8)) + (temp_ft2f * temp_fv1f_2));
        var_v0 = 1;
        if (!(((temp_ft1_3 * temp_ft1_3) + (temp_ft1f_3 * temp_ft1f_3) + (temp_ft2_3 * temp_ft2_3)) < temp_fa1f_2)) {
            var_v0 = 0;
        }
        return var_v0;
    }
    return 1;
}
