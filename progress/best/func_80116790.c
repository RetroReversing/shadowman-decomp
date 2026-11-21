/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80118330(s32, s32);                /* extern */
s32 func_80118350(s32);                         /* extern */

void func_80116790(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_v0;
    u32 temp_t3;
    void *temp_a0;

    (*(s32 *)((char *)(arg0) + 0x100)) = (s32) (0x11821C >> 0x1F);
    (*(s32 *)((char *)(arg0) + 0x104)) = 0x11821C;
    (*(s32 *)((char *)(arg0) + 0x14)) = arg1;
    (*(s32 *)((char *)(arg0) + 0)) = 0;
    (*(s32 *)((char *)(arg0) + 8)) = 0;
    (*(s32 *)((char *)(arg0) + 0x11C)) = arg2;
    (*(s32 *)((char *)(arg0) + 0x3C)) = arg3;
    (*(s32 *)((char *)(arg0) + 0x38)) = (s32) (arg3 >> 0x1F);
    (*(s32 *)((char *)(arg0) + 0x118)) = 0x0400FF03;
    (*(s32 *)((char *)(arg0) + 0x128)) = 0x3F;
    (*(s32 *)((char *)(arg0) + 0x12C)) = 0x01000800;
    (*(s32 *)((char *)(arg0) + 0x18)) = 0;
    (*(s16 *)((char *)(arg0) + 0x10)) = 1;
    (*(s16 *)((char *)(arg0) + 0x12)) = 0;
    (*(s32 *)((char *)(arg0) + 4)) = arg5;
    temp_t3 = arg4 - 0x10;
    (*(s32 *)((char *)(arg0) + 0xF0)) = (s32) ((arg4 >> 0x1F) - 1 + (temp_t3 < 0xFFFFFFF0U));
    (*(u32 *)((char *)(arg0) + 0xF4)) = temp_t3;
    temp_v0 = func_80118330(0x0400FF03, 0x01000800);
    temp_a0 = *(void **)0x800285DC;
    *(void **)0x800285DC = arg0;
    (*(void **)((char *)(arg0) + 0xC)) = temp_a0;
    do { func_80118350(temp_v0); } while (0);
}
