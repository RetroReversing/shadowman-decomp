/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80233B0C(void *);        /* extern */
extern s32 D_8005E9D0;
extern s32 D_8005E9E8;
extern void *D_8005E9F0;
extern s32 D_8005EA00;
extern s32 D_8005EA04;

void func_802339EC(void *arg1) {
    s32 var_s0;
    register s32 var_s1;
    void *var_a1;
    register void **__base_D_8005E9F0;

    __base_D_8005E9F0 = &D_8005E9F0;

    var_a1 = arg1;
    var_s1 = 0;
    if ((*(s16 *)((char *)((*__base_D_8005E9F0)) + 0x1E)) > 0) {
        var_s0 = 0;
        do {
            (*(s32 *)((char *)(&D_8005EA04) + 0)) = -1;
            (*(s32 *)((char *)(&D_8005E9D0) + 0)) = 0;
            (*(s32 *)((char *)(&D_8005EA00) + 0)) = 0x186A0;
            (*(s32 *)((char *)(&D_8005E9E8) + 0)) = 0;
            func_80233B0C(arg1);
            var_s1 += 1;
            var_a1 = (*__base_D_8005E9F0);
            (*(u16 *)((char *)((var_s0 + (*(s32 *)((char *)(var_a1) + 4)))) + 6)) = (u16) (*(u16 *)((char *)(&D_8005EA04) + 2));
            (*(u16 *)((char *)((var_s0 + (*(s32 *)((char *)(var_a1) + 4)))) + 8)) = (u16) (*(u16 *)((char *)(&D_8005E9D0) + 2));
            (*(u16 *)((char *)((var_s0 + (*(s32 *)((char *)(var_a1) + 4)))) + 0xA)) = (u16) (*(u16 *)((char *)(&D_8005EA00) + 2));
            (*(s16 *)((char *)((var_s0 + (*(s32 *)((char *)(var_a1) + 4)))) + 0xC)) = (s16) (((*(u16 *)((char *)(&D_8005E9E8) + 2)) - (*(u16 *)((char *)(&D_8005EA00) + 2))) + 1);
            var_s0 += 0x22;
        } while (var_s1 < (*(s16 *)((char *)(var_a1) + 0x1E)));
    }
}
