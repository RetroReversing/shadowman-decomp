/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_802244AC(void *, M2C_UNK);             /* extern */
M2C_UNK func_802383C0(void *);                      /* extern */
M2C_UNK func_802397D0(s32);                         /* extern */
M2C_UNK func_8023981C(s32);                         /* extern */
M2C_UNK func_802398C8(f32 *, f32 *, f32 *);         /* extern */
M2C_UNK func_8023B714(s32, f32 *, s32);             /* extern */
extern s32 D_8002C1B0;
extern void *D_80045978;
extern s32 D_8005EA2C;
extern s32 D_8006A4FC;
extern void *D_8007B1D0;

typedef struct { unsigned char pad_0[24]; int field_18; int field_1C; float field_20; float field_24; float field_28; float field_2C; float field_30; unsigned char pad_34[48]; void * field_64; unsigned char pad_68[24]; int field_80; } __repair_record_temp_s1;
void func_80285B4C(void) {
    void **__base_D_8007B1D0;
    s32 *__base_D_8005EA2C;
    f32 sp10;
    f32 sp20;
    f32 sp30[4];
    f32 *temp_a0;
    f32 *temp_s2;
    f32 temp_fv0f;
    void *temp_s1;

    __base_D_8007B1D0 = &D_8007B1D0;
    if ((*__base_D_8007B1D0) != NULL) {
        temp_s1 = M2C_FIELD(D_8007B1D0, void **, 8);
        ((__repair_record_temp_s1*)temp_s1)->field_18 = 0;
        ((__repair_record_temp_s1*)temp_s1)->field_1C = 0;
        ((__repair_record_temp_s1*)temp_s1)->field_20 = (f32) *(f32 *)0x214ED4;
        func_8023B714(temp_s1 + 0x18, &sp10, D_8006A4FC + 0x24);
        ((__repair_record_temp_s1*)temp_s1)->field_24 = (f32) *(f32 *)0x214ED8;
        ((__repair_record_temp_s1*)temp_s1)->field_2C = (f32) *(f32 *)0x214EDC;
        ((__repair_record_temp_s1*)temp_s1)->field_28 = (f32) *(f32 *)0x214EE0;
        sp30[1] = ((__repair_record_temp_s1*)temp_s1)->field_24;
        sp30[2] = ((__repair_record_temp_s1*)temp_s1)->field_28;
        sp30[3] = ((__repair_record_temp_s1*)temp_s1)->field_2C;
        temp_fv0f = ((__repair_record_temp_s1*)temp_s1)->field_30;
        if (temp_fv0f != *(f32 *)0x214EE4) {
            sp10 *= temp_fv0f;
            sp20 *= ((__repair_record_temp_s1*)temp_s1)->field_30;
            sp30[0] *= ((__repair_record_temp_s1*)temp_s1)->field_30;
        }
        temp_s2 = temp_s1 + 0x34;
        func_802398C8(M2C_FIELD(D_80045978, s32 *, 0x40) + 0x400, &sp10, temp_s2);
        if (M2C_FIELD(((__repair_record_temp_s1*)temp_s1)->field_64, u16 *, 0x3C) & 8) {
            func_802383C0(temp_s1);
        }
        __base_D_8005EA2C = &D_8005EA2C;
        func_802397D0((*__base_D_8005EA2C) + 0x3C);
        temp_a0 = (*__base_D_8005EA2C) + 0x3C;
        func_802398C8(temp_a0, temp_s2, temp_a0);
        D_8002C1B0 = ((__repair_record_temp_s1*)temp_s1)->field_80;
        func_802244AC(temp_s1, 1);
        func_8023981C((*__base_D_8005EA2C) + 0x3C);
    }
}
