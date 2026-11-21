/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8021F8CC(f32, f32, u32, u32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern void *D_8002C1B0;

void func_8022EF10(f32 arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4, void *arg6) {
    long temp_a0;
    u32 temp_a1_2;
    u8 temp_a1;
    u8 temp_v1;
    void *temp_v0;

    if (D_8002C1B0 != NULL) {
        temp_v0 = D_8002C1B0 + (arg4 * 0x10);
        temp_v1 = (*(u8 *)((char *)(temp_v0) + 4));
        temp_a1 = (*(u8 *)((char *)(temp_v0) + 5));
        temp_a0 = temp_v1 >> 1;
        temp_a1_2 = temp_a1 >> 1;
        func_8021F8CC(arg0 - (f32) temp_a0, arg1 - (f32) temp_a1_2, temp_a0, temp_a1_2, arg0, arg1, arg2 / (f32) temp_v1, arg3 / (f32) temp_a1, (s32) (*(u8 *)((char *)(D_8002C1B0) + 4)), (s32) (*(u8 *)((char *)(D_8002C1B0) + 5)), (*(s32 *)((char *)(D_8002C1B0) + 0xC)), 0, 0, 3, (s32) (*(u8 *)((char *)(arg6) + 0)), (s32) (*(u8 *)((char *)(arg6) + 1)), (s32) (*(u8 *)((char *)(arg6) + 2)), (s32) (*(u8 *)((char *)(arg6) + 3)));
    }
}
