/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern float D_8002D204;
s32 func_8021F8CC(f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_80221714();
extern char D_8002C260[];
extern char D_8002D200[];

s32 func_80221614(void *arg0, s16 arg1, s16 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7) {
    s32 temp_s0;
    s32 temp_t0;
    u8 temp_a0;
    void *temp_a3;

    temp_s0 = arg3 & 0xFF;
    if (temp_s0 == 0) {
        return func_80221714();
    }
    temp_a3 = arg0 + (temp_s0 * 8);
    temp_t0 = (*(s32 *)((char *)(temp_a3) + 0xE4));
    if (temp_t0 != 0) {
        func_8021F8CC((f32) arg1, (f32) (arg2 + temp_a0), temp_a0, 0, 0, (f64) D_8002D204, (s32) (*(s16 *)((char *)(temp_a3) + 0xE0)), (s32) (*(u8 *)((char *)(temp_a3) + 0xE3)), temp_t0, 0, 3, (s32) *(((*(s32 *)((char *)(arg0) + 0)) < 0) + D_8002C260), arg4 & 0xFF, arg5 & 0xFF, arg6 & 0xFF, arg7 & 0xFF);
        temp_a0 = (*(u8 *)((char *)(temp_a3) + 0xE2));
    }
    return (*(u8 *)((char *)((arg0 + temp_s0)) + 1)) + 1;
}
