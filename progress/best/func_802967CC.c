/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80230698();
s32 func_80296828();
extern char D_8002C2A0[];

void func_802967CC(s32 arg0) {
    char *__base_D_8002C2A0;
    s16 temp_a0;
    void *temp_s0;

    __base_D_8002C2A0 = D_8002C2A0;
    temp_s0 = (arg0 * 0xC) + __base_D_8002C2A0;
    temp_a0 = (*(s16 *)((char *)(temp_s0) + 0xA));
    if (temp_a0 == -1) {
        if ((*(s32 *)((char *)(temp_s0) + 0)) != 0) {
            (*(s32 *)((char *)(temp_s0) + 4)) = 0;
            (*(s32 *)((char *)(temp_s0) + 0)) = 0;
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        (*(s32 *)((char *)(temp_s0) + 4)) = func_80230698((unsigned)temp_a0, temp_s0);
        func_80296828();
        return;
    }
    (*(s32 *)((char *)(temp_s0) + 4)) = func_80230698(temp_a0, temp_s0);
    func_80296828();
}
