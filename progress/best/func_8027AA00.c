/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80109918(void *, s32, s32);        /* extern */
s32 func_8027003C();                            /* extern */
s32 func_8027006C(void);                     /* extern */
s32 func_80270090(s32);            /* extern */
extern void *D_8006A4FC;
extern void *D_8007AFF8;

typedef struct { unsigned char pad_0[68]; int field_44; unsigned char pad_48[88]; short field_A0; unsigned char pad_A2[4]; short field_A6; unsigned char pad_A8[28]; int field_C4; unsigned char pad_C8[8]; float field_D0; float field_D4; unsigned char pad_D8[48]; int field_108; } __repair_record_D_8007AFF8;
void func_8027AA00(void) {
    s32 __repair_store_0;
    f32 __repair_store_1;
    s32 temp_v0;
    void **__base_D_8006A4FC;


    func_8027003C();
    __repair_store_0 = (s32) ((((__repair_record_D_8007AFF8*)D_8007AFF8)->field_44) & ~2);
    __base_D_8006A4FC = &D_8006A4FC;
    __repair_store_1 = (f32) (*(f32 *)((char *)((*__base_D_8006A4FC)) + 0x28));
    (((__repair_record_D_8007AFF8*)D_8007AFF8)->field_44) = __repair_store_0;
    (((__repair_record_D_8007AFF8*)D_8007AFF8)->field_D4) = __repair_store_1;
    func_80270090(0x14);
    (((__repair_record_D_8007AFF8*)D_8007AFF8)->field_D0) = (f32) *(f32 *)0x2144B8;
    (((__repair_record_D_8007AFF8*)D_8007AFF8)->field_108) = func_80109918((*__base_D_8006A4FC) + 0x24, 0x7F, 0x51);
    (((__repair_record_D_8007AFF8*)D_8007AFF8)->field_A0) = 6;
    (((__repair_record_D_8007AFF8*)D_8007AFF8)->field_C4) = 0;
    (((__repair_record_D_8007AFF8*)D_8007AFF8)->field_A6) = 0x96;
    temp_v0 = (((__repair_record_D_8007AFF8*)D_8007AFF8)->field_44) | 4;
    (((__repair_record_D_8007AFF8*)D_8007AFF8)->field_44) = temp_v0;
    (((__repair_record_D_8007AFF8*)D_8007AFF8)->field_44) = (s32) (temp_v0 | 0x4000);
    func_8027006C();
}
