/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void func_80230048(s32 arg0, void *arg1) {
    s32 *temp_v1;
    s32 *temp_v1_2;
    s32 *temp_v1_3;
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u32 var_a2;

    var_a2 = 0;
    (*(s32 *)((char *)(arg1) + 8)) = (s32) ((*(s32 *)((char *)(arg1) + 8)) + temp_a3);
    temp_a3 = arg1 - arg0;
    (*(s32 *)((char *)(arg1) + 0x10)) = (s32) ((*(s32 *)((char *)(arg1) + 0x10)) + temp_a3);
    (*(s32 *)((char *)(arg1) + 0xC)) = (s32) ((*(s32 *)((char *)(arg1) + 0xC)) + temp_a3);
    (*(s32 *)((char *)(arg1) + 0x14)) = (s32) ((*(s32 *)((char *)(arg1) + 0x14)) + temp_a3);
    if ((*(u16 *)((char *)(arg1) + 4)) != 0) {
        do {
            temp_a0 = var_a2 * 4;
            temp_v1 = temp_a0 + (*(s32 *)((char *)(arg1) + 0x10));
            temp_v0 = *temp_v1;
            if (temp_v0) {
                *temp_v1 = temp_v0 + temp_a3;
            }
            temp_v1_2 = temp_a0 + (*(s32 *)((char *)(arg1) + 0x14));
            temp_v0_2 = *temp_v1_2;
            if (temp_v0_2 != 0) {
                *temp_v1_2 = temp_v0_2 + temp_a3;
            }
            var_a2 += 1;
        } while (var_a2 < (u16) (*(u16 *)((char *)(arg1) + 4)));
    }
    temp_v1_3 = ((*(u16 *)((char *)(arg1) + 4)) * 4) + (*(s32 *)((char *)(arg1) + 0x14));
    temp_v0_3 = *temp_v1_3;
    if (temp_v0_3 != 0) {
        *temp_v1_3 = temp_v0_3 + temp_a3;
    }
}
