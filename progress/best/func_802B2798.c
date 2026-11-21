/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void *func_80103878(s32, s32, s32);     /* extern */
s32 func_80109918(void *, s32, s16);            /* extern */
s32 func_80113AD0();                                /* extern */
f32 func_8022EBE8(f32, s32);                        /* extern */
s32 func_802A6508(void *, s32);             /* extern */
s32 func_802A7CD4();                            /* extern */
s32 func_802B2854();                            /* extern */

void func_802B2798(void *arg0) {
    void * __repair_hoisted;

    f32 temp_fs0;
    f32 temp_fv0;
    long temp_ret;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;

    func_802A7CD4();
    (*(u8 *)((char *)(arg0) + 0x49)) = 0xB4;
    (*(u8 *)((char *)(arg0) + 0x4A)) = 0xFF;
    (*(u8 *)((char *)(arg0) + 0x48)) = 0;
    (*(u8 *)((char *)(arg0) + 0x50)) = (u8) ((*(u8 *)((char *)(arg0) + 0x50)) | 1);
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) *(f32 *)0x2169E8;
    temp_ret = func_80113AD0();
    temp_fs0 = *(f32 *)0x2169EC;
    (*(f32 *)((char *)(arg0) + 0x8C)) = (f32) (temp_ret % 360);
    temp_fv0 = func_8022EBE8(temp_fs0, (temp_ret / 360) * 3);
    (*(f32 *)((char *)(arg0) + 0x98)) = temp_fv0;
    if (temp_fv0 < 0.0f) {
        func_802B2854();
        return;
    }
    (*(f32 *)((char *)(arg0) + 0x98)) = (f32) (temp_fv0 + temp_fs0);
    temp_v0 = func_80103878(0x330, 2, 0);
    __repair_hoisted = (*(void **)((char *)(arg0) + 0xC));
    if (temp_v0 == NULL) {
        __repair_hoisted = NULL;
    } else {
        (*(void **)((char *)(arg0) + 0xC)) = temp_v0;
        temp_a0 = temp_v0 + 0x28;
        (*(void **)((char *)(temp_v0) + 0x20)) = temp_a0;
        temp_a0_2 = temp_a0 + 8;
        (*(void **)((char *)((*(void **)((char *)(temp_v0) + 0x20))) + 4)) = (void *) (temp_a0_2 + 0x180);
        (*(void **)((char *)(temp_v0) + 0x28)) = temp_a0_2;
        (*(s32 *)((char *)(temp_v0) + 4)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0)) = 0;
    }
    func_802A6508(arg0, 0x29);
    (*(s32 *)((char *)(arg0) + 0x1C)) = func_80109918(arg0 + 0x54, 0x7F, *(s16 *)0x216C1A);
    (*(u8 *)((char *)(arg0) + 0x50)) = (u8) ((*(u8 *)((char *)(arg0) + 0x50)) | 2);
}
