/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802BC4F0(s32, s32, s32, s32 *, s32, s32, f32); /* extern */
extern s32 D_8006A4FC;
extern s32 D_8007558C;
extern void *D_8007AFF8;
extern f32 D_8007B268;
extern f32 D_8007B264;
extern f32 D_8007B26C;

void func_802916D8(void) {
    void **__base_D_8007AFF8;
    s32 *__base_D_8006A4FC;
    __base_D_8007AFF8 = &D_8007AFF8;
    __base_D_8006A4FC = &D_8006A4FC;
    func_802BC4F0(7, 0, (*(s32 *)((char *)((*__base_D_8007AFF8)) + 0x10C)), &D_8007558C, (*(&D_8006A4FC)) + 0x18, (*__base_D_8006A4FC) + 0x24, D_8007B26C);
    func_802BC4F0(8, 0, (*(s32 *)((char *)((*__base_D_8007AFF8)) + 0x10C)), &D_8007558C, (*__base_D_8006A4FC) + 0x18, (*__base_D_8006A4FC) + 0x24, D_8007B264);
    func_802BC4F0(9, 0, (*(s32 *)((char *)((*__base_D_8007AFF8)) + 0x10C)), &D_8007558C, (*__base_D_8006A4FC) + 0x18, (*__base_D_8006A4FC) + 0x24, D_8007B268);
}
