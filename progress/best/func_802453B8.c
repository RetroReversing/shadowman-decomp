/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802422FC();                            /* extern */
s32 func_8024541C();                                /* extern */
s32 func_80245434(s32);                         /* extern */
s32 func_80245684();                                /* extern */
s32 func_80266E0C(s32, s32 *);          /* extern */
s32 func_8026E26C(s32);                     /* extern */
extern s32 D_25B474;
extern s16 D_8006A9D4;
extern s32 D_80074BB0;

s32 func_802453B8(void *arg0) {
    if (((*(s32 *)((char *)(arg0) + 8)) == 1) && (func_80245684() != 0)) {
        if (D_80074BB0 != 0xC) {
            D_8006A9D4 = 0;
            if (D_80074BB0 != 0xE) {
                return func_80245434(0x10000);
            }
            func_8026E26C(0x64);
            func_802422FC();
            (*(s32 *)((char *)(arg0) + 8)) = 2;
            func_80266E0C(0x10000, &D_25B474);
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 1;
        }
        return func_8024541C();
    }
    return 1;
}
