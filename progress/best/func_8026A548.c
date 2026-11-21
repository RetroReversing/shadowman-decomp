/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80269374(void);                   /* extern */
extern s32 D_80075AA8;

s32 func_8026A548(void) {
    s32 temp_v0;

    if ((*(s32 *)((char *)(&D_80075AA8) + 0x60)) == 0) {
        if (!((*(s32 *)((char *)(&D_80075AA8) + 0x14)) & 2)) {
            goto block_3;
        }
        goto block_5;
    }
block_3:
    (*(s32 *)((char *)(&D_80075AA8) + 0x38)) = 1;
    (*(s32 *)((char *)(&D_80075AA8) + 0x3C)) = 0xB4;
    (*(s32 *)((char *)(&D_80075AA8) + 0x60)) = 0;
    if ((*(s32 *)((char *)(&D_80075AA8) + 0x14)) & 2) {
block_5:
        temp_v0 = (*(s32 *)((char *)(&D_80075AA8) + 0x3C)) - 1;
        (*(s32 *)((char *)(&D_80075AA8) + 0x3C)) = temp_v0;
        if (temp_v0 < 0) {
            (*(s32 *)((char *)(&D_80075AA8) + 0x38)) = 0;
        }
    }
    if ((*(s32 *)((char *)(&D_80075AA8) + 0x38)) == 1) {
        func_80269374();
    }
    return (*(s32 *)((char *)(&D_80075AA8) + 0x38));
}
