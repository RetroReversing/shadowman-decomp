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

s32 func_8023191C();

void func_802316D4(void *arg0, s32 arg1, u16 *arg2) {
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_ft1f;
    f32 temp_ft2;
    f32 temp_ft2f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    f32 temp_fv1f_3;
    f32 var_ft0;
    f32 var_ft0f;
    f32 var_ft1;
    f32 var_fv0;
    f32 var_fv0f;
    f32 var_fv1;
    f32 var_fv1f;
    s32 temp_t2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_t4;
    u16 *temp_t1;
    char *var_a2;
    char *var_t3;
    u8 temp_a3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_t0;

    var_a2 = arg2;
    var_t3 = M2C_FIELD(arg0, u8 **, 0x14);
    var_t4 = 0;
    if (M2C_FIELD(arg0, u16 *, 0x30) != 0) {
        var_t0 = var_t3 + 0x10;
        temp_ft2 = *(f32 *)0x202288;
        temp_ft2f = *(f32 *)0x20228C;
loop_2:
        var_a1 = 1;
        temp_t1 = M2C_FIELD(arg0, s32 *, 0x20) + (M2C_FIELD(var_t0, u16 *, -0xA) * 6);
        temp_t2 = M2C_FIELD(arg0, s32 *, 0x18);
        temp_v1 = temp_t2 + (*temp_t1 * 6);
        temp_a3 = *(u8 *)var_t3;
        var_ft1 = (f32) M2C_FIELD(temp_v1, s16 *, 0);
        var_fv0 = var_ft1;
        var_ft0 = (f32) M2C_FIELD(temp_v1, s16 *, 2);
        var_fv0f = var_ft0;
        var_ft0f = (f32) M2C_FIELD(temp_v1, s16 *, 4);
        var_fv1 = var_ft0f;
        if ((s32) temp_a3 > 1) {
            var_a2 = temp_t1 + 6;
            do {
                temp_v1_2 = temp_t2 + (*(u16 *)var_a2 * 6);
                temp_fv1f = (f32) M2C_FIELD(temp_v1_2, s16 *, 0);
                if (temp_fv1f < var_ft1) {
                    var_ft1 = temp_fv1f;
                }
                if (var_fv0 < temp_fv1f) {
                    var_fv0 = temp_fv1f;
                }
                temp_fv1f_2 = (f32) M2C_FIELD(temp_v1_2, s16 *, 2);
                if (temp_fv1f_2 < var_ft0) {
                    var_ft0 = temp_fv1f_2;
                }
                if (var_fv0f < temp_fv1f_2) {
                    var_fv0f = temp_fv1f_2;
                }
                temp_fv1f_3 = (f32) M2C_FIELD(temp_v1_2, s16 *, 4);
                if (temp_fv1f_3 < var_ft0f) {
                    var_ft0f = temp_fv1f_3;
                }
                if (var_fv1 < temp_fv1f_3) {
                    var_fv1 = temp_fv1f_3;
                }
                var_a1 += 1;
                var_a2 += 6;
            } while (var_a1 < (s32) temp_a3);
        }
        temp_ft1 = var_ft1 + ((var_fv0 - var_ft1) * temp_ft2);
        temp_ft1f = var_ft0 + ((var_fv0f - var_ft0) * temp_ft2);
        var_fv1f = 0.0f;
        var_a1_2 = 0;
        temp_ft0 = var_ft0f + ((var_fv1 - var_ft0f) * temp_ft2);
        if (temp_a3 != 0) {
            var_a2 = temp_t1;
            do {
                temp_v1_3 = temp_t2 + (*(u16 *)var_a2 * 6);
                temp_fv1 = (f32) M2C_FIELD(temp_v1_3, s16 *, 0) - temp_ft1;
                temp_fv0f = (f32) M2C_FIELD(temp_v1_3, s16 *, 2) - temp_ft1f;
                temp_fv0 = (f32) M2C_FIELD(temp_v1_3, s16 *, 4) - temp_ft0;
                temp_fv1_2 = (temp_fv1 * temp_fv1) + (temp_fv0f * temp_fv0f) + (temp_fv0 * temp_fv0);
                if (var_fv1f < temp_fv1_2) {
                    var_fv1f = temp_fv1_2;
                }
                var_a1_2 += 1;
                var_a2 += 6;
            } while (var_a1_2 < (s32) temp_a3);
        }
        temp_fv0_2 = sqrtf(var_fv1f);
        M2C_FIELD(var_t0, s16 *, -6) = (s16) (s32) temp_ft1;
        M2C_FIELD(var_t0, s16 *, -4) = (s16) (s32) temp_ft1f;
        M2C_FIELD(var_t0, s16 *, -2) = (s16) (s32) temp_ft0;
        if (!(temp_ft2f <= temp_fv0_2)) {
            func_8023191C(var_a1_2, var_a2, temp_a3);
            return;
        }
        M2C_FIELD(var_t0, s16 *, 0) = (s16) ((s32) (temp_fv0_2 - temp_ft2f) | 0x80000000);
        var_t0 += 0x12;
        var_t4 += 1;
        var_t3 += 0x12;
        if (var_t4 >= (s32) M2C_FIELD(arg0, u16 *, 0x30)) {

        } else {
            goto loop_2;
        }
    }
}
