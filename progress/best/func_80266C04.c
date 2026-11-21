/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80260F00();
s32 func_80266BA4();
extern s32 D_8002D2B4;
extern s32 *D_8002E0A0;
extern s32 D_80030C58;
extern s32 D_80030C5C;
extern s32 D_80074CF8;

void func_80266C04(s32 arg0, s32 arg1) {
    s32 *__base_D_80074CF8;
    s32 *__base_D_8002D2B4;
    char *var_s0;
    char *var_s0_2;
    s32 temp_s1;
    s32 var_v0;
    s32 var_v0_2;

    func_80260F00();
    if (arg0 & 1) {
        __base_D_8002D2B4 = &D_8002D2B4;
        func_80266BA4(*(s32 *)*(s32 *)(((*__base_D_8002D2B4) * 4) + D_80030C5C), arg0, arg1);
        __base_D_80074CF8 = &D_80074CF8;
        if ((*__base_D_80074CF8) != -1) {
            var_s0 = __base_D_80074CF8;
            var_v0 = (*__base_D_80074CF8);
            do {
                func_80266BA4(*(s32 *)*(s32 *)((var_v0 * 4) + D_80030C5C), arg0, arg1);
                var_s0 += 4;
                var_v0 = *(s32 *)var_s0;
            } while (var_v0 != -1);
        }
    }
    temp_s1 = arg0 & ~1;
    if (temp_s1 != 0) {
        func_80266BA4(*(s32 *)*(s32 *)(((*__base_D_8002D2B4) * 4) + D_80030C58), temp_s1, arg1);
        if ((*__base_D_80074CF8) != -1) {
            var_s0_2 = __base_D_80074CF8;
            var_v0_2 = (*__base_D_80074CF8);
            do {
                var_s0_2 += 4;
                func_80266BA4(*(s32 *)*(s32 *)((var_v0_2 * 4) + D_80030C58), temp_s1, arg1);
                var_v0_2 = *(s32 *)var_s0_2;
            } while (var_v0_2 != -1);
        }
        func_80266BA4(*D_8002E0A0, temp_s1, arg1);
    }
}
