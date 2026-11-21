/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8022D440(s32, s32, s32 *);             /* extern */
s32 func_8022DAF0(s32);                     /* extern */
extern s32 D_2020D8;
extern s32 D_2020E8;
extern u32 D_80000318;
extern s32 D_800597B0;
extern s32 D_80059818;

void func_8022D5A0(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x25800;
    if ((u32) D_80000318 > 0x400000U) {
        var_s0 = 0x54600;
    }
    temp_v0 = func_8022D440(var_s0 * 2, 0, &D_2020D8);
    (*(s32 *)((char *)(&D_800597B0) + 0)) = temp_v0;
    (*(s32 *)((char *)(&D_800597B0) + 4)) = func_8022D440((s32)var_s0, temp_v0, &D_2020E8);
    D_80059818 = 2;
    do { func_8022DAF0(0); } while (0);
    (*(s16 *)((char *)(&D_800597B0) + 8)) = -1;
}
