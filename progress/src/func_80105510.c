/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void func_80105510(void *arg0, s32 arg1, void *arg2) {
    (*(s32 *)((char *)(arg2) + 4)) = (s32) (arg0 + 0x12);
    (*(s32 *)((char *)(arg2) + 8)) = arg1;
    (*(s32 *)((char *)(arg2) + 0xC)) = (s32) (arg1 + (*(s32 *)((char *)(arg0) + 4)));
    (*(s8 *)((char *)(arg2) + 0)) = 0;
}
