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

void *func_8021EE30(s32, s32, void *, void *, void *); /* extern */
void *func_8021EE68(s32, s32, void *, void *, void *); /* extern */
void *func_8021EEBC(s32, s32, void *, void *, void *); /* extern */
void *func_8021EEF4(s32, s32, void *, void *, void *); /* extern */
void *func_8021EF50(s32, s32, void *, void *, void *); /* extern */
void *func_8021EF9C(s32, s32, void *, void *, void *); /* extern */
void *func_8021EFF8(s32, s32, void *, void *, void *); /* extern */
void *func_8021F044(s32, s32, void *, void *, void *); /* extern */

void *func_8021ECEC(void *arg0, void *arg1, f32 arg2, f32 arg3) {
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_ft3;
    f32 temp_ft3f;
    f32 temp_fv0;
    f32 temp_fv0_10;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0_7;
    f32 temp_fv0_8;
    f32 temp_fv0_9;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv0f_4;
    f32 var_ft0;
    f32 var_ft2f;
    f32 var_fv1;
    f32 var_fv1f;
    s16 temp_a0_6;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t0_3;
    void *temp_t0_4;
    void *temp_t0_5;

    temp_v0 = M2C_FIELD(arg0, s16 *, 4);
    var_ft0 = 0.0f;
    temp_v1 = M2C_FIELD(arg0, s16 *, 6);
    temp_a0_6 = M2C_FIELD(arg0, s16 *, 0xA);
    var_fv1 = (f32) temp_v0;
    var_fv1f = (f32) temp_v1;
    temp_ft0f = (f32) (temp_v0 + temp_a0_6);
    temp_v0_2 = M2C_FIELD(arg0, s16 *, 0xC);
    temp_ft1 = (f32) (temp_v1 + temp_v0_2);
    var_ft2f = 0.0f;
    temp_ft3 = arg2 / (temp_ft0f - var_fv1);
    temp_ft3f = arg3 / (temp_ft1 - var_fv1f);
    if (var_fv1 < 0.0f) {
        temp_fv0_5 = -var_fv1;
        var_fv1 = 0.0f;
        var_ft2f = arg2 * (temp_fv0_5 / (f32) temp_a0_6);
    }
    if (var_fv1f < 0.0f) {
        temp_fv0_6 = -var_fv1f;
        var_fv1f = 0.0f;
        var_ft0 = arg3 * (temp_fv0_6 / (f32) temp_v0_2);
    }
    temp_t0_5 = arg1 + 8;
    temp_t0_4 = temp_t0_5 + 8;
    temp_t0_3 = temp_t0_4 + 8;
    M2C_FIELD(arg1, s32 *, 0) = 0xFA000000;
    temp_fv0_7 = *(f32 *)0x200080;
    temp_a0_5 = M2C_FIELD(arg0, u8 *, 0x10) << 8;
    M2C_FIELD(arg1, s32 *, 4) = (s32) ((M2C_FIELD(arg0, u8 *, 0xE) << 0x18) | (M2C_FIELD(arg0, u8 *, 0xF) << 0x10) | temp_a0_5 | M2C_FIELD(arg0, u8 *, 0x11));
    M2C_FIELD(arg1, s32 *, 8) = 0xEE000000;
    M2C_FIELD(temp_t0_5, s32 *, 4) = (s32) (M2C_FIELD(arg0, u16 *, 8) << 0x10);
    if (!(temp_fv0_7 <= temp_ft0f)) {
        return func_8021EE30((s32) temp_ft0f, temp_a0_5, arg1, temp_t0_5, temp_t0_4);
    }
    temp_fv0_8 = *(f32 *)0x200084;
    temp_a0_4 = (((s32) (temp_ft0f - temp_fv0_7) | 0x80000000) & 0xFFF) << 0xC;
    if (!(temp_fv0_8 <= temp_ft1)) {
        return func_8021EE68((s32) temp_ft1, temp_a0_4, arg1, temp_t0_5, temp_t0_4);
    }
    temp_fv0_9 = *(f32 *)0x200088;
    M2C_FIELD(temp_t0_5, s32 *, 8) = (s32) (temp_a0_4 | ((((s32) (temp_ft1 - temp_fv0_8) | 0x80000000) & 0xFFF) | 0xE4000000));
    if (!(temp_fv0_9 <= var_fv1)) {
        return func_8021EEBC((s32) var_fv1, temp_a0_4, arg1, temp_t0_5, temp_t0_4);
    }
    temp_fv0_10 = *(f32 *)0x20008C;
    temp_a0_3 = (((s32) (var_fv1 - temp_fv0_9) | 0x80000000) & 0xFFF) << 0xC;
    if (!(temp_fv0_10 <= var_fv1f)) {
        return func_8021EEF4((s32) var_fv1f, temp_a0_3, arg1, temp_t0_5, temp_t0_4);
    }
    temp_t0_2 = temp_t0_3 + 8;
    temp_fv0f = *(f32 *)0x200094;
    temp_fv0_4 = var_ft2f * *(f32 *)0x200090;
    M2C_FIELD(temp_t0_4, s32 *, 4) = (s32) (temp_a0_3 | (((s32) (var_fv1f - temp_fv0_10) | 0x80000000) & 0xFFF));
    M2C_FIELD(temp_t0_4, s32 *, 8) = 0xE1000000;
    if (!(temp_fv0f <= temp_fv0_4)) {
        return func_8021EF50((s32) temp_fv0_4, temp_a0_3, arg1, temp_t0_3, temp_t0_4);
    }
    temp_fv0_3 = var_ft0 * *(f32 *)0x200098;
    temp_fv0f_2 = *(f32 *)0x20009C;
    temp_a0_2 = ((s32) (temp_fv0_4 - temp_fv0f) | 0x80000000) << 0x10;
    if (!(temp_fv0f_2 <= temp_fv0_3)) {
        return func_8021EF9C((s32) temp_fv0_3, temp_a0_2, arg1, temp_t0_3, temp_t0_4);
    }
    temp_t0 = temp_t0_2 + 8;
    temp_fv0f_3 = *(f32 *)0x2000A4;
    temp_fv0_2 = temp_ft3 * *(f32 *)0x2000A0;
    M2C_FIELD(temp_t0_3, s32 *, 4) = (s32) (temp_a0_2 | (((s32) (temp_fv0_3 - temp_fv0f_2) | 0x80000000) & 0xFFFF));
    M2C_FIELD(temp_t0_3, s32 *, 8) = 0xF1000000;
    if (!(temp_fv0f_3 <= temp_fv0_2)) {
        return func_8021EFF8((s32) temp_fv0_2, temp_a0_2, temp_t0_2, temp_t0_3, temp_t0_4);
    }
    temp_fv0 = temp_ft3f * *(f32 *)0x2000A8;
    temp_fv0f_4 = *(f32 *)0x2000AC;
    temp_a0 = ((s32) (temp_fv0_2 - temp_fv0f_3) | 0x80000000) << 0x10;
    if (!(temp_fv0f_4 <= temp_fv0)) {
        return func_8021F044((s32) temp_fv0, temp_a0, temp_t0_2, temp_t0_3, temp_t0_4);
    }
    M2C_FIELD(temp_t0_2, s32 *, 4) = (s32) (temp_a0 | (((s32) (temp_fv0 - temp_fv0f_4) | 0x80000000) & 0xFFFF));
    M2C_FIELD(temp_t0_2, s32 *, 8) = 0xE0000000;
    M2C_FIELD(temp_t0, s32 *, 4) = 0;
    return temp_t0 + 8;
}
