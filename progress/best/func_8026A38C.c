/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802694BC(void);                   /* extern */
extern s32 D_80075AA8;
extern s32 D_80075AD0;

s32 func_8026A38C(void) {
    s32 *__base_D_80075AA8;
    s32 temp_v0;

    __base_D_80075AA8 = &D_80075AA8;
    if ((*(s32 *)((char *)(__base_D_80075AA8) + 0x5C)) == 0) {
        if (!((*(s32 *)((char *)(__base_D_80075AA8) + 0x14)) & 8)) {
            goto block_3;
        }
        goto block_5;
    }
block_3:
    (*(s32 *)((char *)(__base_D_80075AA8) + 0x5C)) = 0;
    (*(s32 *)((char *)(__base_D_80075AA8) + 0x28)) = 1;
    (*(s32 *)((char *)(__base_D_80075AA8) + 0x2C)) = 0xB4;
    if ((*(s32 *)((char *)(__base_D_80075AA8) + 0x14)) & 8) {
block_5:
        temp_v0 = (*(s32 *)((char *)((&D_80075AA8)) + 0x2C)) - 1;
        (*(s32 *)((char *)(__base_D_80075AA8) + 0x2C)) = temp_v0;
        if (temp_v0 < 0) {
            (*(s32 *)((char *)(__base_D_80075AA8) + 0x28)) = 0;
        }
    }
    if (D_80075AD0 == 1) {
        func_802694BC();
    }
    return 1;
}
