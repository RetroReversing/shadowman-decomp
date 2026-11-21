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

s32 func_8026046C(s32);                             /* extern */
extern M2C_UNK D_80030630;

s32 func_80260368(s32 arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;

    var_a1 = 0;
    if (arg0 != 1) {
        if (arg0 < 2) {
            if (arg0 != 0) {
                return func_8026046C(0);
            }
            var_a0 = 0;
            var_v1 = &D_80030630;
            do {
                if ((M2C_FIELD(var_v1, s16 *, 0) == 0x1A) && (M2C_FIELD(var_v1, u8 *, 3) & 0x38)) {
                    var_a1 += 1;
                }
                var_a0 += 1;
                var_v1 += 0x20;
            } while (var_a0 < 0x1E);
            return var_a1;
        }
        if (arg0 != 2) {
            return func_8026046C(0);
        }
        var_a0_2 = 0;
        var_v1_2 = &D_80030630;
        do {
            if ((M2C_FIELD(var_v1_2, s16 *, 0) == 0x1E) && (M2C_FIELD(var_v1_2, u8 *, 3) & 0x38)) {
                var_a1 += 1;
            }
            var_a0_2 += 1;
            var_v1_2 += 0x20;
        } while (var_a0_2 < 0x1E);
        return var_a1;
    }
    var_a0_3 = 0;
    var_v1_3 = &D_80030630;
    do {
        if (((u32) (M2C_FIELD(var_v1_3, u16 *, 0) - 0xC) < 2U) && (M2C_FIELD(var_v1_3, u8 *, 3) & 0x38)) {
            var_a1 += 1;
        }
        var_a0_3 += 1;
        var_v1_3 += 0x20;
    } while (var_a0_3 < 0x1E);
    return var_a1;
}
