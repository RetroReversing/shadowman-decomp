/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80109918();
s32 func_802A7CD4();

typedef struct { unsigned char pad_0[28]; int field_1C; unsigned char pad_20[24]; float field_38; unsigned char pad_3C[12]; unsigned char field_48; unsigned char field_49; signed char field_4A; unsigned char pad_4B[5]; unsigned char field_50; } __repair_record_arg0;
void func_802AFF10(void *arg0) {
    func_802A7CD4();
    ((__repair_record_arg0*)arg0)->field_48 = 0xFF;
    ((__repair_record_arg0*)arg0)->field_49 = 0xC8;
    ((__repair_record_arg0*)arg0)->field_50 |= 1;
    ((__repair_record_arg0*)arg0)->field_4A = 0;
    ((__repair_record_arg0*)arg0)->field_1C = func_80109918(arg0 + 0x54, 0x7F, *(s16 *)0x216C2C);
    ((__repair_record_arg0*)arg0)->field_38 = (f32) *(f32 *)0x216838;
}
