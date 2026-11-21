/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80270E0C(f32,  void *,  s32); /* extern */
extern void *D_8007AFF8;

typedef struct { unsigned char pad[68]; int value; } __repair_field_44;
typedef struct { unsigned char pad[72]; int value; } __repair_field_48;
typedef struct { unsigned char pad_0[84]; signed char field_54; unsigned char pad_55[23]; float field_6C; unsigned char pad_70[68]; int field_B4; int field_B8; unsigned char pad_BC[4]; int field_C0; unsigned char pad_C4[4]; int field_C8; } __repair_record_D_8007AFF8;
void func_8028ABE0(void) {
    register u32 temp_v0;

    ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_54 = 0;
    ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_B4 = 0;
    ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_B8 = 0;
    ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_C0 = 0;
    ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_C8 = 0;
    ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_6C = (f32) *(f32 *)0x215274;
    temp_v0 = (((((__repair_field_44 *)D_8007AFF8)->value | 0x80) & 0xFFFEFFFF & ~0x10) | 0x08000002) & 0xFFFBFFFF;
    ((__repair_field_44 *)D_8007AFF8)->value = (s32) (((__repair_field_44 *)D_8007AFF8)->value & ~0x400);
    ((__repair_field_44 *)D_8007AFF8)->value = temp_v0;
    ((__repair_field_44 *)D_8007AFF8)->value = (s32) ((s32)temp_v0 & 0xFEFFFFFF);
    ((__repair_field_48 *)D_8007AFF8)->value = (s32) (((__repair_field_48 *)D_8007AFF8)->value | 0x1000);
    func_80270E0C(*(f32 *)0x215278,  D_8007AFF8,  -0x401);
}
