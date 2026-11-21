/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_8023B800();
s32 func_802759FC();
extern s32 D_80030C5C;

s32 func_80254770(void *arg0, f32 arg1) {
    s32 var_s3;
    void *temp_s2;
    void *temp_s0;
    s32 var_v0;
    void *var_s1;

    var_s1 = *(s32 *)*(s32 *)(((*(s8 *)((char *)(arg0) + 0x71)) * 4) + D_80030C5C);
    var_s3 = 0;
    if (var_s1 != NULL) {
        temp_s2 = (void *)(arg0); temp_s2 = (void *)((char *)temp_s2 + (s32)(0x24));
loop_2:
        var_v0 = var_s3;
        if ((*(void **)((char *)(var_s1) + 0)) != NULL) {
            temp_s0 = (*(void **)((char *)(var_s1) + 8));
            if (((*(s32 *)((char *)((*(void **)((char *)(temp_s0) + 0x6C))) + 0x48)) & 0x40) && (func_8023B800(temp_s0 + 0x24, temp_s2) < arg1)) {
                func_802759FC(temp_s0, temp_s2, (*(s16 *)((char *)(arg0) + 0x7C)));
                var_s3 = 1;
            }
            var_s1 = (*(void **)((char *)(var_s1) + 0));
            if (var_s1 == NULL) {
                goto block_7;
            }
            goto loop_2;
        }
    } else {
block_7:
        var_v0 = var_s3;
    }
    return var_s3;
}
