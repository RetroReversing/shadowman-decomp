/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8026974C(void);                   /* extern */
extern s32 D_80075AA8;
extern s32 D_80075AD8;

s32 func_8026A4B4(void) {
    s32 temp_v0;

    if ((*(s32 *)((char *)(&D_80075AA8) + 0x64)) == 0) {
        if (!((*(s32 *)((char *)(&D_80075AA8) + 0x14)) & 0x10)) {
            goto block_3;
        }
        goto block_5;
    }
block_3:
    (*(s32 *)((char *)(&D_80075AA8) + 0x30)) = 1;
    (*(s32 *)((char *)(&D_80075AA8) + 0x34)) = 0xB4;
    (*(s32 *)((char *)(&D_80075AA8) + 0x64)) = 0;
    if ((*(s32 *)((char *)(&D_80075AA8) + 0x14)) & 0x10) {
block_5:
        temp_v0 = (*(s32 *)((char *)(&D_80075AA8) + 0x34)) - 1;
        (*(s32 *)((char *)(&D_80075AA8) + 0x34)) = temp_v0;
        if (temp_v0 < 0) {
            (*(s32 *)((char *)(&D_80075AA8) + 0x30)) = 0;
        }
    }
    if (D_80075AD8 == 1) {
        func_8026974C();
    }
    return 1;
}
