/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8010580C(s32 arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_t0;
    s32 var_t1;
    register s32 var_t2;
    u32 temp_a1;
    void *temp_v0;

    var_t1 = 0;
    temp_a0 = arg0 - 1;
    var_t2 = temp_a0;
    var_t0 = 1;
    if ((temp_a0 & 0xFF) != 0xFF) {
        do {
            if ((*(u8 *)((char *)(arg1) + 0)) == 0) {
                temp_v0 = (*(void **)((char *)(arg1) + 4));
                (*(u8 *)((char *)(arg1) + 0)) = 0x10U;
                (*(u32 *)((char *)(arg1) + 0x10)) = (u32) (((*(u8 *)((char *)(temp_v0) + 3)) << 0x18) + ((*(u8 *)((char *)(temp_v0) + 2)) << 0x10) + ((*(u8 *)((char *)(temp_v0) + 1)) << 8) + (*(u8 *)((char *)(temp_v0) + 0)));
                (*(void **)((char *)(arg1) + 4)) = (void *) (temp_v0 + 2);
            }
            temp_a1 = (*(u32 *)((char *)(arg1) + 0x10));
            if (temp_a1 & 1) {
                var_t1 |= var_t0;
            }
            var_t0 *= 2;
            temp_a0_2 = var_t2 - 1;
            var_t2 = temp_a0_2;
            (*(u32 *)((char *)(arg1) + 0x10)) = (u32) (temp_a1 >> 1);
            (*(u8 *)((char *)(arg1) + 0)) = (u8) ((*(u8 *)((char *)(arg1) + 0)) - 1);
        } while ((temp_a0_2 & 0xFF) != 0xFF);
    }
    return var_t1 & 0xFFFF;
}
