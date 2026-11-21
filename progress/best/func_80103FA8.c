/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_8004AD78;
extern void *D_8004AD80;

void func_80103FA8(void *arg0) {
    void **temp_v1;
    void *temp_v1_2;
    s32 *__base_D_8004AD78;

    __base_D_8004AD78 = &D_8004AD78;

    temp_v1 = (*(void ***)((char *)(arg0) + 4));
    if (temp_v1 != NULL) {
        *temp_v1 = (*(void **)((char *)(arg0) + 0));
    }
    temp_v1_2 = (*(void **)((char *)(arg0) + 0));
    if (temp_v1_2 != NULL) {
        (*(void ***)((char *)(temp_v1_2) + 4)) = (void **) (*(void ***)((char *)(arg0) + 4));
    }
    if (arg0 == (*(void **)((char *)(__base_D_8004AD78) + 0))) {
        (*(void **)((char *)(__base_D_8004AD78) + 0)) = (void *) (*(void **)((char *)(arg0) + 0));
    }
    if (arg0 == (*(void **)((char *)(__base_D_8004AD78) + 4))) {
        (*(void **)((char *)(__base_D_8004AD78) + 4)) = (void *) (*(void **)((char *)(arg0) + 0));
    }
    D_8004AD80 = arg0;
    (*(s8 *)((char *)(arg0) + 0xC)) = 0;
}
