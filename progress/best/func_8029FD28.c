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

M2C_UNK func_80230A3C(u16);                         /* extern */
void *func_80296BC0(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern u16 D_8002C110;
extern u16 D_8002C112;
extern M2C_UNK D_8002C2A0;
extern M2C_UNK D_80036B1C;
extern M2C_UNK D_80036D40;

typedef struct { f32 __repair_v[3]; } __repair_vec3;
typedef struct { float field_0; float field_4; float field_8; unsigned char pad_C[68]; float field_50; float field_54; int field_58; unsigned char pad_5C[16]; int field_6C; unsigned char pad_70[2]; signed char field_72; } __repair_record_temp_s1;
void *func_8029FD28(void) {
    f32 temp_fv0;
    void *temp_s1;

    temp_s1 = func_80296BC0(&D_80036B1C, 0, &D_80036D40);
    func_80230A3C(M2C_FIELD(&D_8002C2A0, u16 *, 0x1A2));
    M2C_FIELD(&D_8002C2A0, u16 *, 0x1A2) = 0x3FU;
    if (temp_s1 != NULL) {
        ((__repair_record_temp_s1*)temp_s1)->field_0 = (f32) ((u16) D_8002C110 >> 1);
        ((__repair_record_temp_s1*)temp_s1)->field_4 = (f32) ((u16) D_8002C112 >> 1);
        temp_fv0 = *(f32 *)0x215E38;
        ((__repair_record_temp_s1*)temp_s1)->field_8 = (f32) *(f32 *)0x215E34;
        (*(__repair_vec3 *) ((s8 *) (temp_s1) + 0xC)) = (*(__repair_vec3 *) ((s8 *) (temp_s1) + 0));
        ((__repair_record_temp_s1*)temp_s1)->field_6C = 0x22;
        ((__repair_record_temp_s1*)temp_s1)->field_72 = 8;
        ((__repair_record_temp_s1*)temp_s1)->field_58 = 0;
        ((__repair_record_temp_s1*)temp_s1)->field_50 = temp_fv0;
        ((__repair_record_temp_s1*)temp_s1)->field_54 = temp_fv0;
    }
    return temp_s1;
}
