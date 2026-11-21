/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8024F654(void *, void *);                          /* extern */
s32 func_8026E2F4(s32);                         /* extern */

void func_8024F780(void *arg0) {
    s32 *temp_s0;
    s32 var_v0;
    void *temp_s1;

    temp_s0 = (*(s32 **)((char *)(temp_s1) + 0x6C));
    temp_s1 = (*(void **)((char *)(arg0) + 8));
    if ((*temp_s0 == 0) && ((var_v0 = 1, (func_8026E2F4(0xA2) == 0)) || (var_v0 = 2, ((func_8024F654(arg0, temp_s1) & 0xFF) != 0)))) {
        *temp_s0 = var_v0;
    }
}
