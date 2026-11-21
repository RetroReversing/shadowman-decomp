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

M2C_UNK func_8023F1B4(f32, f32);                    /* extern */
M2C_UNK func_8023F1B8(f32, f32);                    /* extern */
M2C_UNK func_8023F204(f32, f32);                    /* extern */

void func_8023EF3C(void *arg0, void *arg1) {
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft0f_2;
    f32 temp_ft1;
    f32 temp_ft1f;
    f32 temp_ft2;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv0f_4;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 var_fa0;
    f32 var_fa0f;
    f32 var_fa1;
    f32 var_fa1f;
    f32 var_ft0;
    f32 var_ft0_2;
    f32 var_ft2f;
    f32 var_ft3;
    f32 var_ft3f;
    f32 var_ft4;
    f32 var_ft4f;
    s32 var_v1;

    var_ft4f = M2C_FIELD(arg0, f32 *, 0);
    var_ft4 = M2C_FIELD(arg0, f32 *, 0xC);
    var_fa1f = M2C_FIELD(arg0, f32 *, 0x18);
    var_fa1 = M2C_FIELD(arg0, f32 *, 4);
    var_ft3 = M2C_FIELD(arg0, f32 *, 0x10);
    var_fa0f = M2C_FIELD(arg0, f32 *, 0x1C);
    var_fa0 = M2C_FIELD(arg0, f32 *, 8);
    var_ft3f = M2C_FIELD(arg0, f32 *, 0x14);
    var_ft2f = M2C_FIELD(arg0, f32 *, 0x20);
    temp_ft1 = (var_ft4f * var_ft4f) + (var_ft4 * var_ft4) + (var_fa1f * var_fa1f);
    temp_ft2 = *(f32 *)0x202640;
    temp_fv0f = temp_ft2 - temp_ft1;
    temp_ft0f = (var_fa1 * var_fa1) + (var_ft3 * var_ft3) + (var_fa0f * var_fa0f);
    temp_fv1 = temp_ft2 - temp_ft0f;
    temp_ft0 = (var_fa0 * var_fa0) + (var_ft3f * var_ft3f) + (var_ft2f * var_ft2f);
    temp_fv0 = temp_ft2 - temp_ft0;
    if (*(f32 *)0x202644 < ((temp_fv0f * temp_fv0f) + (temp_fv1 * temp_fv1) + (temp_fv0 * temp_fv0))) {
        temp_ft1f = *(f32 *)0x202648;
        if (temp_ft1f < temp_ft1) {
            temp_fv0f_2 = temp_ft2 / (f32) sqrt((f64) temp_ft1);
            var_ft4f *= temp_fv0f_2;
            var_ft4 *= temp_fv0f_2;
            var_fa1f *= temp_fv0f_2;
        }
        if (temp_ft1f < temp_ft0f) {
            temp_fv1_2 = temp_ft2 / (f32) sqrt((f64) temp_ft0f);
            var_fa1 *= temp_fv1_2;
            var_ft3 *= temp_fv1_2;
            var_fa0f *= temp_fv1_2;
        }
        if (temp_ft1f < temp_ft0) {
            temp_fv0_2 = temp_ft2 / (f32) sqrt((f64) temp_ft0);
            var_fa0 *= temp_fv0_2;
            var_ft3f *= temp_fv0_2;
            var_ft2f *= temp_fv0_2;
        }
    }
    temp_ft0f_2 = *(f32 *)0x20264C;
    temp_fv0f_3 = var_ft4f + temp_ft0f_2;
    var_ft0 = temp_fv0f_3 + var_ft3 + var_ft2f;
    temp_fv0_3 = temp_ft0f_2 - var_ft4f;
    temp_fv0f_4 = (temp_fv0f_3 - var_ft3) - var_ft2f;
    temp_fv1_3 = (temp_fv0_3 + var_ft3) - var_ft2f;
    var_v1 = 0;
    temp_fv0_4 = (temp_fv0_3 - var_ft3) + var_ft2f;
    if (var_ft0 < temp_fv0f_4) {
        var_v1 = 1;
        var_ft0 = temp_fv0f_4;
    }
    if (var_ft0 < temp_fv1_3) {
        var_v1 = 2;
        var_ft0 = temp_fv1_3;
    }
    if (var_ft0 < temp_fv0_4) {
        var_v1 = 3;
        var_ft0 = temp_fv0_4;
    }
    if (var_ft0 < *(f32 *)0x202650) {
        M2C_FIELD(arg1, f32 *, 0) = temp_ft0f_2;
        M2C_FIELD(arg1, f32 *, 4) = 0.0f;
        M2C_FIELD(arg1, f32 *, 8) = 0.0f;
        func_8023F204(var_fa0, var_fa1);
        return;
    }
    if (var_v1 != 1) {
        if (var_v1 >= 2) {
            switch (var_v1) {                       /* irregular */
            case 3:
                temp_ft5 = var_ft4 - var_fa1;
                var_ft0_2 = *(f32 *)0x202654 / sqrtf(var_ft0);
                if (temp_ft5 < 0.0f) {
                    var_ft0_2 = -var_ft0_2;
                }
                M2C_FIELD(arg1, f32 *, 0) = (f32) (temp_ft5 * var_ft0_2);
                M2C_FIELD(arg1, f32 *, 4) = (f32) ((var_fa0 + var_fa1f) * var_ft0_2);
                M2C_FIELD(arg1, f32 *, 8) = (f32) ((var_fa0f + var_ft3f) * var_ft0_2);
                M2C_FIELD(arg1, f32 *, 0xC) = (f32) (var_ft0 * var_ft0_2);
                return;
            default:
                func_8023F1B8(var_fa0, var_fa1);
                return;
            case 2:
                func_8023F1B4(var_fa0, var_fa1);
                return;
            }
        } else {
            if (var_v1 == 0) {
                func_8023F1B4(var_fa0, var_fa1);
                return;
            }
            func_8023F1B8(var_fa0, var_fa1);
        }
    } else {
        func_8023F1B4(var_fa0, var_fa1);
    }
}
