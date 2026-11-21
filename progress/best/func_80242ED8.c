/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8026E2F4(s32);                         /* extern */
extern s32 D_8002D4A4;

void func_80242ED8(void) {
    s32 var_v0;

    var_v0 = 6;
    D_8002D4A4 = 0;
    if ((func_8026E2F4(0x84) != 0) || (var_v0 = 5, (func_8026E2F4(0x85) != 0)) || (var_v0 = 4, (func_8026E2F4(0x86) != 0)) || (var_v0 = 3, (func_8026E2F4(0x87) != 0)) || (var_v0 = 2, (func_8026E2F4(0x88) != 0)) || (var_v0 = 1, (func_8026E2F4(0x89) != 0))) {
        D_8002D4A4 = var_v0;
    }
}
