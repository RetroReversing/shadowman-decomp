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

f32 func_8011B7E0();
f32 func_802C8A04();
extern void *D_80061A10;
extern void *D_8006A59C;

f32 func_802C880C(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_fa1;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_ft1f;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_ft0f;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2;
    void *temp_v0;

    var_a2 = arg2;
    var_fa0 = 0.0f;
    var_fa1 = 0.0f;
    var_ft0f = 0.0f;
    if (arg0 == NULL) {
        return func_802C8A04(arg0, 0, 0);
    }
    temp_v0 = (M2C_FIELD(arg0, u16 *, 8) * 0x10) + M2C_FIELD(D_8006A59C, s32 *, 0x1C);
    temp_ft1f = M2C_FIELD(temp_v0, f32 *, 0);
    temp_ft1 = M2C_FIELD(temp_v0, f32 *, 8);
    if ((temp_ft1f == 0.0f) && (temp_ft1 == 0.0f)) {
        D_80061A10 = D_8006A59C;
        var_a2 = 0;
        if ((M2C_FIELD(arg0, u8 *, 0) - 1) > 0) {
            do {
                temp_v1 = *(s32 *)(((M2C_FIELD(arg0, u16 *, 6) + var_a2) * 6) + M2C_FIELD(D_8006A59C, s32 *, 0x20)) * 6;
                temp_v1_2 = M2C_FIELD((((M2C_FIELD(arg0, u16 *, 6) + var_a2) * 6) + M2C_FIELD(D_8006A59C, s32 *, 0x20)), u16 *, 6) * 6;
                temp_ft0 = (f32) *(f32 *)(temp_v1_2 + M2C_FIELD(D_8006A59C, s32 *, 0x18)) - (f32) *(f32 *)(temp_v1 + M2C_FIELD(D_8006A59C, s32 *, 0x18));
                temp_fv1f = (f32) M2C_FIELD((temp_v1_2 + M2C_FIELD(D_8006A59C, s32 *, 0x18)), s16 *, 4) - (f32) M2C_FIELD((temp_v1 + M2C_FIELD(D_8006A59C, s32 *, 0x18)), s16 *, 4);
                temp_fv1 = (temp_ft0 * temp_ft0) + (temp_fv1f * temp_fv1f);
                if (var_fa1 < temp_fv1) {
                    var_fa1 = temp_fv1;
                    var_fa0 = temp_ft0;
                    var_ft0f = temp_fv1f;
                }
                var_a2 += 1;
            } while (var_a2 < (M2C_FIELD(arg0, u8 *, 0) - 1));
        }
        if (var_fa1 != 0.0f) {
            temp_fa1 = sqrtf(var_fa1);
            func_8011B7E0(var_fa0 / temp_fa1, var_ft0f / temp_fa1, D_8006A59C, var_a2);
            return func_802C8A04();
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return func_8011B7E0(temp_ft1f, temp_ft1, D_8006A59C, var_a2) * *(f32 *)0x218580;
    }
    return func_8011B7E0(temp_ft1f, temp_ft1, D_8006A59C, var_a2) * *(f32 *)0x218580;
}
