/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8026FD60(s32, void *);                      /* extern */
extern void *D_8007AFF8;

void func_8026FCC4(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 temp_fv0;

    if (!((*(s32 *)((char *)(D_8007AFF8) + 0x44)) & 0x400)) {
        (*(s32 *)((char *)(D_8007AFF8) + 0xE4)) = (u32)arg0;
        (*(f32 *)((char *)(D_8007AFF8) + 0xE8)) = arg1;
        (*(f32 *)((char *)(D_8007AFF8) + 0xEC)) = arg2;
        (*(f32 *)((char *)(D_8007AFF8) + 0xF4)) = arg4;
        (*(f32 *)((char *)(D_8007AFF8) + 0xF0)) = arg3;
        (*(f32 *)((char *)(D_8007AFF8) + 0xF8)) = arg5;
        temp_fv0 = *(f32 *)0x213F2C;
        if (!(temp_fv0 <= arg6)) {
            func_8026FD60(arg0, D_8007AFF8);
            return;
        }
        (*(s8 *)((char *)(D_8007AFF8) + 0x7C)) = (s8) ((s32) (arg6 - temp_fv0) | 0x80000000);
        (*(s8 *)((char *)(D_8007AFF8) + 0x53)) = 0;
        (*(s32 *)((char *)(D_8007AFF8) + 0x44)) = (s32) ((*(s32 *)((char *)(D_8007AFF8) + 0x44)) | 0x400);
    }
}
