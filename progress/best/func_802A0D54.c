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

s32 func_80113AD0();                                /* extern */
f32 func_8022EBE8(f32, s32);                        /* extern */
f32 func_8022EC3C(void);                             /* extern */
s32 func_80296698(M2C_UNK);                         /* extern */
void *func_80296BC0(M2C_UNK *, M2C_UNK *);          /* extern */
extern M2C_UNK D_80036BAC;
extern M2C_UNK D_80036C98;

typedef struct { unsigned char pad_0[12]; float field_C; unsigned char pad_10[28]; float field_2C; unsigned char pad_30[8]; float field_38; unsigned char pad_3C[16]; float field_4C; float field_50; float field_54; int field_58; float field_5C; } __repair_record_temp_v0;
void *func_802A0D54(void) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 temp_ret;
    void *temp_v0;

    temp_v0 = func_80296BC0(&D_80036BAC, &D_80036C98);
    if (temp_v0 != NULL) {
        ((__repair_record_temp_v0*)temp_v0)->field_58 = 0;
        temp_fv0 = (f32) func_80296698(0x2D);
        ((__repair_record_temp_v0*)temp_v0)->field_54 = temp_fv0;
        ((__repair_record_temp_v0*)temp_v0)->field_50 = temp_fv0;
        temp_fv0_2 = func_8022EC3C() + *(f32 *)0x215F20;
        ((__repair_record_temp_v0*)temp_v0)->field_5C = (f32) *(f32 *)0x215F24;
        ((__repair_record_temp_v0*)temp_v0)->field_4C = temp_fv0_2;
        ((__repair_record_temp_v0*)temp_v0)->field_C = temp_fv0_2;
        temp_ret = func_80113AD0();
        ((__repair_record_temp_v0*)temp_v0)->field_2C = (f32) (temp_ret % 360);
        ((__repair_record_temp_v0*)temp_v0)->field_38 = func_8022EBE8(*(f32 *)0x215F28, (temp_ret / 360) * 3);
    }
    return temp_v0;
}
