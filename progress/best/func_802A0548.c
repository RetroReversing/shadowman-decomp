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

s32 func_80113AD0();
void *func_80296BC0();
extern char D_80036CA0[];

typedef struct { unsigned char pad_0[12]; float field_C; unsigned char pad_10[92]; int field_6C; } __repair_record_temp_v0;
void *func_802A0548(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, 0, D_80036CA0);
    if (temp_v0 != NULL) {
        ((__repair_record_temp_v0*)temp_v0)->field_6C = 0;
        ((__repair_record_temp_v0*)temp_v0)->field_C = (f32) *(f32 *)0x215E9C;
        var_v0 = func_80113AD0();
        temp_v1 = var_v0;
        if (temp_v1 < 0) {
            var_v0 = temp_v1 + 3;
        }
        M2C_FIELD(temp_v0, f32 *, 0x50) = M2C_BITWISE(f64, (f32) (temp_v1 - ((var_v0 >> 2) * 4)));
    }
    return temp_v0;
}
