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

M2C_UNK func_8022D7CC(s32, s32, s32);               /* extern */
extern M2C_UNK D_800597B0;

void func_8022D6A8(s16 *arg0, s32 arg1) {
    f32 temp_fv1;
    s16 *temp_t1;
    s16 *var_a0;
    s16 *var_v1;
    s16 *var_v1_2;
    s16 temp_v1;
    s32 temp_v0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_t0;
    s8 temp_v1_2;
    s8 temp_v1_3;
    s8 temp_v1_4;
    s8 temp_v1_5;
    s8 temp_v1_6;
    s8 temp_v1_7;
    void *temp_a0;
    void *temp_a1;

    var_a0 = arg0;
    temp_t1 = var_a0;
    var_a3 = 0;
    var_t0 = 0;
    M2C_FIELD(&D_800597B0, s16 *, 0xA) = 0;
    M2C_FIELD(&D_800597B0, s16 *, 0xC) = 0;
    M2C_FIELD(&D_800597B0, s16 *, 0xE) = 0;
    M2C_FIELD(&D_800597B0, s16 *, 0x10) = 0;
    var_a2 = 0;
    if (*temp_t1 != 0) {
        var_v1 = temp_t1;
        do {
            var_v1 += 0xA;
            var_a2 += 1;
        } while (*var_v1 != 0);
    }
    if (arg1 < *temp_t1) {
        var_t0 = 0;
        var_a3 = 0;
    }
    temp_v0 = var_a2 - 1;
    if (arg1 >= M2C_FIELD(((var_a2 * 0xA) + temp_t1), s16 *, -0xA)) {
        var_t0 = var_a2 - 1;
        var_a3 = var_t0;
    }
    var_a2_2 = 0;
    if (temp_v0 > 0) {
        var_a0 = (s16 *) temp_v0;
        var_v1_2 = temp_t1;
        do {
            if ((arg1 >= M2C_FIELD(var_v1_2, s16 *, 0)) && (arg1 < M2C_FIELD(var_v1_2, s16 *, 0xA))) {
                var_a3 = var_a2_2;
                var_t0 = var_a2_2 + 1;
            }
            var_a2_2 += 1;
            var_v1_2 += 0xA;
        } while (var_a2_2 < (s32) var_a0);
    }
    if (var_t0 == var_a3) {
        func_8022D7CC((s32) var_a0, var_a2_2, var_a3);
        return;
    }
    temp_v1 = *((var_a3 * 0xA) + temp_t1);
    temp_fv1 = (f32) (arg1 - temp_v1) / (f32) (*((var_t0 * 0xA) + temp_t1) - temp_v1);
    temp_a1 = (var_a3 * 0xA) + temp_t1;
    temp_a0 = (var_t0 * 0xA) + temp_t1;
    temp_v1_2 = M2C_FIELD(temp_a1, s8 *, 4);
    M2C_FIELD(&D_800597B0, s16 *, 0xA) = (s16) (s32) ((f32) temp_v1_2 + (temp_fv1 * (f32) (M2C_FIELD(temp_a0, s8 *, 4) - temp_v1_2)));
    temp_v1_3 = M2C_FIELD(temp_a1, s8 *, 5);
    M2C_FIELD(&D_800597B0, s16 *, 0xC) = (s16) (s32) ((f32) temp_v1_3 + (temp_fv1 * (f32) (M2C_FIELD(temp_a0, s8 *, 5) - temp_v1_3)));
    temp_v1_4 = M2C_FIELD(temp_a1, s8 *, 6);
    M2C_FIELD(&D_800597B0, s16 *, 0xE) = (s16) (s32) ((f32) temp_v1_4 + (temp_fv1 * (f32) (M2C_FIELD(temp_a0, s8 *, 6) - temp_v1_4)));
    temp_v1_5 = M2C_FIELD(temp_a1, s8 *, 7);
    M2C_FIELD(&D_800597B0, s16 *, 0x10) = (s16) (s32) ((f32) temp_v1_5 + (temp_fv1 * (f32) (M2C_FIELD(temp_a0, s8 *, 7) - temp_v1_5)));
    temp_v1_6 = M2C_FIELD(temp_a1, s8 *, 8);
    M2C_FIELD(&D_800597B0, s16 *, 0x12) = (s16) (s32) ((f32) (temp_v1_6 + 8) + (temp_fv1 * (f32) (M2C_FIELD(temp_a0, s8 *, 8) - temp_v1_6)));
    temp_v1_7 = M2C_FIELD(temp_a1, s8 *, 9);
    M2C_FIELD(&D_800597B0, s16 *, 0x14) = (s16) (s32) ((f32) (temp_v1_7 + 8) + (temp_fv1 * (f32) (M2C_FIELD(temp_a0, s8 *, 9) - temp_v1_7)));
}
