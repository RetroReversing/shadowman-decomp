/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_8007BEB8;

void func_802525C8(void *arg0) {
    void *temp_v1;
    void *temp_a0;

    temp_a0 = (*(void **)((char *)(temp_v1) + 0x6C));
    temp_v1 = (*(void **)((char *)(arg0) + 8));
    (*(f32 *)((char *)(&D_8007BEB8) + 0)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x24)) - (*(f32 *)((char *)(temp_a0) + 0x10)));
    (*(f32 *)((char *)(&D_8007BEB8) + 4)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x28)) - (*(f32 *)((char *)(temp_a0) + 0x14)));
    (*(f32 *)((char *)(&D_8007BEB8) + 8)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x2C)) - (*(f32 *)((char *)(temp_a0) + 0x18)));
}
