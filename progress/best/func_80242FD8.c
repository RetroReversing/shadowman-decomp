/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8026E2F4(s32);                         /* extern */
extern s32 D_8002D4AC;

void func_80242FD8(void) {
    s32 var_v0;

    var_v0 = 5;
    D_8002D4AC = 0;
    if ((func_8026E2F4(0x99) != 0) || (var_v0 = 4, (func_8026E2F4(0x98) != 0)) || (var_v0 = 3, (func_8026E2F4(0x97) != 0)) || (var_v0 = 2, (func_8026E2F4(0x96) != 0)) || (var_v0 = 1, (func_8026E2F4(0x95) != 0))) {
        D_8002D4AC = var_v0;
    }
}
