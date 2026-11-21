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

void func_8011B2E0(s32 arg0, s32 arg1) {
    f32 *temp_v1;
    f32 temp_fv0;
    s16 temp_v0;
    s16 var_a2;
    s32 temp_a0;
    void *temp_a0_2;

    var_a2 = 0;
    do {
        temp_a0 = var_a2 * 8;
        temp_a0_2 = temp_a0 + arg0;
        temp_v1 = ((0xFF - (var_a2 * 2)) * 4) + arg1;
        temp_fv0 = *(f32 *)(temp_a0 + arg1);
        temp_v0 = var_a2 + 1;
        var_a2 = temp_v0;
        M2C_FIELD(temp_a0_2, f32 *, 0) = temp_fv0;
        M2C_FIELD(temp_a0_2, f32 *, 4) = (f32) *temp_v1;
    } while (temp_v0 < 0x80);
}
