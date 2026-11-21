/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_80059794;

void func_8022B840(void *arg0) {
    u32 temp_lo;
    u32 var_a1;
    u32 var_a2;
    int var_v1;
    u8 temp_a0;
    s32 *__base_D_80059794;

    __base_D_80059794 = &D_80059794;

    temp_lo = (*(u8 *)((char *)(arg0) + 5)) * (*(u8 *)((char *)(arg0) + 4));
    var_a2 = 0;
    if (temp_lo != 0) {
        do {
            var_a1 = 0;
            if ((*(u8 *)((char *)(arg0) + 4)) != 0) {
                var_v1 = var_a2;
                do {
                    temp_a0 = *(u8 *)((*(s32 *)((char *)(arg0) + 0xC)) + (var_v1 >> 1));
                    *(s8 *)((*__base_D_80059794) + var_a2 + var_a1) = (s8) (temp_a0 >> 4);
                    (*(s8 *)((char *)(((*__base_D_80059794) + var_a2 + var_a1)) + 1)) = (s8) (temp_a0 & 0xF);
                    var_a1 += 2;
                    var_v1 = var_a2 + var_a1;
                } while (var_a1 < (u8) (*(u8 *)((char *)(arg0) + 4)));
            }
            var_a2 += (*(u8 *)((char *)(arg0) + 4));
        } while (var_a2 < temp_lo);
    }
}
