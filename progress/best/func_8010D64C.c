/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s16 func_8010D28C();
extern s32 D_80036944;
extern void *D_8006A4FC;

void func_8010D64C(s32 arg0, s32 arg1, s16 arg2) {
    void **__base_D_8006A4FC;
    register s16 temp_v0;
    void *temp_v1;

    __base_D_8006A4FC = &D_8006A4FC;
    temp_v0 = func_8010D28C(arg0, (*__base_D_8006A4FC) + 0x24, (s32)arg2);
    if (temp_v0 != -1) {
        temp_v1 = D_80036944 + (temp_v0 * 0x34);
        (*(f32 *)((char *)((*__base_D_8006A4FC)) + 0x24)) = (f32) (*(f32 *)((char *)(temp_v1) + 4));
        (*(f32 *)((char *)((*__base_D_8006A4FC)) + 0x2C)) = (f32) (*(f32 *)((char *)(temp_v1) + 0xC));
        (*(f32 *)((char *)((*__base_D_8006A4FC)) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_v1) + 8)) + *(f32 *)0x10203C);
    }
}
