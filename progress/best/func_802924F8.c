/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_801043F8(s32, s32, s32);           /* extern */
extern s32 D_80036920;
extern s32 D_80036934;
extern s32 D_80036940;
extern s32 D_80036948;
extern s32 D_8003694C;

s32 func_802924F8(void) {
int __repair_literal;

__repair_literal = 4;

    D_8003694C = func_801043F8((*(s32 *)((char *)(&D_80036920) + 8)) * 4, 2, 0);
    D_80036934 = func_801043F8((*(s32 *)((char *)(&D_80036920) + 0x10)) * ((*(s32 *)((char *)(&D_80036920) + 0xC)) * __repair_literal), 2, 0);
    D_80036948 = 0;
    D_80036940 = func_801043F8((*(s32 *)((char *)(&D_80036920) + 0xC)) * 4, 2, 0);
    return 1;
}
