/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void func_8026DFDC(void **arg0) {
    s16 __repair_store_0;
    s32 __repair_store_2;
    s32 __repair_store_1;
    s32 sp0[3];
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t5;
    s32 var_a2;
    s32 var_t0;
    void *temp_a0;
    void *temp_t2;
    void *var_a1;
    void *var_t1;

    temp_a0 = *arg0;
    temp_t2 = (*(void **)((char *)(temp_a0) + 4));
    var_t0 = 0;
    if (((*(s16 *)((char *)(temp_a0) + 0)) - 1) > 0) {
        var_t1 = temp_t2;
        __repair_rows: {
            var_a2 = var_t0 + 1;
            if (var_a2 < (s16) (u16) (*(s16 *)((char *)(temp_a0) + 0))) {
                var_a1 = (var_a2 * 0xC) + temp_t2;
                __repair_rows_: {
                    if ((*(s16 *)((char *)(var_a1) + 0)) < (*(s16 *)((char *)(var_t1) + 0))) {
                        temp_t3 = (s32) (*(s16 *)((char *)(var_t1) + 0));
                        temp_t4 = (*(s32 *)((char *)(var_t1) + 4));
                        temp_t5 = (*(s32 *)((char *)(var_t1) + 8));
                        sp0[0] = temp_t3;
                        sp0[1] = temp_t4;
                        sp0[2] = temp_t5;
                        __repair_store_0 = (s32) (*(s16 *)((char *)(var_a1) + 0));
                        __repair_store_2 = (s32) (*(s32 *)((char *)(var_a1) + 8));
                        __repair_store_1 = (s32) (*(s32 *)((char *)(var_a1) + 4));
                        (*(s16 *)((char *)(var_t1) + 0)) = __repair_store_0;
                        (*(s32 *)((char *)(var_t1) + 4)) = __repair_store_1;
                        (*(s32 *)((char *)(var_t1) + 8)) = __repair_store_2;
                        (*(s16 *)((char *)(var_a1) + 0)) = temp_t3;
                        (*(s32 *)((char *)(var_a1) + 4)) = temp_t4;
                        (*(s32 *)((char *)(var_a1) + 8)) = temp_t5;
                    }
                    var_a2 += 1;
                    var_a1 += 0xC;
                }
if (var_a2 < (*(s16 *)((char *)(temp_a0) + 0))) goto __repair_rows_;
            }
            var_t0 += 1;
            var_t1 += 0xC;
        }
if (var_t0 < ((*(s16 *)((char *)(temp_a0) + 0)) - 1)) goto __repair_rows;
    }
}
