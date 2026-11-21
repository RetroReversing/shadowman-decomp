/* Draft from identical target func_8028449C, retargeted and judged independently. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8027003C();                            /* extern */
s32 func_8027006C(void);             /* extern */
extern void *D_8007AFF8;

void func_8028443C(void) {
    u8 temp_v1;

    func_8027003C();
    (*(s16 *)((char *)(D_8007AFF8) + 0x90)) = 0;
    (*(s32 *)((char *)(D_8007AFF8) + 0x48)) = (s32) ((*(s32 *)((char *)(D_8007AFF8) + 0x48)) | 0x10);
    (*(s32 *)((char *)(D_8007AFF8) + 0x44)) = (s32) ((*(s32 *)((char *)(D_8007AFF8) + 0x44)) | 0x22088);
    temp_v1 = (*(u8 *)((char *)(D_8007AFF8) + 0x38));
    if (temp_v1 == 1) {
        (*(s16 *)((char *)(D_8007AFF8) + 0x90)) = (s16) temp_v1;
    }
    func_8027006C();
}
