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

void *func_80296BC0(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern u16 D_8002C110;
extern u16 D_8002C112;
extern M2C_UNK D_80036B1C;
extern M2C_UNK D_80036BF8;

typedef struct { f32 __repair_v[3]; } __repair_vec3;
typedef struct { float field_0; float field_4; float field_8; unsigned char pad_C[68]; float field_50; float field_54; int field_58; unsigned char pad_5C[16]; int field_6C; unsigned char pad_70[2]; unsigned char field_72; } __repair_record_temp_v0;
void *func_802A0170(void) {
    f32 temp_fv0;
    void *temp_v0;

    temp_v0 = func_80296BC0(&D_80036B1C, 0, &D_80036BF8);
    if (temp_v0 != NULL) {
        ((__repair_record_temp_v0*)temp_v0)->field_0 = (f32) ((u16) D_8002C110 >> 1);
        ((__repair_record_temp_v0*)temp_v0)->field_4 = (f32) ((u16) D_8002C112 >> 1);
        temp_fv0 = *(f32 *)0x215E70;
        ((__repair_record_temp_v0*)temp_v0)->field_8 = (f32) *(f32 *)0x215E6C;
        (*(__repair_vec3 *) ((s8 *) (temp_v0) + 0xC)) = (*(__repair_vec3 *) ((s8 *) (temp_v0) + 0));
        ((__repair_record_temp_v0*)temp_v0)->field_6C = 0x22;
        ((__repair_record_temp_v0*)temp_v0)->field_58 = 0;
        ((__repair_record_temp_v0*)temp_v0)->field_50 = temp_fv0;
        ((__repair_record_temp_v0*)temp_v0)->field_54 = temp_fv0;
        ((__repair_record_temp_v0*)temp_v0)->field_72 = (u8) (M2C_FIELD(temp_v0, const u8 *, 0x72) | 8);
    }
    return temp_v0;
}
