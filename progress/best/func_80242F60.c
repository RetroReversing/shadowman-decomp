/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8026E2F4(s32);                         /* extern */
extern s32 D_8002D4A8;

void func_80242F60(void) {
    s32 var_v0;

    var_v0 = 5;
    D_8002D4A8 = 0;
    if ((func_8026E2F4(0x94) != 0) || (var_v0 = 4, (func_8026E2F4(0x93) != 0)) || (var_v0 = 3, (func_8026E2F4(0x92) != 0)) || (var_v0 = 2, (func_8026E2F4(0x91) != 0)) || (var_v0 = 1, (func_8026E2F4(0x90) != 0))) {
        D_8002D4A8 = var_v0;
    }
}
