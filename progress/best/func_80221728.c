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

s16 func_80221728(s32 arg0, u8 *arg1) {
    s16 temp_v1;
    s16 var_a2;
    u16 var_a3;
    u8 *temp_v0;

    var_a2 = 0;
    var_a3 = 0;
    if (*arg1 != 0) {
        do {
            temp_v0 = arg1 + var_a2;do{
            temp_v1 = var_a2 + 1;}while(0);
            var_a2 = temp_v1;
            var_a3 += M2C_FIELD((*temp_v0 + arg0), u8 *, -0x1F) + 1;
        } while (*(arg1 + temp_v1) != 0);
    }
    return var_a3;
}
