/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80296A28();                            /* extern */
s32 func_802A5E30();                            /* extern */
s32 func_802B7270();                            /* extern */
extern s32 D_8007B340;
extern s32 D_8007B350;
extern s32 D_8007B360;
extern s32 D_8007B370;

void func_80292DC0(void) {
    s32 *var_a1;
    s32 *var_a2;
    s32 *var_a3;
    s32 var_t2;

    func_80296A28();
    func_802A5E30();
    func_802B7270();
    var_t2 = 0;
    var_a3 = &D_8007B370;
    var_a2 = &D_8007B360;
    var_a1 = &D_8007B340;
    (*(s8 *)((char *)(&D_8007B350) + 2)) = 0xFF;
    (*(s8 *)((char *)(&D_8007B350) + 1)) = 0xFF;
    (*(s8 *)((char *)(&D_8007B350) + 0)) = 0xFF;
    (*(s8 *)((char *)(&D_8007B350) + 3)) = 0x40;
    do {
        (*(s8 *)((char *)(var_a1) + 0)) = 0xFF;
        (*(s8 *)((char *)(var_a1) + 2)) = 0xC8;
        (*(s8 *)((char *)(var_a1) + 1)) = 0xC8;
        (*(s8 *)((char *)(var_a1) + 3)) = 0xFF;
        (*(s8 *)((char *)(var_a2) + 3)) = 0xFF;
        (*(s8 *)((char *)(var_a2) + 0)) = 0xFF;
        (*(s8 *)((char *)(var_a2) + 2)) = 0xC8;
        (*(s8 *)((char *)(var_a2) + 1)) = 0xC8;
        (*(s8 *)((char *)(var_a3) + 3)) = 8;
        (*(s8 *)((char *)(var_a3) + 0)) = 8;
        (*(s8 *)((char *)(var_a3) + 1)) = 0xFF;
        (*(s8 *)((char *)(var_a3) + 2)) = 0xD2;
        var_a3 += 4;
        var_t2 += 1;
        var_a2 += 4;
        var_a1 += 1;
    } while (var_t2 < 4);
}
