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

extern M2C_UNK D_201B98;

s16 func_80228FA0(s32 arg0) {
    M2C_UNK *var_v1;
    u32 var_a1;

    var_a1 = 0;
    var_v1 = &D_201B98;
    for (;;) {
        var_a1 += 1;
        if (M2C_FIELD(var_v1, s16 *, 0) == arg0) {
            return M2C_FIELD(var_v1, s16 *, 2);
        }
        var_v1 += 1;
        if (var_a1 >= 0x76U) {
            return -1;
        }
        continue;
        break;
    }
}
