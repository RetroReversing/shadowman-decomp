/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void *__allocParam();                               /* extern */

void func_80110240(void *arg0, void *arg1, f32 arg2) {
    register void *temp_a0;
    void *temp_v0;

    if ((*(void **)((char *)(arg1) + 8)) != NULL) {
        temp_v0 = __allocParam();
        if (temp_v0 != NULL) {
            (*(s32 *)((char *)(temp_v0) + 0)) = 0;
            (*(s32 *)((char *)(temp_v0) + 8)) = 7;
            (*(s32 *)((char *)(temp_v0) + 4)) = (s32) ((*(s32 *)((char *)(arg0) + 0x1C)) + (*(s32 *)((char *)((*(void **)((char *)(arg1) + 8))) + 0xD8)));
            (*(f32 *)((char *)(temp_v0) + 0xC)) = arg2;
            temp_a0 = (*(void **)((char *)((*(void **)((char *)(arg1) + 8))) + 0xC));
            (*(s32 (**)(void *, s32, void *))((char *)(temp_a0) + 8))(temp_a0, 3, temp_v0);
        }
    }
}
