/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8022DDD0(s32, s32, s32, s32, s32); /* extern */
void *func_80296BC0(s32 *, s32, s32 *); /* extern */
extern s32 D_80036B1C;
extern s32 D_80036C00;
extern s32 D_80075568;
extern void *D_8007BAE4;
extern s8 D_8007DB98;

typedef struct { int field_0; int field_4; int field_8; unsigned char pad_C[68]; float field_50; float field_54; unsigned char pad_58[24]; short field_70; signed char field_72; signed char field_73; } __repair_record_temp_v0;
typedef struct { unsigned char pad_0[36]; int field_24; int field_28; int field_2C; } __repair_record___base_D_80075568;
void func_802A376C(s8 arg0) {
    s32 *__base_D_80075568;
    f32 temp_fv0;
    void *temp_v0;

    temp_v0 = func_80296BC0(&D_80036B1C, 0, &D_80036C00);
    if (temp_v0 != NULL) {
        __base_D_80075568 = &D_80075568;
        ((__repair_record_temp_v0*)temp_v0)->field_0 = (s32) (((__repair_record___base_D_80075568*)__base_D_80075568)->field_24);
        ((__repair_record_temp_v0*)temp_v0)->field_8 = (s32) (*((int *)((char *)__base_D_80075568 + 44)));
        ((__repair_record_temp_v0*)temp_v0)->field_4 = (s32) (((__repair_record___base_D_80075568*)__base_D_80075568)->field_28);
        ((__repair_record_temp_v0*)temp_v0)->field_70 = -1;
        ((__repair_record_temp_v0*)temp_v0)->field_73 = 0;
        ((__repair_record_temp_v0*)temp_v0)->field_72 = arg0;
        D_8007BAE4 = temp_v0;
        temp_fv0 = *(f32 *)0x2160E0;
        ((__repair_record_temp_v0*)temp_v0)->field_54 = temp_fv0;
        ((__repair_record_temp_v0*)temp_v0)->field_50 = temp_fv0;
        D_8007DB98 = 1;
        func_8022DDD0(0, 0xA, 0xFF, 0xFF, 0xFF);
    }
}
