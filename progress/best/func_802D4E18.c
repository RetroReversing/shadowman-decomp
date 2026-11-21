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

extern M2C_UNK D_8007BF58;
extern M2C_UNK D_8007C888;

typedef struct { unsigned char pad_0[4]; float field_4; float field_8; float field_C; } __repair_record_arg0;
typedef struct { float field_0; float field_4; float field_8; } __repair_record___base_D_8007C888;
void *func_802D4E18(void *arg0) {
    M2C_UNK *__base_D_8007C888;

    __base_D_8007C888 = &D_8007C888;
    M2C_FIELD(&D_8007BF58, f32 *, 0x2F0) = (f32) ((__repair_record_arg0*)arg0)->field_4;
    M2C_FIELD(&D_8007BF58, f32 *, 0x2F4) = (f32) ((__repair_record_arg0*)arg0)->field_8;
    M2C_FIELD(&D_8007BF58, f32 *, 0x2F8) = (f32) ((__repair_record_arg0*)arg0)->field_C;
    if (M2C_FIELD(&D_8007BF58, u8 *, 0x388) != 0) {
        M2C_FIELD(&D_8007BF58, f32 *, 0x308) = (f32) ((__repair_record_arg0*)arg0)->field_4;
        M2C_FIELD(&D_8007BF58, f32 *, 0x30C) = (f32) ((__repair_record_arg0*)arg0)->field_8;
        M2C_FIELD(&D_8007BF58, f32 *, 0x310) = (f32) ((__repair_record_arg0*)arg0)->field_C;
    }
    ((__repair_record___base_D_8007C888*)__base_D_8007C888)->field_0 = (f32) ((__repair_record_arg0*)arg0)->field_4;
    ((__repair_record___base_D_8007C888*)__base_D_8007C888)->field_4 = (f32) ((__repair_record_arg0*)arg0)->field_8;
    ((__repair_record___base_D_8007C888*)__base_D_8007C888)->field_8 = (f32) ((__repair_record_arg0*)arg0)->field_C;
    return arg0 + 0x10;
}
