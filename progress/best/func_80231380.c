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

M2C_UNK func_8023158C(s16 *, s32);                  /* extern */
M2C_UNK func_802316D4(s16 *, s32);                  /* extern */

void func_80231380(void *arg0, void *arg1) {
    f32 temp_ft0f;
    f32 temp_ft1f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 var_ft0;
    f32 var_ft0_2;
    f32 var_ft0f;
    f32 var_ft1;
    f32 var_fv0f;
    f32 var_fv1;
    f32 var_fv1f;
    s16 *temp_a2;
    s16 *var_a2;
    s16 *var_a2_2;
    s32 var_a3;
    s32 var_a3_2;
    u16 temp_v0;
    u16 temp_v1;
    void *var_v1;
    void *var_v1_2;

    var_a3 = 1;
    if (!(M2C_FIELD(arg0, s32 *, 0x3C) & 0x7F)) {
        temp_a2 = M2C_FIELD(arg0, s16 **, 0x18);
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x32);
        var_ft0 = (f32) M2C_FIELD(temp_a2, s16 *, 0);
        var_fv0f = var_ft0;
        var_ft0f = (f32) M2C_FIELD(temp_a2, s16 *, 2);
        var_fv1 = var_ft0f;
        var_ft1 = (f32) M2C_FIELD(temp_a2, s16 *, 4);
        var_fv1f = var_ft1;
        if ((s32) temp_v1 > 1) {
            var_v1 = temp_a2 + 4;
            var_a2 = temp_a2 + 6;
            do {
                temp_fv0 = (f32) *var_a2;
                var_v1 += 6;
                if (temp_fv0 < var_ft0) {
                    var_ft0 = temp_fv0;
                }
                if (var_fv0f < temp_fv0) {
                    var_fv0f = temp_fv0;
                }
                temp_fv0_2 = (f32) M2C_FIELD(var_v1, s16 *, -2);
                if (temp_fv0_2 < var_ft0f) {
                    var_ft0f = temp_fv0_2;
                }
                if (var_fv1 < temp_fv0_2) {
                    var_fv1 = temp_fv0_2;
                }
                temp_fv0_3 = (f32) M2C_FIELD(var_v1, s16 *, 0);
                if (temp_fv0_3 < var_ft1) {
                    var_ft1 = temp_fv0_3;
                }
                if (var_fv1f < temp_fv0_3) {
                    var_fv1f = temp_fv0_3;
                }
                var_a3 += 1;
                var_a2 += 6;
            } while (var_a3 < (s32) temp_v1);
        }
        temp_fv0_4 = *(f32 *)0x202280;
        temp_ft1f = var_ft0 + ((var_fv0f - var_ft0) * temp_fv0_4);
        var_a3_2 = 0;
        var_a2_2 = M2C_FIELD(arg0, s16 **, 0x18);
        temp_ft0f = var_ft0f + ((var_fv1 - var_ft0f) * temp_fv0_4);
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x32);
        var_ft0_2 = 0.0f;
        temp_fv1f = var_ft1 + ((var_fv1f - var_ft1) * temp_fv0_4);
        if (temp_v0 != 0) {
            var_v1_2 = var_a2_2 + 4;
            do {
                temp_fv0f = (f32) *var_a2_2 - temp_ft1f;
                temp_fv1 = (f32) M2C_FIELD(var_v1_2, s16 *, -2) - temp_ft0f;
                temp_fv0_5 = (f32) M2C_FIELD(var_v1_2, s16 *, 0) - temp_fv1f;
                temp_fv0f_2 = (temp_fv0f * temp_fv0f) + (temp_fv1 * temp_fv1) + (temp_fv0_5 * temp_fv0_5);
                if (var_ft0_2 < temp_fv0f_2) {
                    var_ft0_2 = temp_fv0f_2;
                }
                var_v1_2 += 6;
                var_a3_2 += 1;
                var_a2_2 += 6;
            } while (var_a3_2 < (s32) temp_v0);
        }
        M2C_FIELD(arg1, s16 *, 0) = (s16) (s32) temp_ft1f;
        M2C_FIELD(arg1, s16 *, 2) = (s16) (s32) temp_ft0f;
        temp_fv0f_3 = *(f32 *)0x202284;
        temp_fv0_6 = sqrtf(var_ft0_2);
        M2C_FIELD(arg1, s16 *, 4) = (s16) (s32) temp_fv1f;
        if (!(temp_fv0f_3 <= temp_fv0_6)) {
            func_8023158C(var_a2_2, var_a3_2);
            return;
        }
        M2C_FIELD(arg1, s16 *, 6) = (s16) ((s32) (temp_fv0_6 - temp_fv0f_3) | 0x80000000);
        func_802316D4(var_a2_2, var_a3_2);
    }
}
