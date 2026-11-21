/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80109918(void *, s32, s32);        /* extern */
s32 func_8027003C();                            /* extern */
s32 func_8027006C(s32);                     /* extern */
s32 func_80270090(s32);            /* extern */
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_8027AA00(void) {
    s32 __repair_store_0;
    s32 temp_v0;
    f32 __repair_store_1;
    void **__base_D_8006A4FC;

    __base_D_8006A4FC = &D_8006A4FC;

    func_8027003C();
    __repair_store_0 = (s32) ((*(s32 *)((char *)(D_8007AFF8) + 0x44)) & ~2);
    __repair_store_1 = (f32) (*(f32 *)((char *)((*__base_D_8006A4FC)) + 0x28));
    (*(s32 *)((char *)(D_8007AFF8) + 0x44)) = __repair_store_0;
    (*(f32 *)((char *)(D_8007AFF8) + 0xD4)) = __repair_store_1;
    func_80270090(0x14);
    (*(f32 *)((char *)(D_8007AFF8) + 0xD0)) = (f32) *(f32 *)0x2144B8;
    (*(s32 *)((char *)(D_8007AFF8) + 0x108)) = func_80109918((*__base_D_8006A4FC) + 0x24, 0x7F, 0x51);
    (*(s16 *)((char *)(D_8007AFF8) + 0xA0)) = 6;
    (*(s32 *)((char *)(D_8007AFF8) + 0xC4)) = 0;
    (*(s16 *)((char *)(D_8007AFF8) + 0xA6)) = 0x96;
    (*(s32 *)((char *)(D_8007AFF8) + 0x44)) = temp_v0;
    temp_v0 = (*(s32 *)((char *)(D_8007AFF8) + 0x44)) | 4;
    (*(s32 *)((char *)(D_8007AFF8) + 0x44)) = (s32) (temp_v0 | 0x4000);
    func_8027006C(0x96);
}
