/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80268F50(s16);                         /* extern */
extern u8 D_209890[];
extern s32 D_80074BB0;
extern s32 D_80075AA8;

void func_80227D60(s32 arg0) {
    u8 temp_s1;

    temp_s1 = (*(u8 *)((char *)(&D_80075AA8) + 0x6B));
    (*(s32 *)((char *)(&D_80075AA8) + 0x2C)) = 0xB4;
    (*(s32 *)((char *)(&D_80075AA8) + 0x68)) = (s32) (arg0 & 0xFF);
    (*(s32 *)((char *)(&D_80075AA8) + 0x34)) = 0xB4;
    (*(s32 *)((char *)(&D_80075AA8) + 0x24)) = 0xB4;
    (*(s32 *)((char *)(&D_80075AA8) + 0x3C)) = 0xB4;
    (*(s32 *)((char *)(&D_80075AA8) + 0x1C)) = 0xB4;
    (*(s32 *)((char *)(&D_80075AA8) + 0x28)) = 1;
    (*(s32 *)((char *)(&D_80075AA8) + 0x30)) = 1;
    (*(s32 *)((char *)(&D_80075AA8) + 0x20)) = 1;
    (*(s32 *)((char *)(&D_80075AA8) + 0x38)) = 1;
    (*(s32 *)((char *)(&D_80075AA8) + 0x18)) = 1;
    func_80268F50((*(s16 *)((char *)(((D_80074BB0 * 0x34) + D_209890)) + 8)));
    (*(s32 *)((char *)(&D_80075AA8) + 0x68)) = (s32) (temp_s1 & 0xFF);
}
