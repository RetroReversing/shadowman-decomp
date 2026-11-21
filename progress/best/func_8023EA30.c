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

void func_8023EA30(s8 *arg0, void *arg1, s16 arg2, s8 *arg3) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv1f;
    s16 temp_v1;
    s16 var_t2;
    s8 *var_t0;
    s8 *var_t1;
    void *var_a0;
    void *var_a3;

    var_t0 = arg0;
    var_t1 = arg3;
    var_t2 = 0;
    if (arg2 > 0) {
        var_a0 = arg0 + 2;
        var_a3 = arg3 + 2;
        do {
            temp_ft0 = (f32) *var_t1;
            sp0 = temp_ft0;
            temp_ft1 = (f32) M2C_FIELD(var_a3, s8 *, -1);
            sp4 = temp_ft1;
            temp_ft0f = (f32) M2C_FIELD(var_a3, s8 *, 0);
            sp8 = temp_ft0f;
            temp_fv1f = (temp_ft0 * M2C_FIELD(arg1, f32 *, 0)) + (temp_ft1 * M2C_FIELD(arg1, f32 *, 4)) + (temp_ft0f * M2C_FIELD(arg1, f32 *, 8));
            sp0 = temp_fv1f;
            temp_fv0 = (temp_ft0 * M2C_FIELD(arg1, f32 *, 0xC)) + (temp_ft1 * M2C_FIELD(arg1, f32 *, 0x10)) + (temp_ft0f * M2C_FIELD(arg1, f32 *, 0x14));
            sp4 = temp_fv0;
            temp_v1 = var_t2 + 1;
            var_t2 = temp_v1;
            var_t1 += 8;
            sp8 = (temp_ft0 * M2C_FIELD(arg1, f32 *, 0x18)) + (temp_ft1 * M2C_FIELD(arg1, f32 *, 0x1C)) + (temp_ft0f * M2C_FIELD(arg1, f32 *, 0x20));
            *var_t0 = (s8) (s32) temp_fv1f;
            var_a3 += 8;
            M2C_FIELD(var_a0, s8 *, -1) = (s8) (s32) temp_fv0;
            var_t0 += 8;
            M2C_FIELD(var_a0, s8 *, 0) = (s8) (s32) sp8;
            var_a0 += 8;
        } while (temp_v1 < arg2);
    }
}
