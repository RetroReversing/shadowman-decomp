/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void func_802A7CD4(void *arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    void *temp_a1;
    void *temp_v1;

    temp_a1 = (*(void **)((char *)(arg0) + 8));
    if (temp_a1 != NULL) {
        temp_v1 = (*(void **)((char *)(temp_a1) + 8));
        if ((*(f32 *)((char *)((((*(s32 *)((char *)(arg0) + 0x44)) * 0x50) + temp_v1)) + 0x24)) != *(f32 *)0x21630C) {
            temp_fv0 = (*(f32 *)((char *)(temp_v1) + 0x24));
            (*(f32 *)((char *)(arg0) + 0x30)) = temp_fv0;
            (*(f32 *)((char *)(arg0) + 0x2C)) = temp_fv0;
            return;
        }
    }
    temp_fv0_2 = *(f32 *)0x216310;
    (*(f32 *)((char *)(arg0) + 0x30)) = temp_fv0_2;
    (*(f32 *)((char *)(arg0) + 0x2C)) = temp_fv0_2;
}
