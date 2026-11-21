/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern char D_203A10[];
extern s32 D_8007338C;

void func_8024F7E0(void *arg0) {
    void *temp_a1;
    void *temp_v1;

    if ((*(s16 *)((char *)(arg0) + 0x14)) == D_8007338C) {
        temp_v1 = (*(void **)((char *)(arg0) + 8));
        temp_a1 = (*(void **)((char *)(temp_v1) + 0x6C));
        (*(s32 *)((char *)(temp_a1) + 0x10)) = 1;
        (*(s32 *)((char *)(temp_a1) + 0)) = 2;
        (*(s32 *)((char *)(temp_a1) + 8)) = (s32) (*(f32 *)((char *)((((*(s16 *)((char *)(arg0) + 0x14)) * 0x2C) + D_203A10)) + 0x14));
        (*(f32 *)((char *)(temp_a1) + 4)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x1C));
    }
}
