/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80269604(void);                   /* extern */
extern s32 D_80075AA8;
extern s32 D_80075AC8;

s32 func_8026A420(void) {
    s32 temp_v0;

    if ((*(s32 *)((char *)(&D_80075AA8) + 0x58)) == 0) {
        if (!((*(s32 *)((char *)(&D_80075AA8) + 0x14)) & 4)) {
            goto block_3;
        }
        goto block_5;
    }
block_3:
    (*(s32 *)((char *)(&D_80075AA8) + 0x58)) = 0;
    (*(s32 *)((char *)(&D_80075AA8) + 0x20)) = 1;
    (*(s32 *)((char *)(&D_80075AA8) + 0x24)) = 0xB4;
    if ((*(s32 *)((char *)(&D_80075AA8) + 0x14)) & 4) {
block_5:
        temp_v0 = (*(s32 *)((char *)(&D_80075AA8) + 0x24)) - 1;
        (*(s32 *)((char *)(&D_80075AA8) + 0x24)) = temp_v0;
        if (temp_v0 < 0) {
            (*(s32 *)((char *)(&D_80075AA8) + 0x20)) = 0;
        }
    }
    if (D_80075AC8 == 1) {
        func_80269604();
    }
    return 1;
}
