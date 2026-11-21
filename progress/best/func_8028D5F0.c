/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8027003C();                            /* extern */
s32 func_8027006C(void *);                      /* extern */
s32 func_8027206C(s32, s32);            /* extern */
s32 func_802749F8(void *);                      /* extern */
extern s32 D_80045930;
extern void *D_8006A4FC;
extern void *D_8007AFF8;

typedef struct { unsigned char pad[68]; int value; } __repair_field_44;
void func_8028D5F0(s32 arg0) {
    void **__base_D_8007AFF8;
    func_8027003C();
    (*(s32 *)((char *)(&D_80045930) + 0x184)) = arg0;
    __base_D_8007AFF8 = &D_8007AFF8;
    (*(f32 *)((char *)((*__base_D_8007AFF8)) + 0xB0)) = (f32) *(f32 *)0x21542C;
    (*(s32 *)((char *)(&D_80045930) + 0x188)) = (s32) (*(s32 *)((char *)((*__base_D_8007AFF8)) + 0x10C));
    (*(f32 *)((char *)((*__base_D_8007AFF8)) + 0xB4)) = (f32) *(f32 *)0x215430;
    (*(s16 *)((char *)((*__base_D_8007AFF8)) + 0x9E)) = -1;
    func_8027206C(5, 0);
    (*(s32 *)((char *)((*__base_D_8007AFF8)) + 0x48)) = (s32) ((*(s32 *)((char *)((*__base_D_8007AFF8)) + 0x48)) | 0x1000);
    func_802749F8((*__base_D_8007AFF8));
    ((__repair_field_44 *)(*__base_D_8007AFF8))->value = (s32) (((__repair_field_44 *)(*__base_D_8007AFF8))->value | 0x10);
    (*(s32 *)((char *)(D_8006A4FC) + 0x24)) = 0;
    (*(s32 *)((char *)(D_8006A4FC) + 0x28)) = 0;
    (*(s32 *)((char *)(D_8006A4FC) + 0x2C)) = 0;
    func_8027006C((*__base_D_8007AFF8));
}
