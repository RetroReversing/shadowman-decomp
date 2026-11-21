/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80103848();
s32 func_80103BD8();
void *func_80103E10();
s32 func_80103FA8();
s32 func_8010400C();
extern char D_8004AD78[];
extern void *D_8004AD84;
extern void *D_8004AD88;

typedef struct { unsigned char pad[4]; void * value; } __repair_field_4;
s32 func_80103660(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **__base_D_8004AD88;
    void **__base_D_8004AD84;
    s32 temp_a2;
    s32 temp_s3;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_s2;
    u32 temp_s2_2;
    u32 temp_v0_2;
    void *temp_s1;
    
    void *var_s0_2;

    temp_s6 = 1 << arg1;
    if (arg3 & 8) {
        temp_s1 = (*(void **)((char *)(D_8004AD78) + 0));
        if (temp_s1 != NULL) {
            temp_a2 = -temp_s6;
loop_3:
            temp_a0 = (*(s32 *)((char *)(temp_s1) + 0xC)) & 0xFFFFFF;
            if ((temp_a0 < arg0) || (temp_v1 = (*(s32 *)((char *)(temp_s1) + 8)), temp_s2 = arg0 + (((temp_v1 - 1 + (s32)temp_s6) & temp_a2) - temp_v1), ((temp_a0 < temp_s2) != 0))) {
                temp_s1 = (*(void **)((char *)(temp_s1) + 0));
                if (temp_s1 == NULL) {
                    return func_80103848(temp_a0, 0xFFFFFF, temp_a2);
                }
                goto loop_3;
            }
            (*(s32 *)((char *)(temp_s1) + 8)) = (s32) (temp_v1 + temp_s2);
            __base_D_8004AD88 = &D_8004AD88;
            (*__base_D_8004AD88) = NULL;
            __base_D_8004AD84 = &D_8004AD84;
            (*__base_D_8004AD84) = NULL;
            temp_s6 = (*(s32 *)((char *)(temp_s1) + 0xC));
            (*(s32 *)((char *)(temp_s1) + 0xC)) = (s32) ((temp_s6 & 0xFF000000) | (((temp_s6 & 0xFFFFFF) - temp_s2) & 0xFFFFFF));
            func_80103BD8(temp_a0, 0xFFFFFF, temp_a2);
            return func_80103848();
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return 0;
    }
    var_s0_2 = (*(void **)((char *)(D_8004AD78) + 0));
    temp_s1 = func_80103E10();
    if (var_s0_2 != NULL) {
loop_12:
        temp_a0_2 = (*(u32 *)((char *)(var_s0_2) + 0xC)) & 0xFFFFFF;
        if (temp_a0_2 >= arg0) {
            temp_v1_2 = (*(s32 *)((char *)(var_s0_2) + 8));
            temp_s3 = (temp_v1_2 - 1 + temp_s6) & -temp_s6;
            temp_s2_2 = arg0 + (temp_s3 - temp_v1_2);
            if (temp_a0_2 >= temp_s2_2) {
                if (((__repair_field_4 *)D_8004AD78)->value == NULL) {
                    ((__repair_field_4 *)D_8004AD78)->value = temp_s1;
                } else {
                    func_8010400C(temp_s1, ((__repair_field_4 *)D_8004AD78)->value, D_8004AD78);
                }
                (*(s32 *)((char *)(temp_s1) + 8)) = temp_s3;
                (*(s32 *)((char *)(temp_s1) + 0xC)) = (s32) (((*(s32 *)((char *)(temp_s1) + 0xC)) & 0xFF000000) | (arg0 & 0xFFFFFF));
                (*__base_D_8004AD88) = temp_s1;
                (*(s32 *)((char *)(temp_s1) + 0xC)) = (s8) ((u8) (*(s32 *)((char *)(temp_s1) + 0xC)) | arg3);
                temp_v0_2 = (*(u32 *)((char *)(var_s0_2) + 0xC));
                (*__base_D_8004AD84) = var_s0_2;
                temp_a0_3 = (temp_v0_2 & 0xFF000000) | (((temp_v0_2 & 0xFFFFFF) - temp_s2_2) & 0xFFFFFF);
                (*(s32 *)((char *)(var_s0_2) + 8)) += temp_s2_2;
                (*(u32 *)((char *)(var_s0_2) + 0xC)) = temp_a0_3;
                func_80103BD8(temp_a0_3);
                return func_80103848();
            }
        }
        var_s0_2 = (*(void **)((char *)(var_s0_2) + 0));
        if (var_s0_2 == (u32)NULL) {
            goto block_21;
        }
        goto loop_12;
    }
block_21:
    func_80103FA8(temp_s1);
    return 0;
}
