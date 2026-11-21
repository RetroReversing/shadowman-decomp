/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

extern void *D_8005EA2C;
extern s32 D_800619D4;
extern s32 D_800619D8;
extern void *D_80061A10;

s16 func_8023E4F8(s32 arg0, void *arg1, s32 arg2, u16 *arg3) {
    f32 *var_t2;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    f32 temp_fv1f_3;
    f32 var_fv1;
    s16 *var_a0;
    s16 *var_v1;
    s16 var_t7;
    s32 temp_v0;
    s32 var_t5;
    s32 var_t6;
    s32 var_v0;
    u16 temp_v0_2;
    void *var_t0;
    void *var_t3;
    void *var_t4;

    var_t7 = 0xFF;
    var_t6 = 0;
    var_t5 = 0;
    var_t2 = D_800619D8 + (arg0 * 0x10);
    temp_v0 = arg0 * 6;
    var_v1 = D_800619D4 + temp_v0;
    var_a0 = M2C_FIELD(D_80061A10, s32 *, 0x18) + temp_v0;
    if (arg2 > 0) {
        temp_ft1 = *(f32 *)0x20262C;
        var_t0 = var_t2 + 4;
        var_t4 = var_a0 + 4;
        var_t3 = var_v1 + 4;
        __repair_rows: {
            temp_fv1f = (f32) *var_a0;
            temp_ft0f = (f32) M2C_FIELD(var_t4, s16 *, -2);
            temp_ft0 = (f32) M2C_FIELD(var_t4, s16 *, 0);
            *var_t2 = (temp_fv1f * M2C_FIELD(arg1, f32 *, 0)) + (temp_ft0f * M2C_FIELD(arg1, f32 *, 4)) + (temp_ft0 * M2C_FIELD(arg1, f32 *, 8)) + M2C_FIELD(arg1, f32 *, 0x24);
            M2C_FIELD(var_t0, f32 *, 0) = (f32) ((temp_fv1f * M2C_FIELD(arg1, f32 *, 0xC)) + (temp_ft0f * M2C_FIELD(arg1, f32 *, 0x10)) + (temp_ft0 * M2C_FIELD(arg1, f32 *, 0x14)) + M2C_FIELD(arg1, f32 *, 0x28));
            temp_fv1f_2 = (temp_fv1f * M2C_FIELD(arg1, f32 *, 0x18)) + (temp_ft0f * M2C_FIELD(arg1, f32 *, 0x1C)) + (temp_ft0 * M2C_FIELD(arg1, f32 *, 0x20)) + M2C_FIELD(arg1, f32 *, 0x2C);
            M2C_FIELD(var_t0, f32 *, 4) = temp_fv1f_2;
            temp_fv0f = *var_t2;
            var_v0 = 0;
            if (temp_fv1f_2 < temp_fv0f) {
                var_v0 = 1;
            }
            temp_fv0 = M2C_FIELD(var_t0, f32 *, 0);
            if (temp_fv1f_2 < temp_fv0) {
                var_v0 |= 8;
            }
            temp_fv1f_3 = -temp_fv1f_2;
            if (temp_fv0f < temp_fv1f_3) {
                var_v0 |= 2;
            }
            if (temp_fv0 < temp_fv1f_3) {
                var_v0 |= 4;
            }
            M2C_FIELD(var_t0, s32 *, 8) = var_v0;
            temp_v0_2 = M2C_FIELD(var_t0, u16 *, 0xA);
            var_fv1 = 0.0f;
            var_t7 &= temp_v0_2;
            temp_fv0f_2 = M2C_FIELD(var_t0, f32 *, 4);
            var_t6 |= temp_v0_2;
            M2C_FIELD(var_t0, f32 *, 0) = (f32) (M2C_FIELD(var_t0, f32 *, 0) * M2C_FIELD(D_8005EA2C, f32 *, 0x104));
            if (!(temp_fv0f_2 < temp_ft1)) {
                var_fv1 = temp_ft1 / temp_fv0f_2;
            }
            *var_v1 = (s16) (s32) ((*var_t2 * M2C_FIELD(D_8005EA2C, f32 *, 0xCC) * var_fv1) + M2C_FIELD(D_8005EA2C, f32 *, 0xE0));
            var_t5 += 1;
            var_t4 += 6;
            var_a0 += 6;
            temp_fv0f_3 = M2C_FIELD(var_t0, f32 *, 0) * M2C_FIELD(D_8005EA2C, f32 *, 0xD4) * var_fv1;
            var_t2 += 0x10;
            var_v1 += 6;
            var_t0 += 0x10;
            M2C_FIELD(var_t3, s16 *, 0) = (s16) (s32) var_fv1;
            M2C_FIELD(var_t3, s16 *, -2) = (s16) (s32) (temp_fv0f_3 + M2C_FIELD(D_8005EA2C, f32 *, 0xE4));
            var_t3 += 6;
        }
if (var_t5 < arg2) goto __repair_rows;
    }
    *arg3 |= var_t6;
    return var_t7;
}
