/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void *func_80272830(f32 *, s32 *, s32, s32, s32, s32); /* extern */
extern s32 D_80030C50;
extern void *D_8006A4FC;

void func_802700F8(f32 arg0, f32 arg1, f32 arg2, s32 arg3, u8 arg4) {
    f32 sp18[3];
    s32 sp28[3];
    unsigned temp_s1;
    void *temp_v0;

    sp18[0] = (*(f32 *)((char *)(D_8006A4FC) + 0x24)) + arg0;
    temp_s1 = D_80030C50;
    sp18[1] = (*(f32 *)((char *)(D_8006A4FC) + 0x28)) + arg1;
    D_80030C50 = 0;
    sp28[0] = 0;
    sp28[1] = 0;
    sp18[2] = (*(f32 *)((char *)(D_8006A4FC) + 0x2C)) + arg2;
    sp28[2] = 0;
    temp_v0 = func_80272830(sp18, sp28, arg3 & 0xFF, arg4 & 0xFF, 0, 0);
    if (temp_v0 != NULL) {
        (*(void **)((char *)(temp_v0) + 0x110)) = (void *) D_8006A4FC;
    }
    D_80030C50 = temp_s1;
}
