/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_8022EC3C(f32);                             /* extern */
s32 func_80296698(void);                         /* extern */
void *func_80296BC0(s32 *);                     /* extern */
extern s32 D_80036C20;

typedef struct { unsigned char pad_0[76]; float field_4C; float field_50; float field_54; int field_58; float field_5C; unsigned char pad_60[12]; int field_6C; unsigned char pad_70[2]; signed char field_72; } __repair_record_temp_v0;
void *func_802A5110(void) {
    void *temp_v0;
    f32 temp_fv0_2;
    f32 temp_fv0;

    temp_v0 = func_80296BC0(&D_80036C20);
    if (temp_v0 != NULL) {
        ((__repair_record_temp_v0*)temp_v0)->field_6C = 0x3A;
        temp_fv0 = (f32) func_80296698();
        ((__repair_record_temp_v0*)temp_v0)->field_50 = temp_fv0;
        ((__repair_record_temp_v0*)temp_v0)->field_54 = temp_fv0;
        temp_fv0_2 = func_8022EC3C(*(f32 *)0x21620C) + *(f32 *)0x216210;
        ((__repair_record_temp_v0*)temp_v0)->field_58 = 0;
        ((__repair_record_temp_v0*)temp_v0)->field_72 = 1;
        ((__repair_record_temp_v0*)temp_v0)->field_4C = temp_fv0_2;
        ((__repair_record_temp_v0*)temp_v0)->field_5C = (f32) (func_8022EC3C(*(f32 *)0x216214) + *(f32 *)0x216218);
    }
    return temp_v0;
}
