/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8021FB8C(s16, s16, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_8022197C();                                /* extern */
extern s32 D_8002C260;
extern s32 D_8002D200;

s32 func_802217EC(void *arg0, s16 arg1, s16 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11) {
    s32 temp_s0;
    s32 temp_t0;
    register u16 temp_a0;
    void *temp_a3;

    temp_s0 = arg3 & 0xFF;
    if (temp_s0 == 0) {
        return func_8022197C();
    }
    temp_a3 = arg0 + (temp_s0 * 8);
    temp_t0 = (*(s32 *)((char *)(temp_a3) + 0xE4));
    if (temp_t0 != 0) {
        func_8021FB8C((s16) (s32) (((((f32) arg1 - arg6) * arg4) + arg6) * (*(f32 *)((char *)(&D_8002D200) + 0))), (s16) (s32) ((((((f32) arg2 + (f32) (*(u8 *)((char *)(temp_a3) + 0xE2))) - arg7) * arg5) + arg7) * (*(f32 *)((char *)(&(*(s32 *)0x8002d204)) + 4))), (s16) (s32) ((f32) temp_a0 * arg4 * (*(f32 *)((char *)(&D_8002D200) + 0))), (s16) (s32) ((f32) (*(u8 *)((char *)(temp_a3) + 0xE3)) * arg5 * (*(f32 *)((char *)(&D_8002D200) + 4))), (s32) (s16) temp_a0, (s32) (*(u8 *)((char *)(temp_a3) + 0xE3)), temp_t0, 0, 3, (s32) *(((*(s32 *)((char *)(arg0) + 0)) < 0) + &D_8002C260), arg8 & 0xFF, arg9 & 0xFF, arg10 & 0xFF, arg11 & 0xFF);
        temp_a0 = (*(u16 *)((char *)(temp_a3) + 0xE0));
    }
    return (*(u8 *)((char *)((arg0 + temp_s0)) + 1)) + 1;
}
