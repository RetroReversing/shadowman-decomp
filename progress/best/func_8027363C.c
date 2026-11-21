/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_80030C5C;

void func_8027363C(void *arg0, s32 arg1) {
    void **temp_v1;

    temp_v1 = *(s32 *)((arg1 * 4) + (u32)D_80030C5C);
    *(*(void ***)((char *)(arg0) + 4)) = (*(void **)((char *)(arg0) + 0));
    (*(void ***)((char *)((*(void **)((char *)(arg0) + 0))) + 4)) = (void **) (*(void ***)((char *)(arg0) + 4));
    (*(void ***)((char *)(arg0) + 4)) = temp_v1;
    (*(void **)((char *)(arg0) + 0)) = (void *) *temp_v1;
    *temp_v1 = arg0;
    (*(void **)((char *)(*temp_v1) + 4)) = arg0;
    (*(s8 *)((char *)((*(void **)((char *)(arg0) + 8))) + 0x71)) = arg1;
}
