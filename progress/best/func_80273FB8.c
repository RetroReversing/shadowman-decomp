/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80270090(s32);                     /* extern */
extern void *D_8007AFF8;

void func_80273FB8(void) {
    register void **__base_D_8007AFF8;
    (*(s8 *)((char *)((*__base_D_8007AFF8)) + 0x51)) = 3;
    __base_D_8007AFF8 = &D_8007AFF8;
    (*(s32 *)((char *)((*__base_D_8007AFF8)) + 0x44)) = (s32) ((*(s32 *)((char *)((*__base_D_8007AFF8)) + 0x44)) & ~1);
    func_80270090(3);
}
