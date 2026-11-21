/* Draft from identical target func_802736D4, retargeted and judged independently. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80231D44(f32, f32, f32, void*);
extern void *D_8005E9F0;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x38, 0x3c], gap at: 0x30. */
s16 func_80257068(f32 arg0, f32 arg1, f32 arg2) {
    char *var_s1;
    s16 var_s3;
s32 __repair_result_var_s3;
    s32 var_s2;
    void *var_s0;

    var_s3 = -1;
    var_s1 = (*(s16 **)((char *)(D_8005E9F0) + 0xC));
    var_s2 = 0;
    if ((*(s16 *)((char *)(D_8005E9F0) + 0x22)) > 0) {
        var_s0 = var_s1 + 4;
        do {
            if ((*(s16 *)var_s1 == 0) && (func_80231D44(arg0, arg1, arg2, var_s0) != 0)) {
                __repair_result_var_s3 = (*(s16 *)((char *)(var_s0) + -2));
            }
            var_s0 += 0x1C;
            var_s1 += 14;
            var_s2 += 1;
        } while (var_s2 < (*(s16 *)((char *)(D_8005E9F0) + 0x22)));
    }
    return __repair_result_var_s3;
}
