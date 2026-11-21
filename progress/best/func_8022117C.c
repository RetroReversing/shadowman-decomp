/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s16 func_80221120();
s32 func_80221284();
s32 func_80221614();

void func_8022117C(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7) {
    s32 temp_a3_2;
    s32 temp_v0;
    s32 var_s1;
    u32 var_s0;
    char *var_s2;
    u8 temp_a3;

    var_s0 = (u32) (0x140 - func_80221120()) >> 1;
    var_s2 = arg2;
    var_s1 = arg1 - 1;
    if (arg1 != 0) {
        for (;;) {
            temp_a3 = *(u8 *)var_s2;
            temp_v0 = temp_a3 & 0xFF;
            var_s2 += 1;
            if (temp_v0 != 0) {
                temp_a3_2 = temp_a3 - 0x20;
                if (temp_v0 == 0xA) {
                    func_80221120(arg0, var_s1, var_s2, temp_a3_2);
                    func_80221284();
                    return;
                }
                var_s0 += func_80221614(arg0, (s16) (u32)var_s0, arg3, temp_a3_2 & 0xFF, arg4 & 0xFF, arg5 & 0xFF, arg6 & 0xFF, arg7 & 0xFF);
                var_s1 -= 1;
                if (var_s1 == 0) {

                } else {
                    continue;
                }
            }
            break;
        }
    }
}
