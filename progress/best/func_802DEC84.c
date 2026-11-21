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

s32 func_802DEC84(u16 *arg0, u16 *arg1, u16 *arg2) {
    u16 *var_v0;
    u16 temp_v1;
    u32 var_a3;

    var_a3 = 0;
    do {*arg2 = 0;}while(0);
    *arg1 = 0;
    var_v0 = arg0;
    do {
        temp_v1 = *var_v0;
        var_a3 += 2;
        *arg1 += temp_v1;
        *arg2 += ~temp_v1;
        var_v0 = (void *) ((var_a3) + (s32) arg0);
    } while (var_a3 < 0x1CU);
    return 0;
}
