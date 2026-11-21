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

M2C_UNK func_802A6808();                            /* extern */
M2C_UNK func_802B275C(void *);                      /* extern */
extern M2C_UNK D_8007DB88;

typedef struct { unsigned char pad_0[8]; void * field_8; void * field_C; unsigned char pad_10[32]; float field_30; unsigned char pad_34[16]; int field_44; unsigned char pad_48[12]; float field_54; float field_58; float field_5C; float field_60; unsigned char pad_64[8]; float field_6C; float field_70; float field_74; } __repair_record_arg0;
void func_802B1DD8(void *arg0) {
    f32 *var_v0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 temp_v0;
    u32 temp_v0_2;
    void *temp_s0;

    temp_s0 = ((__repair_record_arg0*)arg0)->field_C;
    func_802A6808();
    if (M2C_FIELD(((((__repair_record_arg0*)arg0)->field_44 * 0x50) + M2C_FIELD(((__repair_record_arg0*)arg0)->field_8, s32 *, 8)), u8 *, 0x33) & 1) {
        ((__repair_record_arg0*)arg0)->field_70 = (f32) (((__repair_record_arg0*)arg0)->field_70 - (M2C_FIELD(&D_8007DB88, f32 *, 4) * *(f32 *)0x2169A8));
    }
    temp_fv0 = ((__repair_record_arg0*)arg0)->field_60 + M2C_FIELD(&D_8007DB88, f32 *, 4);
    ((__repair_record_arg0*)arg0)->field_60 = temp_fv0;
    if (*(f32 *)0x2169AC < temp_fv0) {
        ((__repair_record_arg0*)arg0)->field_60 = 0.0f;
    }
    var_v0 = &D_8007DB88 + 4;
    if (temp_s0 != NULL) {
        temp_v0 = M2C_FIELD(temp_s0, s32 *, 4);
        M2C_FIELD(temp_s0, s32 *, 4) = (s32) (temp_v0 - 1);
        if (temp_v0 == 0) {
            M2C_FIELD(temp_s0, s32 *, 4) = 0xB;
        }
        M2C_FIELD((temp_s0 + (M2C_FIELD(temp_s0, s32 *, 4) * 0xC)), f32 *, 8) = (f32) (((__repair_record_arg0*)arg0)->field_54 - ((__repair_record_arg0*)arg0)->field_6C);
        M2C_FIELD((temp_s0 + (M2C_FIELD(temp_s0, s32 *, 4) * 0xC)), f32 *, 0xC) = (f32) (((__repair_record_arg0*)arg0)->field_58 - ((__repair_record_arg0*)arg0)->field_70);
        M2C_FIELD((temp_s0 + (M2C_FIELD(temp_s0, s32 *, 4) * 0xC)), f32 *, 0x10) = (f32) (((__repair_record_arg0*)arg0)->field_5C - ((__repair_record_arg0*)arg0)->field_74);
        temp_v0_2 = M2C_FIELD(temp_s0, u32 *, 0) + 1;
        M2C_FIELD(temp_s0, u32 *, 0) = temp_v0_2;
        var_v0 = &D_8007DB88 + 4;
        if (temp_v0_2 >= 0xDU) {
            M2C_FIELD(temp_s0, u32 *, 0) = 0xCU;
            var_v0 = &D_8007DB88 + 4;
        }
    }
    temp_fv0_2 = ((__repair_record_arg0*)arg0)->field_30 - *var_v0;
    ((__repair_record_arg0*)arg0)->field_30 = temp_fv0_2;
    if (temp_fv0_2 <= 0.0f) {
        ((__repair_record_arg0*)arg0)->field_30 = 0.0f;
    }
    if (((__repair_record_arg0*)arg0)->field_30 <= 0.0f) {
        func_802B275C(arg0);
    }
}
