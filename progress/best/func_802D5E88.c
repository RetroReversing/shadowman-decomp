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

extern M2C_UNK D_80045C40;
extern s32 D_8007C8F4;
extern M2C_UNK D_8007C900;
extern s32 D_8007DA60;

s32 func_802D5E88(void) {
    s32 ret;
    M2C_UNK *__base_D_8007C900;
    f32 var_fv1;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a3;

    __base_D_8007C900 = &D_8007C900;
    temp_a1 = *(((D_8007DA60 - 1) * 4) + __base_D_8007C900);
    var_a3 = 0;
    if (temp_a1 == -1) {
        /* Duplicate return node #1. Try simplifying control flow for better match */
        return 1;
    }
    temp_v0 = *((D_8007DA60 * 4) + __base_D_8007C900);
    if (temp_v0 == -1) {
        ret = 1;
    } else {
        var_fv1 = 0.0f;
        if (D_8007DA60 != 0) {
            var_fv1 = (f32) temp_a1;
        }
        if ((s32) (var_fv1 + (((f32) temp_v0 - var_fv1) * M2C_FIELD(&D_80045C40, f32 *, 4))) < D_8007C8F4) {
            var_a3 = 1;
        }
        ret = var_a3;
    }
    return var_a3;
}
