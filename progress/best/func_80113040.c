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

typedef struct { unsigned char pad_0[16]; float field_10; float field_14; unsigned char pad_18[4]; float field_1C; } __repair_record_arg0;
f32 func_80113040(void *arg0, s32 arg1) {
    f32 var_fv0f;
    f32 var_fv1;

    var_fv1 = ((__repair_record_arg0*)arg0)->field_14 + (((__repair_record_arg0*)arg0)->field_10 * (f32) arg1);
    ((__repair_record_arg0*)arg0)->field_14 = var_fv1;
    if (*(f32 *)0x1023B8 < var_fv1) {
        var_fv1 -= *(f32 *)0x1023BC;
    }
    var_fv0f = var_fv1;
    ((__repair_record_arg0*)arg0)->field_14 = var_fv0f;
    if (var_fv0f < 0.0f) {
        var_fv0f = -var_fv0f;
    }
    return ((__repair_record_arg0*)arg0)->field_1C * (var_fv0f - *(f32 *)0x1023C0);
}
