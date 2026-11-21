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

extern M2C_UNK D_80075F68;

s32 func_8026E230(s32 arg0) {
    s32 temp_a1;
    s32 var_v0;

    var_v0 = arg0;
    if (arg0 < 0) {
        var_v0 = arg0 + 7;
    }
    temp_a1 = var_v0 >> 3;
    return *((temp_a1 & 0xFF) + &D_80075F68) & (1 << (arg0 - (temp_a1 * 8)));
}
