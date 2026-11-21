/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */

void func_80251B7C(void *arg0) {
    void *temp_a0;
    register void *temp_a1;

    temp_a1 = (*(void **)((char *)(arg0) + 8));
    temp_a0 = (*(void **)((char *)(temp_a1) + 0x6C));
    if ((*(s32 *)((char *)(temp_a0) + 0)) == 2) {
        (*(s32 *)((char *)(temp_a0) + 4)) = (s32) (*(f32 *)((char *)(temp_a1) + 0x28));
        (*(s32 *)((char *)(temp_a0) + 0)) = 3;
        (*(s32 *)((char *)(temp_a0) + 0x18)) = 0;
        (*(s32 *)((char *)(temp_a0) + 0xC)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x24));
        (*(s32 *)((char *)(temp_a0) + 8)) = (s32) (*(f32 *)((char *)(temp_a1) + 0x2C));
        (*(f32 *)((char *)(temp_a0) + 0x14)) = (f32) (*(f32 *)((char *)(temp_a1) + 0x2C));
        (*(f32 *)((char *)(temp_a0) + 0x10)) = (f32) (*(f32 *)((char *)(temp_a1) + 0x28));
    }
}
