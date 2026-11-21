/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80239480(s32 *);                   /* extern */
extern s32 D_2C4380;
extern s32 D_8002DBD0;
extern s32 D_8007BEE4;

s32 func_802C43C0(void) {
    s32 *__base_D_8007BEE4;
    int var_v0;

    var_v0 = 0;
    if ((*(s32 *)((char *)(&D_8002DBD0) + 0xC)) == 0) {
        if ((*(s32 *)((char *)(&D_8002DBD0) + 0x1C)) != 0) {
            return 0;
        }
        (*__base_D_8007BEE4) = 0;
        __base_D_8007BEE4 = &D_8007BEE4;
        func_80239480(&D_2C4380);
        var_v0 = (*__base_D_8007BEE4) == 0;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
