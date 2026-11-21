/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8022953C(void *);                      /* extern */
s32 func_80229AAC(s32, s8, s8, s8);                 /* extern */
extern s32 D_2D70E0;
extern u8 D_8007DC06;

void func_802DAB7C(void *arg0) {
    s8 sp10;
    s8 sp11;
    s8 sp12;

    sp11 = (*(s8 *)((char *)(&D_2D70E0) + 1));
    sp10 = (*(s8 *)((char *)(&D_2D70E0) + 0));
    sp12 = (*(s8 *)((char *)(&D_2D70E0) + 2));
    func_8022953C(arg0);
    D_8007DC06 = (u8) (&sp10)[(func_80229AAC((*(const s32 *)((char *)(arg0) + 0x28)), (*(s8 *)((char *)(&D_2D70E0) + 0)), (*(s8 *)((char *)(&D_2D70E0) + 1)), (*(s8 *)((char *)(&D_2D70E0) + 2))) - 1) & 0xFF];
}
