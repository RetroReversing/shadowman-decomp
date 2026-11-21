/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern void *D_8005EA2C;

s32 func_802228F0(void *arg0, void *arg1) {
    f32 temp_fv0f;
    f32 temp_fv0_2;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1f;

    (*(f32 *)((char *)(arg1) + 0)) = (f32) (*(f32 *)((char *)(arg0) + 0));
    (*(f32 *)((char *)(arg1) + 4)) = (f32) ((*(f32 *)((char *)(arg0) + 0xC)) * (*(f32 *)((char *)(D_8005EA2C) + 0x104)));
    (*(f32 *)((char *)(arg1) + 8)) = (f32) (*(f32 *)((char *)(arg0) + 0x18));
    (*(s32 *)((char *)(arg1) + 0xC)) = 0;
    (*(f32 *)((char *)(arg1) + 0x10)) = (f32) (*(f32 *)((char *)(arg0) + 4));
    (*(f32 *)((char *)(arg1) + 0x14)) = (f32) ((*(f32 *)((char *)(arg0) + 0x10)) * (*(f32 *)((char *)(D_8005EA2C) + 0x104)));
    (*(s32 *)((char *)(arg1) + 0x1C)) = 0;
    (*(f32 *)((char *)(arg1) + 0x18)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
    (*(f32 *)((char *)(arg1) + 0x20)) = (f32) (*(f32 *)((char *)(arg0) + 8));
    (*(f32 *)((char *)(arg1) + 0x24)) = (f32) ((*(f32 *)((char *)(arg0) + 0x14)) * (*(f32 *)((char *)(D_8005EA2C) + 0x104)));
    (*(s32 *)((char *)(arg1) + 0x2C)) = 0;
    (*(f32 *)((char *)(arg1) + 0x28)) = (f32) (*(f32 *)((char *)(arg0) + 0x20));
    (*(f32 *)((char *)(arg1) + 0x30)) = (f32) (*(f32 *)((char *)(arg0) + 0x24));
    temp_fv1f = *(f32 *)0x200184;
    temp_fv1 = (*(f32 *)((char *)(arg1) + 0x30));
    (*(f32 *)((char *)(arg1) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) * (*(f32 *)((char *)(D_8005EA2C) + 0x104)));
    (*(f32 *)((char *)(arg1) + 0x3C)) = (f32) *(f32 *)0x200188;
    (*(f32 *)((char *)(arg1) + 0x38)) = (f32) (*(f32 *)((char *)(arg0) + 0x2C));
    if ((temp_fv1f < temp_fv1) || (temp_fv0f = *(f32 *)0x20018C, (temp_fv1 < temp_fv0f))) {
        /* Duplicate return node #2. Try simplifying control flow for better match */
        return 0;
    }
    temp_fv0 = (*(f32 *)((char *)(arg1) + 0x34));
    if (!(temp_fv1f < temp_fv0) && !(temp_fv0 < temp_fv0f)) {
        temp_fv0_2 = (*(f32 *)((char *)(arg1) + 0x38));
        if (!(temp_fv1f < temp_fv0_2) && !(temp_fv0_2 < temp_fv0f)) {
            return 1;
        }
    }
    return 0;
}
