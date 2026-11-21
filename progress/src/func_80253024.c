/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80107D8C(s32, s32, s32, s32); /* extern */
s32 func_80108AAC(s32, s32, s32);   /* extern */
s32 func_80109A1C(s32);                         /* extern */
s32 func_8026E26C(s32);                     /* extern */
s32 func_8026E2F4(s32);                         /* extern */
s32 func_80297254(void *);                      /* extern */
extern s32 D_8002D4A4;

void func_80253024(void *arg0) {
    long temp_a0;
    void *temp_s0;
    register void *temp_s1;

    temp_s1 = (*(void **)((char *)(arg0) + 8));
    if (((*(void **)((char *)(temp_s1) + 0x10)) != (u32)NULL) && (D_8002D4A4 >= (*(s32 *)((char *)(temp_s1) + 0x18)))) {
        if (func_8026E2F4(0xA6) == 0) {
            func_80108AAC(0x66, 0x3F, 0x7FFF);
            func_80107D8C(0, 0x34, 1, 0x7F);
            func_8026E26C(0xA6);
        }
        temp_s0 = (*(void **)((char *)(temp_s1) + 0x10));
        temp_a0 = (*(s32 *)((char *)(temp_s0) + 0x44));
        (*(s32 *)((char *)(temp_s0) + 0x50)) = 0;
        (*(s32 *)((char *)(temp_s0) + 0x54)) = 0;
        if (temp_a0 != 0) {
            func_80109A1C(temp_a0);
            (*(s32 *)((char *)(temp_s0) + 0x44)) = 0;
        }
        func_80297254(temp_s0);
        (*(void **)((char *)(temp_s1) + 0x10)) = NULL;
    }
}
