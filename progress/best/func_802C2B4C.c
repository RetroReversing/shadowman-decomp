/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802244AC(void *, s32);             /* extern */
s32 func_802383C0(void *);                      /* extern */
s32 func_802397D0(s32);                         /* extern */
s32 func_8023981C(s32);                         /* extern */
s32 func_802398C8(f32 *, f32 *, f32 *);         /* extern */
s32 func_80239AEC(s32, f32 *);                  /* extern */
extern s32 D_8002C1B0;
extern s32 D_8005EA2C;
extern s32 D_80074BF4;
extern s32 D_800752D0;
extern s32 D_80075558;

typedef struct { unsigned char pad_0[24]; int field_18; float field_1C; float field_20; float field_24; float field_28; float field_2C; float field_30; unsigned char pad_34[48]; void * field_64; unsigned char pad_68[24]; int field_80; } __repair_record_temp_s1;
void func_802C2B4C(void *arg0) {
    s32 *__base_D_8005EA2C;
    f32 sp10;
    f32 sp20;
    f32 sp30[4];
    register f32 *temp_a0;
    f32 *temp_s2;
    f32 temp_fv0f;
    void *temp_s1;

    if ((D_800752D0 == 0) && (D_80074BF4 & 2)) {
        temp_s1 = (*(void **)((char *)(arg0) + 8));
        ((__repair_record_temp_s1*)temp_s1)->field_18 = 0;
        ((__repair_record_temp_s1*)temp_s1)->field_1C = (f32) *(f32 *)0x218388;
        ((__repair_record_temp_s1*)temp_s1)->field_20 = (f32) *(f32 *)0x21838C;
        func_80239AEC(temp_s1 + 0x18, &sp10);
        ((__repair_record_temp_s1*)temp_s1)->field_24 = 0;
        ((__repair_record_temp_s1*)temp_s1)->field_28 = (f32) *(f32 *)0x218390;
        ((__repair_record_temp_s1*)temp_s1)->field_2C = (f32) *(f32 *)0x218394;
        sp30[1] = ((__repair_record_temp_s1*)temp_s1)->field_24;
        sp30[2] = ((__repair_record_temp_s1*)temp_s1)->field_28;
        sp30[3] = ((__repair_record_temp_s1*)temp_s1)->field_2C;
        temp_fv0f = ((__repair_record_temp_s1*)temp_s1)->field_30;
        if (temp_fv0f != *(f32 *)0x218398) {
            sp10 *= temp_fv0f;
            sp20 *= ((__repair_record_temp_s1*)temp_s1)->field_30;
            sp30[0] *= ((__repair_record_temp_s1*)temp_s1)->field_30;
        }
        temp_s2 = temp_s1 + 0x34;
        func_802398C8(D_80075558 + 0x80, &sp10, temp_s2);
        if ((*(u16 *)((char *)(((__repair_record_temp_s1*)temp_s1)->field_64) + 0x3C)) & 8) {
            func_802383C0(temp_s1);
        }
        __base_D_8005EA2C = &D_8005EA2C;
        func_802397D0((*__base_D_8005EA2C) + 0x3C);
        temp_a0 = (*__base_D_8005EA2C) + 0x3C;
        func_802398C8(temp_a0, temp_s2, temp_a0);
        func_802244AC(temp_s1, 1);
        D_8002C1B0 = ((__repair_record_temp_s1*)temp_s1)->field_80;
        func_8023981C((*__base_D_8005EA2C) + 0x3C);
    }
}
