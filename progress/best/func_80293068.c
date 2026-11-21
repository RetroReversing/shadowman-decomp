/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_80292E80(s32, s32, s32, f32);          /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x50, 0x54], gap at: 0x48. */
void func_80293068(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, s32 arg5) {
    f32 __repair_fzero = 0.0f;

    s32 sp10[2];
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 var_fs0;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s4;
    void *temp_v0_2;
    void *temp_v1;
    void *var_s1;
    void *var_s3;

    var_fs0 = __repair_fzero;
    var_s4 = 0;
    temp_v0 = arg5 - 1;
    if (temp_v0 > 0) {
        var_s3 = arg4;
        sp10[1] = arg1 < 0;
        sp10[0] = temp_v0;
        do {
            (*(f32 *)((char *)(var_s3) + 8)) = __repair_fzero;
            (*(f32 *)((char *)(var_s3) + 4)) = __repair_fzero;
            (*(f32 *)((char *)(var_s3) + 0)) = __repair_fzero;
            var_s2 = 0;
            if (sp10[1] == 0) {
                var_s1 = arg0;
                do {
                    temp_fv0 = func_80292E80(var_s2, arg3, arg2, var_fs0);
                    (*(f32 *)((char *)(var_s3) + 0)) = (f32) ((*(f32 *)((char *)(var_s3) + 0)) + ((*(f32 *)((char *)(var_s1) + 0)) * temp_fv0));
                    (*(f32 *)((char *)(var_s3) + 4)) = (f32) ((*(f32 *)((char *)(var_s3) + 4)) + ((*(f32 *)((char *)(var_s1) + 4)) * temp_fv0));
                    var_s2 += 1;
                    temp_fv0_2 = (*(f32 *)((char *)(var_s3) + 8)) + ((*(f32 *)((char *)(var_s1) + 8)) * temp_fv0);
                    var_s1 += 0xC;
                    (*(f32 *)((char *)(var_s3) + 8)) = temp_fv0_2;
                } while (arg1 >= var_s2);
            }
            var_s3 += 0xC;
            var_s4 += 1;
            var_fs0 += (f32) ((arg1 - arg3) + 2) / (f32) (arg5 - 1);
        } while (var_s4 < sp10[0]);
    }
    temp_v1 = (arg5 * 0xC) + arg4;
    temp_v0_2 = (arg1 * 0xC) + arg0;
    (*(s32 *)((char *)(temp_v1) + -0xC)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0));
    (*(s32 *)((char *)(temp_v1) + -8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 4));
    (*(s32 *)((char *)(temp_v1) + -4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 8));
}
