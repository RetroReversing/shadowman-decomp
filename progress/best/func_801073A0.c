/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_801073C8();                            /* extern */

void func_801073A0(void *arg0, void *arg1) {
    void * __repair_hoisted;

    

    __repair_hoisted = (*(void **)((char *)(arg0) + 0));
    if ((*(s32 **)((char *)(arg1) + 4)) == (int)NULL) {
        __repair_hoisted = (void *) (*(void **)((char *)(arg1) + 0));
        (*(s32 **)((char *)((*(void **)((char *)(arg1) + 0))) + 4)) = NULL;
        __repair_hoisted = (*(void **)((char *)(arg1) + 0));
        if (__repair_hoisted != (int)NULL) {
            (*(s32 **)((char *)(__repair_hoisted) + 4)) = (s32 *) (*(s32 **)((char *)(arg1) + 4));
            return;
        }
        *(*(s32 **)((char *)(arg1) + 4)) = 0;
        (*(s32 **)((char *)(arg0) + 4)) = (s32 *) (*(s32 **)((char *)(arg1) + 4));
    } else {
        func_801073C8();
    }
}
