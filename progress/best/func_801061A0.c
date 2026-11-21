/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80116790(void *, s32, s32 *, s32, void *, s32); /* extern */
s32 func_801171A0(void *);                      /* extern */
s32 func_8011BA20(s32 *, s32, s32); /* extern */
s32 osCreateMesgQueue(void *, void *, s32); /* extern */
extern s32 D_10635C;
extern s32 D_8004AF40;

void func_801061A0(void) {
    s32 *__base_D_8004AF40;
    void *temp_s1;

    __base_D_8004AF40 = &D_8004AF40;
    (*(s32 *)((char *)(__base_D_8004AF40) + 0x100)) = 0xDEADBEEF;
    (*(s32 *)((char *)(__base_D_8004AF40) + 0x4B8)) = 0x96;
    osCreateMesgQueue((s8 *) __base_D_8004AF40 + 0x338, (s8 *) __base_D_8004AF40 + 0x350, 0x5A);
    func_8011BA20(__base_D_8004AF40, 0xC9, 0x100);
    temp_s1 = (s8 *) __base_D_8004AF40 + 0x108;
    func_80116790(temp_s1, 0x63, &D_10635C, 0, __base_D_8004AF40 + 0x100, 0x7D);
    func_801171A0(temp_s1);
}
