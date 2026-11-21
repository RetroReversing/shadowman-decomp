/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
void *func_80296BC0(s32, s32 *);            /* extern */
extern s32 D_80036BF0;

typedef struct { float field_0; float field_4; float field_8; unsigned char pad_C[24]; float field_24; float field_28; float field_2C; unsigned char pad_30[28]; float field_4C; unsigned char pad_50[8]; float field_58; unsigned char pad_5C[16]; int field_6C; unsigned char pad_70[3]; signed char field_73; } __repair_record_temp_v0;
void *func_80297834(void) {
    f32 temp_fs0;
    void *temp_v0;

    temp_v0 = func_80296BC0(0, &D_80036BF0);
    if (temp_v0 != NULL) {
        temp_fs0 = *(f32 *)0x215914;
        (((__repair_record_temp_v0*)temp_v0)->field_4) = func_8022EC3C(temp_fs0);
        (((__repair_record_temp_v0*)temp_v0)->field_0) = func_8022EBE8(temp_fs0);
        (((__repair_record_temp_v0*)temp_v0)->field_8) = func_8022EBE8(temp_fs0);
        (((__repair_record_temp_v0*)temp_v0)->field_24) = func_8022EBE8(temp_fs0);
        (((__repair_record_temp_v0*)temp_v0)->field_28) = func_8022EBE8(temp_fs0);
        (((__repair_record_temp_v0*)temp_v0)->field_2C) = func_8022EBE8(temp_fs0);
        (((__repair_record_temp_v0*)temp_v0)->field_58) = temp_fs0;
        (((__repair_record_temp_v0*)temp_v0)->field_73) = 0;
        (((__repair_record_temp_v0*)temp_v0)->field_4C) = (f32) *(f32 *)0x215918;
        (((__repair_record_temp_v0*)temp_v0)->field_6C) = 7;
    }
    return temp_v0;
}
