/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8011BA20(void *, s32, s32);    /* extern */

void func_8010D13C(void *arg0, void *arg1, s32 *arg2) {
    s32 temp_v0;

    func_8011BA20(arg1, 0, 0x48);
    (*(void **)((char *)(arg1) + 0)) = (void *) (*(void **)((char *)(arg0) + 0x104));
    (*(s32 **)((char *)(arg1) + 0xC)) = arg2;
    temp_v0 = *arg2;
    (*(s32 *)((char *)(arg1) + 8)) = temp_v0;
    (*(s32 *)((char *)(arg1) + 4)) = temp_v0;
    (*(void **)((char *)(arg0) + 0x104)) = arg1;
}
