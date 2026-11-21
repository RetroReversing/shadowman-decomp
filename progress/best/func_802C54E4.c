/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802C5604(void *, void *, s32 *, s32);  /* extern */
extern s32 D_80044EB0;
extern void *D_80061A10;

s32 func_802C54E4(void) {
    void **__base_D_80061A10;
    f32 sp0[3];
    s32 *var_a2;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    long var_a3;
    s32 var_v0;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;

    if ((*(s16 *)((char *)(&D_80044EB0) + 0x16)) != 0) {
        var_a3 = 0;
        var_a2 = &D_80044EB0;
loop_2:
        temp_v1 = (*(void **)((char *)(var_a2) + 0x1C));
        var_v0 = 0;
        if (temp_v1 != (void *)-1) {
            temp_a1 = (*(void **)((char *)(var_a2) + 0x24));
            if (temp_a1 != NULL) {
                __base_D_80061A10 = &D_80061A10;
                temp_a0 = (*(void **)((char *)(var_a2) + 0x20));
                (*__base_D_80061A10) = temp_v1;
                if (temp_a0 != NULL) {
                    if ((*(s32 *)((char *)(temp_a0) + 0x88)) == 0) {
                        return func_802C5604(temp_a0, temp_a1, var_a2, var_a3);
                    }
                    temp_v0 = (*(void **)((char *)(var_a2) + 0x1C));
                    (*__base_D_80061A10) = temp_v0;
                    temp_v1_2 = (*(s32 *)((char *)(temp_v0) + 0x1C)) + ((*(u16 *)((char *)(temp_a1) + 8)) * 0x10);
                    if ((temp_v1_2 == NULL) || (temp_v0_2 = (*(void **)((char *)(var_a2) + 0x20)), temp_fv1f = (*(f32 *)((char *)(temp_v1_2) + 0)), temp_ft0f = (*(f32 *)((char *)(temp_v1_2) + 4)), temp_v0_3 = temp_v0_2 + 0x34, temp_ft0 = (*(f32 *)((char *)(temp_v1_2) + 8)), sp0[0] = (temp_fv1f * (*(f32 *)((char *)(temp_v0_2) + 0x34))) + (temp_ft0f * (*(f32 *)((char *)(temp_v0_3) + 4))) + (temp_ft0 * (*(f32 *)((char *)(temp_v0_3) + 8))), temp_fv1 = (temp_fv1f * (*(f32 *)((char *)(temp_v0_3) + 0xC))) + (temp_ft0f * (*(f32 *)((char *)(temp_v0_3) + 0x10))) + (temp_ft0 * (*(f32 *)((char *)(temp_v0_3) + 0x14))), sp0[1] = temp_fv1, sp0[2] = (temp_fv1f * (*(f32 *)((char *)(temp_v0_3) + 0x18))) + (temp_ft0f * (*(f32 *)((char *)(temp_v0_3) + 0x1C))) + (temp_ft0 * (*(f32 *)((char *)(temp_v0_3) + 0x20))), var_v0 = 1, !(temp_fv1 < *(f32 *)0x218498))) {
                        goto block_10;
                    }
                    /* Duplicate return node #12. Try simplifying control flow for better match */
                    return var_v0;
                }
block_10:
                var_a3 += 1;
                var_a2 += 0xC;
                if (var_a3 >= 5) {
                    goto block_11;
                }
                goto loop_2;
            }
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_v0;
    }
block_11:
    var_v0 = 0;
    return var_v0;
}
