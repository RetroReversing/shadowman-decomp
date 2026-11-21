/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

u64 __osInsertTimer(void *, s32, s32);                   /* extern */
s32 __osSetTimerIntr(u64, u32);                 /* extern */
extern s32 *D_800285F0;

s32 func_80117110(void *arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_a2;
    u32 temp_v1;
    u64 temp_a0;
    u64 temp_ret;

    (*(s32 *)((char *)(arg0) + 0x10)) = arg2;
    (*(s32 *)((char *)(arg0) + 0x14)) = arg3;
    temp_a2 = arg3 | arg2;
    (*(s32 *)((char *)(arg0) + 4)) = 0;
    (*(s32 *)((char *)(arg0) + 0)) = 0;
    (*(s32 *)((char *)(arg0) + 8)) = arg4;
    (*(s32 *)((char *)(arg0) + 0xC)) = arg5;
    if (temp_a2 == 0) {
        (*(s32 *)((char *)(arg0) + 0x10)) = arg4;
        (*(s32 *)((char *)(arg0) + 0x14)) = arg5;
    }
    (*(s32 *)((char *)(arg0) + 0x18)) = arg6;
    (*(s32 *)((char *)(arg0) + 0x1C)) = arg7;
    temp_ret = __osInsertTimer(arg0, arg2, temp_a2);
    temp_v1 = (u32) temp_ret;
    temp_a0 = temp_ret;
    if (*D_800285F0 == arg0) {
        __osSetTimerIntr(temp_a0, temp_v1);
    }
    return 0;
}
