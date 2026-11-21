/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023EA30(s32, void *, s16, s32);       /* extern */

void func_8023EB4C(void *arg0, void *arg1) {
int __repair_literal;

    s16 temp_a0;
    s16 temp_a2;
    s16 temp_v0_2;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_s1;
    s32 var_s4;
    void *temp_fp;
    void *var_a1;
    void *var_s0;
    void *var_s2;
    void *var_s6;

    var_s6 = (*(void **)((char *)(arg1) + 0x40));
    temp_fp = (*(void **)((char *)(arg1) + 0x48));
    temp_s7 = (*(s32 *)((char *)(arg0) + 0x28));
    var_s4 = 0;
__repair_literal = 0;

    if ((*(s16 *)((char *)(arg1) + 0x3E)) > __repair_literal) {
        var_s2 = (*(s32 *)((char *)(temp_fp) + 8)) + 6;
        do {
            temp_v0 = (*(s16 *)((char *)(var_s2) + 2)) * 8;
            func_8023EA30(temp_s7 + temp_v0, var_s6, (*(s16 *)((char *)(var_s2) + -2)), (*(s32 *)((char *)(arg1) + 0x4C)) + temp_v0);
            var_s1 = 0;
            temp_a0 = (*(s16 *)((char *)(var_s2) + 0));
            if (temp_a0 > 0) {
                var_s0 = (*(s32 *)((char *)(temp_fp) + 0xC)) + ((*(u16 *)((char *)(var_s2) + 4)) * 0x3C) + 0xC;
                var_a1 = var_s0;
                do {
                    var_s1 += 1;
                    temp_a2 = (*(s16 *)((char *)(var_s0) + -6));
                    var_s0 += 0x3C;
                    temp_v0_2 = (*(s16 *)((char *)(var_s0) + -4));
                    temp_v0_3 = temp_v0_2 * 8;
                    func_8023EA30(temp_s7 + temp_v0_3, var_a1, temp_a2, (*(s32 *)((char *)(arg1) + 0x4C)) + temp_v0_3);
                    var_a1 = var_s0;
                } while (temp_a0 > var_s1);
            }
            var_s4 += 1;
            var_s6 += 0x40;
            var_s2 += 0xC;
        } while (var_s4 < (*(s16 *)((char *)(arg1) + 0x3E)));
    }
}
