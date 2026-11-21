/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void func_8024AAF4(void *arg0) {
    void *temp_v1;
    void *temp_a0;

    temp_a0 = (*(void **)((char *)(arg0) + 8));
    temp_v1 = (*(void **)((char *)(temp_a0) + 0x6C));
    if ((*(s32 *)((char *)(temp_v1) + 0)) == 0) {
        (*(s32 *)((char *)(temp_v1) + 4)) = (s32) (*(f32 *)((char *)(temp_a0) + 0x28));
        (*(s32 *)((char *)(temp_v1) + 0)) = 1;
        (*(s32 *)((char *)(temp_v1) + 8)) = (s32) (*(f32 *)((char *)(temp_a0) + 0x2C));
        (*(s32 *)((char *)(temp_v1) + 0x18)) = 0;
        (*(s32 *)((char *)(temp_v1) + 0xC)) = (s32) (*(s32 *)((char *)(temp_a0) + 0x24));
        (*(f32 *)((char *)(temp_v1) + 0x10)) = (f32) (*(f32 *)((char *)(temp_a0) + 0x28));
        (*(f32 *)((char *)(temp_v1) + 0x14)) = (f32) (*(f32 *)((char *)(temp_a0) + 0x2C));
    }
}
