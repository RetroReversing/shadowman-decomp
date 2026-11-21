/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80109918(void *, s32, s16);            /* extern */
s32 func_80113AD0();                                /* extern */
f32 func_8022EBE8(void);                        /* extern */
s32 func_802A7CD4();                            /* extern */
s32 func_802B3494();                            /* extern */

typedef struct { unsigned char pad_0[28]; int field_1C; unsigned char pad_20[24]; float field_38; unsigned char pad_3C[12]; unsigned char field_48; unsigned char field_49; unsigned char field_4A; unsigned char pad_4B[5]; unsigned char field_50; unsigned char field_51; unsigned char pad_52[22]; int field_68; unsigned char pad_6C[32]; float field_8C; unsigned char pad_90[8]; float field_98; } __repair_record_arg0;
void func_802B33D8(void *arg0) {
    f32 temp_fs0;
    register f32 temp_fv0;
    u32 temp_ret;

    func_802A7CD4();
    ((__repair_record_arg0*)arg0)->field_49 = 0xB4;
    ((__repair_record_arg0*)arg0)->field_48 = 0;
    ((__repair_record_arg0*)arg0)->field_4A = 0xFF;
    ((__repair_record_arg0*)arg0)->field_50 = (u8) (((__repair_record_arg0*)arg0)->field_50 | 1);
    ((__repair_record_arg0*)arg0)->field_38 = (f32) *(f32 *)0x216A10;
    temp_ret = func_80113AD0();
    temp_fs0 = *(f32 *)0x216A14;
    ((__repair_record_arg0*)arg0)->field_8C = (f32) ((int)temp_ret % 360);
    temp_fv0 = func_8022EBE8();
    ((__repair_record_arg0*)arg0)->field_98 = temp_fv0;
    if (temp_fv0 < 0.0f) {
        func_802B3494();
        return;
    }
    ((__repair_record_arg0*)arg0)->field_98 = (f32) (temp_fv0 + temp_fs0);
    ((__repair_record_arg0*)arg0)->field_68 = 0;
    ((__repair_record_arg0*)arg0)->field_51 = 0;
    ((__repair_record_arg0*)arg0)->field_1C = func_80109918(arg0 + 0x54, 0x7F, *(s16 *)0x216C3E);
}
