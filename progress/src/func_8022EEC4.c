void func_8022EEC4(void *arg0, s8 arg1) {
    u32 var_a2;
    void *temp_a3;
    s8 *var_v1;

    temp_a3 = *(void **)((char *)arg0 + 0x64);
    if (*(s32 *)((char *)temp_a3 + 0x50) != 0) {
        var_a2 = 0;
        var_v1 = (s8 *)(*(char **)((char *)temp_a3 + 0x14) + *(u16 *)((char *)temp_a3 + 0x50) * 0x12);
        do {
            var_v1[2] = arg1;
            var_a2 += 1;
            var_v1 += 0x12;
        } while (*(u16 *)(*(char **)((char *)arg0 + 0x64) + 0x52) >= var_a2);
    }
}
