/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80116D80(s32 *, void **, s32); /* extern */
s32 func_8022260C();                            /* extern */
s32 osCreateMesgQueue(s32 *, s32 *, s32); /* extern */
extern s8 D_8002C270;
extern s32 D_800590E0;
extern s32 D_800590F8;

void func_802225D8(void) {
    void *sp10;
    s32 (*temp_v1)(s32);
    s32 (*temp_v1_2)(s32);

    osCreateMesgQueue(&D_800590E0, &D_800590F8, 1);
    func_80116D80(&D_800590E0, &sp10, 1);
    temp_v1 = (*(s32 (**)(s32))((char *)(sp10) + 0));
    if (temp_v1 != NULL) {
        temp_v1((*(s32 *)((char *)(sp10) + 4)));
    }
    temp_v1_2 = (*(s32 (**)(s32))((char *)(sp10) + 8));
    if (temp_v1_2 != NULL) {
        temp_v1_2((*(s32 *)((char *)(sp10) + 0xC)));
    }
    func_8022260C();
    D_8002C270 = 0;
}
