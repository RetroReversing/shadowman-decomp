/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8021DD0C(s32 *, s32);              /* extern */
extern s32 D_8002C2A0;
extern s8 D_8002C4DC;
extern s32 D_8004AE98;
extern s32 D_8007BAA0;

void func_80296640(void) {
    s32 *var_v1;
    u32 var_a0;

    var_a0 = 0;
    var_v1 = &D_8002C2A0;
    do {
        (*(s8 *)((char *)(var_v1) + 8)) = 0;
        var_a0 += 1;
        var_v1 += 3;
    } while (var_a0 < 0x4DU);
    D_8002C4DC = 1;
    D_8007BAA0 = func_8021DD0C(&D_8004AE98, 0xA5);
}
