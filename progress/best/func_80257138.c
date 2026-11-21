/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern char D_203A10[];
extern s32 D_80030C58;

void func_80257138(void *arg0, s32 arg1) {
    char *__base_D_203A10;
    void **temp_a0;

    __base_D_203A10 = D_203A10;
    if (!((*(u16 *)((char *)((((*(s16 *)((char *)(arg0) + 0x14)) * 0x2C) + __base_D_203A10)) + 0x18)) & 0x40)) {
        temp_a0 = *(s32 *)((arg1 * 4) + D_80030C58);
        *(*(void ***)((char *)(arg0) + 4)) = (*(void **)((char *)(arg0) + 0));
        (*(void ***)((char *)((*(void **)((char *)(arg0) + 0))) + 4)) = (void **) (*(void ***)((char *)(arg0) + 4));
        (*(void **)((char *)(*temp_a0) + 4)) = arg0;
        (*(void ***)((char *)(arg0) + 4)) = temp_a0;
        (*(void **)((char *)(arg0) + 0)) = (void *) *temp_a0;
        *temp_a0 = arg0;
    }
    (*(s8 *)((char *)((*(void **)((char *)(arg0) + 8))) + 0x71)) = arg1;
}
