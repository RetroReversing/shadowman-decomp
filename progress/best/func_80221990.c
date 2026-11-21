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

s32 func_80226F54(s32);                             /* extern */

s16 func_80221990(s32 arg0, u8 *arg1, u8 *arg2, s16 *arg3) {
    s16 var_s4;
    s16 var_s5;
    s32 temp_s2;
    u8 *var_s1;
    u8 *var_s3;
    u8 var_s0;

    var_s3 = arg2;
    var_s4 = 0;
    var_s5 = 0;
    var_s0 = *arg1;
    var_s1 = arg1 + 1;
    if (var_s0 != 0) {
        for (;;) {
            temp_s2 = var_s0 & 0xFF;
            if (func_80226F54(temp_s2) == 0) {
                *var_s3 = var_s0;
                var_s3 += 1;
                var_s5 += 1;
                var_s0 = *var_s1;
                var_s1 += 1;
                var_s4 += M2C_FIELD((temp_s2 + arg0), u8 *, -0x1F) + 1;
                if (var_s0 != 0) {
                    continue;
                }
            }
            break;
        }
    }
    *var_s3 = 0;
    *arg3 = var_s5;
    return var_s4;
}
