/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80229B5C(s32 *, void *);           /* extern */
s32 func_80229E74();                                /* extern */
extern s32 D_800596B0;

void func_80229470(void *arg0) {
    if ((*(const s32 *)((char *)(arg0) + 8)) == 0) {
        (*(s32 *)((char *)(arg0) + 8)) = func_80229E74();
    }
    (*(s16 *)((char *)(&D_800596B0) + 0x34)) = 0;
    (*(void **)((char *)(&D_800596B0) + 0x30)) = arg0;
    (*(s32 *)((char *)(&D_800596B0) + 0x28)) = 0;
    (*(s32 *)((char *)(&D_800596B0) + 0x2C)) = 0;
    (*(s16 *)((char *)(&D_800596B0) + 0x36)) = 0x1A0;
    func_80229B5C(&D_800596B0, arg0);
    (*(s16 *)((char *)(&D_800596B0) + 0x38)) = 0;
}
