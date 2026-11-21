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

extern M2C_UNK D_800458F0;
extern s32 D_80074BB0;

s32 func_802B6E08(void) {
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(&D_800458F0, s32 *, 0) == 1) {
        var_v0 = 0;
        if (D_80074BB0 == 8) {
            var_v0 = 1;
            if ((u32) (M2C_FIELD(&D_800458F0, s32 *, 4) - 0xF) >= 2U) {
                var_v0 = 0;
            }
        }
    }
    return var_v0;
}
