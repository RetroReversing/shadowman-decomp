/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80109318();
extern void *D_80072BA0;

void func_80246720(void *arg0, s32 arg1) {
    s32 (*temp_a0_2)(s32);
    u32 temp_a0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 var_s2;
    void *temp_a1;
    void *temp_s0;
    void *var_s1;

    var_s1 = arg0;
    var_s2 = 0;
    do { {
        temp_v1 = (*(s16 *)((char *)(var_s1) + 0));
        if (temp_v1 != -1) {
            temp_a1 = *(s32 *)((temp_v1 * 0x38) + (*(s32 *)((char *)(arg0) + 0x30)));
            if (temp_a1 != NULL) {
                temp_v1_2 = (*(s16 *)((char *)(var_s1) + 0x38));
                temp_s0 = (*(s32 *)((char *)(temp_a1) + 4)) + (temp_v1_2 * 0xC);
                if ((temp_v1_2 < (*(s16 *)((char *)(temp_a1) + 0))) && ((*(s16 *)((char *)(var_s1) + 0x12)) >= (*(s16 *)((char *)(temp_s0) + 0)))) {
                    temp_a0 = (*(s16 *)((char *)(temp_s0) + 2));
                    D_80072BA0 = temp_s0;
                    if (temp_a0 != -1) {
                        do { func_80109318(temp_a0, arg1 + 0x24, 0); } while (0);
                    }
                    temp_a0_2 = (*(s32 (**)(s32))((char *)(temp_s0) + 4));
                    if (temp_a0_2 != NULL) {
                        temp_a0_2(temp_a0_2);
                    }
                    (*(s16 *)((char *)(var_s1) + 0x38)) = (s16) ((u16) (*(s16 *)((char *)(var_s1) + 0x38)) + 1);
                }
            }
        }/*__repair_loop_weight*/do {
        ++var_s2;} while (0);
        var_s1 += 2;
    }
} while (var_s2 < 3);
}
