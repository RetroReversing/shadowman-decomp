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

void *func_80296BC0(M2C_UNK, M2C_UNK, M2C_UNK *);   /* extern */
M2C_UNK func_80296CE0(M2C_UNK);                     /* extern */
extern M2C_UNK D_80036D58;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007DB78;

typedef struct { int field_0; int field_4; int field_8; unsigned char pad_C[28]; int field_28; unsigned char pad_2C[36]; float field_50; float field_54; unsigned char pad_58[26]; unsigned char field_72; } __repair_record_var_v1;
void *func_8029A6B8(void) {
    f32 temp_fv0;
    void *var_v1;

    var_v1 = NULL;
    if ((M2C_FIELD(&D_8007DB78, u8 *, 0x21) == 0) && ((M2C_FIELD(&D_8007DB78, u8 *, 0x21) = 1U, var_v1 = func_80296BC0(0, 0, &D_80036D58), (var_v1 != NULL)) || (func_80296CE0(1), var_v1 = func_80296BC0(0, 0, &D_80036D58), (var_v1 != NULL)))) {
        temp_fv0 = *(f32 *)0x215AC4;
        ((__repair_record_var_v1*)var_v1)->field_28 = 0;
        ((__repair_record_var_v1*)var_v1)->field_50 = temp_fv0;
        ((__repair_record_var_v1*)var_v1)->field_54 = temp_fv0;
        ((__repair_record_var_v1*)var_v1)->field_0 = (s32) M2C_FIELD(&D_80075568, s32 *, 0x24);
        ((__repair_record_var_v1*)var_v1)->field_4 = (s32) M2C_FIELD(&D_80075568, s32 *, 0x28);
        ((__repair_record_var_v1*)var_v1)->field_8 = (s32) M2C_FIELD(&D_80075568, s32 *, 0x2C);
        ((__repair_record_var_v1*)var_v1)->field_72 = (u8) (((__repair_record_var_v1*)var_v1)->field_72 | 8);
    }
    return var_v1;
}
