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

M2C_UNK func_802A7CD4();                            /* extern */
extern M2C_UNK D_80036B1C;

typedef struct { s32 w[3]; } __repair_words3;
typedef struct { unsigned char pad_0[12]; int field_C; unsigned char pad_10[16]; float field_20; unsigned char pad_24[16]; int field_34; unsigned char pad_38[8]; int field_40; unsigned char pad_44[12]; unsigned char field_50; signed char field_51; } __repair_record_arg0;
void func_802ACAD4(void *arg0) {
    M2C_UNK *__base_D_80036B1C;
    func_802A7CD4();
    ((__repair_record_arg0*)arg0)->field_40 = 7;
    ((__repair_record_arg0*)arg0)->field_34 = 0;
    ((__repair_record_arg0*)arg0)->field_20 = (f32) *(f32 *)0x216624;
    ((__repair_record_arg0*)arg0)->field_50 = (u8) (((__repair_record_arg0*)arg0)->field_50 & 0xFB);
    __base_D_80036B1C = &D_80036B1C;
    M2C_FIELD(arg0, __repair_words3 *, 0x84) = *(__repair_words3 *) ((s8 *) __base_D_80036B1C + 0x0);
    ((__repair_record_arg0*)arg0)->field_C = 0;
    ((__repair_record_arg0*)arg0)->field_51 = 0;
}
