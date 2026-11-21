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

extern s32 D_8002D480;
extern M2C_UNK D_800707A8;

M2C_UNK *func_802457D0(void *arg0) {
    M2C_UNK *var_v1;
    s32 var_a1;
    s32 var_v0;

    var_a1 = 0;
    if (D_8002D480 > 0) {
        var_v1 = &D_800707A8;
loop_2:
        if (M2C_FIELD(var_v1, f32 *, 0x10) != M2C_FIELD(arg0, f32 *, 4)) {
            var_a1 += 1;
            goto block_15;
        }
        if (M2C_FIELD(var_v1, f32 *, 0x14) != M2C_FIELD(arg0, f32 *, 8)) {
            var_a1 += 1;
            goto block_15;
        }
        if (M2C_FIELD(var_v1, f32 *, 0x18) != M2C_FIELD(arg0, f32 *, 0xC)) {
            var_a1 += 1;
            goto block_15;
        }
        var_a1 += 1;
        if ((M2C_FIELD(var_v1, f32 *, 0x1C) == M2C_FIELD(arg0, f32 *, 0x10)) && (M2C_FIELD(var_v1, f32 *, 0x20) == M2C_FIELD(arg0, f32 *, 0x14))) {
            var_v0 = var_a1 < D_8002D480;
            if (M2C_FIELD(var_v1, f32 *, 0x24) == M2C_FIELD(arg0, f32 *, 0x18)) {
                return var_v1;
            }
            goto block_16;
        }
block_15:
        var_v0 = var_a1 < D_8002D480;
block_16:
        var_v1 += 0x5C;
        if (var_v0 == 0) {
            /* Duplicate return node #17. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_2;
    }
    return NULL;
}
