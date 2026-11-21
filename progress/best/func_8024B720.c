/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_80052770;

void func_8024B720(void *arg0) {
    
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_a2;
    void *temp_a1;
    s32 temp_v1;
    void *temp_a3;
    union { void * pointer; s32 value; } __repair_phase_storage;

    __repair_phase_storage.pointer = (*(void **)((char *)(arg0) + 8));
    temp_a2 = (*(void **)((char *)(__repair_phase_storage.pointer) + 0x6C));
    __repair_phase_storage.value = (*(s32 *)((char *)(temp_a2) + 0));
    temp_a1 = (*(void **)((char *)(__repair_phase_storage.pointer) + 0x68));
    temp_a3 = (*(void **)((char *)(temp_a1) + 0x10));
    switch (__repair_phase_storage.value) {                              /* irregular */
    case 1:
        temp_v0_2 = (*(s32 *)((char *)(temp_a2) + 4)) - (*(s32 *)((char *)(&D_80052770) + 4));
        (*(s32 *)((char *)(temp_a2) + 4)) = temp_v0_2;
        if (temp_v0_2 <= 0) {
            (*(s32 *)((char *)(temp_a1) + 0)) = (s32) ((*(s32 *)((char *)(temp_a1) + 0)) + (*(s32 *)((char *)(&D_80052770) + 4)));
            (*(s32 *)((char *)(temp_a2) + 4)) = (s32) (*(s32 *)((char *)(temp_a3) + 4));
        }
        temp_v1 = (*(s32 *)((char *)(temp_a3) + 8)) - 1;
        if ((*(s32 *)((char *)(temp_a1) + 0)) >= temp_v1) {
            (*(s32 *)((char *)(temp_a1) + 0)) = temp_v1;
            (*(s32 *)((char *)(temp_a2) + 0)) = 2;
            return;
        }
    case 2:
        return;
    case 0:
        (*(s32 *)((char *)(temp_a1) + 0)) = 0;
        return;
    case 3:
        temp_v0_3 = (*(s32 *)((char *)(temp_a2) + 4)) - (*(s32 *)((char *)(&D_80052770) + 4));
        (*(s32 *)((char *)(temp_a2) + 4)) = temp_v0_3;
        if (0 >= temp_v0_3) {
            (*(s32 *)((char *)(temp_a1) + 0)) = (s32) ((*(s32 *)((char *)(temp_a1) + 0)) - (*(s32 *)((char *)(&D_80052770) + 4)));
            (*(s32 *)((char *)(temp_a2) + 4)) = (s32) (*(s32 *)((char *)(temp_a3) + 4));
        }
        if ((*(s32 *)((char *)(temp_a1) + 0)) <= 0) {
            (*(s32 *)((char *)(temp_a1) + 0)) = 0;
            (*(s32 *)((char *)(temp_a2) + 0)) = 0;
        }
        return;
    }
}
