/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802A6508();
s32 func_802A7CD4();

typedef struct { unsigned char pad_0[32]; float field_20; unsigned char pad_24[16]; float field_34; float field_38; unsigned char pad_3C[4]; int field_40; unsigned char pad_44[4]; unsigned char field_48; unsigned char field_49; signed char field_4A; unsigned char pad_4B[5]; unsigned char field_50; unsigned char pad_51[1]; short field_52; } __repair_record_arg0;
void func_802A89DC(void *arg0) {
    func_802A7CD4(arg0);
    ((__repair_record_arg0*)arg0)->field_40 = 7;
    ((__repair_record_arg0*)arg0)->field_52 = 3;
    ((__repair_record_arg0*)arg0)->field_20 = (f32) *(f32 *)0x216394;
    ((__repair_record_arg0*)arg0)->field_34 = (f32) *(f32 *)0x216398;
    func_802A6508(arg0, 0xB);
    ((__repair_record_arg0*)arg0)->field_48 = 0xFF;
    ((__repair_record_arg0*)arg0)->field_4A = 0;
    ((__repair_record_arg0*)arg0)->field_49 = 0xC8;
    ((__repair_record_arg0*)arg0)->field_50 |= 1;
    ((__repair_record_arg0*)arg0)->field_38 = (f32) *(f32 *)0x21639C;
}
