/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern void *D_8006A4FC;
extern s32 D_8007AFB0;
extern s32 D_8007AFF8;
extern void *D_8007B0AC;

void func_8027003C(void *arg0) {
    void **__base_D_8006A4FC;
    void *temp_v1;
    register s32 temp_v1_2;

    __base_D_8006A4FC = &D_8006A4FC;
    temp_v1 = (*__base_D_8006A4FC);
    (*__base_D_8006A4FC) = arg0;
    D_8007B0AC = temp_v1;
    temp_v1_2 = (s32)D_8007AFF8;
    D_8007AFB0 = temp_v1_2;
    D_8007AFF8 = (*(s32 *)((char *)(arg0) + 0x6C));
}
