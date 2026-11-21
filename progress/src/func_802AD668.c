/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802A6508(void *, s32);             /* extern */
s32 func_802A7CD4();                            /* extern */

typedef struct { unsigned char pad_0[32]; float field_20; unsigned char pad_24[16]; int field_34; unsigned char pad_38[25]; signed char field_51; } __repair_record_arg0;
void func_802AD668(void *arg0) {
    func_802A7CD4(arg0);
    ((__repair_record_arg0*)arg0)->field_34 = 0;
    ((__repair_record_arg0*)arg0)->field_20 = (f32) *(f32 *)0x216674;
    ((__repair_record_arg0*)arg0)->field_51 = 0;
    func_802A6508(arg0, 7);
}
