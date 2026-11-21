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

void func_802398C8(void *arg0, void *arg1, void *arg2) {
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_fv0;
    s32 temp_v0;
    u32 var_a3;
    u32 var_t0;
    void *var_a0;
    void *var_t1;
    void *var_t2;
    void *var_v1;

    var_a0 = arg0;
    var_t0 = 0;
    var_t2 = var_a0;
    var_t1 = arg2;
    do {
        var_a3 = 0;
        var_v1 = arg1;
        temp_ft0 = M2C_FIELD(var_a0, f32 *, 0);
        temp_ft0f = M2C_FIELD(var_a0, f32 *, 4);
        temp_ft1 = M2C_FIELD(var_a0, f32 *, 8);
loop_2:
        temp_v0 = var_a3 + var_t0;
        var_a3 += 1;
        *(s32 *)((temp_v0 * 4) + arg2) = (temp_ft0 * M2C_FIELD(var_v1, f32 *, 0)) + (temp_ft0f * M2C_FIELD(var_v1, f32 *, 0xC)) + (temp_ft1 * M2C_FIELD(var_v1, f32 *, 0x18));
        var_v1 += 4;
        if (var_a3 < 3U) {
            goto loop_2;
        }
        var_a0 += 0xC;
        var_t0 += 3;
        temp_fv0 = (temp_ft0 * M2C_FIELD(arg1, f32 *, 0x24)) + (temp_ft0f * M2C_FIELD(arg1, f32 *, 0x28)) + (temp_ft1 * M2C_FIELD(arg1, f32 *, 0x2C)) + M2C_FIELD(var_t2, f32 *, 0x24);
        var_t2 += 4;
        M2C_FIELD(var_t1, f32 *, 0x24) = temp_fv0;
        var_t1 += 4;
    } while (var_t0 < 9U);
}
