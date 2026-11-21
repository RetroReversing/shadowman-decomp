extern float D_8007558C;
extern float D_80075594;
extern float D_80075590;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80240418();
extern char D_212078[];
extern void *D_8006A4FC;
extern u8 D_8006A58B;
extern char D_80075568[];
extern void *D_8007AFF8;

u8 func_8028AB24(void) {
    char *__base_D_212078;
    f32 sp10[3];
    f32 sp20[3];

    sp10[0] = D_8007558C;
    sp10[1] = D_80075590 + *(f32 *)0x21526C;
    sp10[2] = D_80075594;
    sp20[0] = (*(f32 *)((char *)(D_8006A4FC) + 0x24));
    __base_D_212078 = D_212078;
    sp20[1] = (*(f32 *)((char *)(D_8006A4FC) + 0x28)) + (*(f32 *)((char *)((((*(u8 *)((char *)(D_8007AFF8) + 0x40)) * 0x6C) + __base_D_212078)) + 0x30)) + *(f32 *)0x215270;
    sp20[2] = (*(f32 *)((char *)(D_8006A4FC) + 0x2C));
    func_80240418(sp20, sp10, 0x3F800000);
    return D_8006A58B;
}
