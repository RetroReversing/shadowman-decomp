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

s32 func_80238C20(s32 *);                           /* extern */
extern s32 D_80069750;
extern s32 D_80069838;

s32 func_80238A54(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    s32 temp_a0;
    s32 var_a3;
    void *temp_v1;
    void *var_a2;
    void *var_t0;

    if (D_80069750 == 0) {
        return func_80238C20(&D_80069750);
    }
    var_t0 = arg0 + 8;
    var_a3 = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0xDB020000;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (D_80069838 * 0x18);
    if (D_80069838 > 0) {
        var_a2 = var_t0 - 4;
        __repair_rows: {
            temp_a0 = var_a3 * 0x10;
            temp_v1 = D_80069750 + temp_a0;
            temp_fv0f = (f32) M2C_FIELD(temp_v1, s8 *, 0x10);
            sp0 = temp_fv0f;
            temp_fv1f = (f32) M2C_FIELD(temp_v1, s8 *, 0x11);
            sp4 = temp_fv1f;
            temp_fv1 = (f32) -M2C_FIELD(temp_v1, s8 *, 0x12);
            sp8 = temp_fv1;
            M2C_FIELD(temp_v1, s8 *, 0x10) = (s8) (s32) ((temp_fv0f * M2C_FIELD(arg1, f32 *, 0)) + (temp_fv1f * M2C_FIELD(arg1, f32 *, 4)) + (temp_fv1 * M2C_FIELD(arg1, f32 *, 8)));
            M2C_FIELD((D_80069750 + temp_a0), s8 *, 0x11) = (s8) (s32) ((sp0 * M2C_FIELD(arg1, f32 *, 0x10)) + (temp_fv1f * M2C_FIELD(arg1, f32 *, 0x14)) + (sp8 * M2C_FIELD(arg1, f32 *, 0x18)));
            var_a2 += 8;
            var_t0 += 8;
            var_a3 += 1;
            M2C_FIELD((D_80069750 + temp_a0), s8 *, 0x12) = (s8) (s32) ((temp_fv0f * M2C_FIELD(arg1, f32 *, 0x20)) + (sp4 * M2C_FIELD(arg1, f32 *, 0x24)) + (sp8 * M2C_FIELD(arg1, f32 *, 0x28)));
            M2C_FIELD(var_a2, s32 *, -4) = (s32) (((((var_a3 * 3) + 3) & 0xFF) << 8) | 0xDC08000A);
            M2C_FIELD(var_a2, s32 *, 0) = (s32) (D_80069750 + (temp_a0 + 8));
        }
if (var_a3 < D_80069838) goto __repair_rows;
    }
    M2C_FIELD(var_t0, s32 *, 0) = (s32) ((((((var_a3 + 1) * 3) + 3) & 0xFF) << 8) | 0xDC08000A);
    M2C_FIELD(var_t0, s32 *, 4) = (s32) D_80069750;
    return var_t0 + 8;
}
