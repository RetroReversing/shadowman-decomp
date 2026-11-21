/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80240418(f32 *,  f32 *); /* extern */
extern void *D_8006A4FC;
extern u8 D_8006A58B;
extern s32 D_80075568;

u8 func_8029001C(void) {
    register s32 *__base_D_80075568;
    f32 sp10[3];
    f32 sp20[3];

    __base_D_80075568 = &D_80075568;
    sp10[0] = (*(f32 *)((char *)(__base_D_80075568) + 0x24));
    sp10[1] = (*(f32 *)((char *)(__base_D_80075568) + 0x28)) + *(f32 *)0x215640;
    sp10[2] = (*(f32 *)((char *)(__base_D_80075568) + 0x2C));
    sp20[0] = (*(f32 *)((char *)(D_8006A4FC) + 0x24));
    sp20[1] = (*(f32 *)((char *)(D_8006A4FC) + 0x28));
    sp20[2] = (*(f32 *)((char *)(D_8006A4FC) + 0x2C));
    { func_80240418(sp20,  sp10); }
    return D_8006A58B;
}
