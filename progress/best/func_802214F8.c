/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80221614(s32, s16, s32, s32, s32, s32, s32, s32); /* extern */
s16 func_80221728();                                /* extern */

void func_802214F8(s32 arg0, u8 *arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6) {
    s32 sp20;
    s16 temp_v1_2;
    s16 var_s1;
    u32 temp_v1;
    u32 var_s0;

    temp_v1 = 0x140 - func_80221728();
    var_s1 = 0;
    var_s0 = (u32) (temp_v1 + (temp_v1 >> 0x1F)) >> 1;
    if (*arg1 != 0) {
        sp20 = arg2 << 0x10;
        do {
            var_s0 += func_80221614(arg0, (s16) var_s0, sp20 >> 0x10, (*(arg1 + var_s1) - 0x20) & 0xFF, arg3 & 0xFF, arg4 & 0xFF, arg5 & 0xFF, arg6 & 0xFF);
            temp_v1_2 = var_s1 + 1;
            var_s1 = temp_v1_2;
        } while (*(arg1 + temp_v1_2) != 0);
    }
}
