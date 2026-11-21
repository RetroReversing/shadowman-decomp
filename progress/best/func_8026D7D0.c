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

u32 func_8026D894(s32, u32, u32, u32);              /* extern */
u32 func_8026D8AC(u32, u32, u32, u32);              /* extern */
u32 str_len();                                      /* extern */

u32 func_8026D7D0(u8 *arg0) {
    s32 temp_a0;
    s32 var_v0_2;
    u32 temp_a1;
    u32 temp_v0;
    u32 temp_v1;
    u32 var_a0;
    u32 var_a1;
    u32 var_a2;
    u32 var_a3;
    u8 *var_v0;
    u8 var_v1;

    temp_v0 = str_len();
    var_a1 = (temp_v0 << 0xD) | temp_v0;
    var_a3 = 0;
    var_a0 = 0;
    if (temp_v0 != 0) {
        var_v0 = arg0;
        for (;;) {
            var_v1 = *var_v0;
            if ((var_v1 >= 0x30U) && ((u32) (var_v1 - 0x3A) >= 7U) && ((u32) (var_v1 - 0x5B) >= 6U) && (var_v1 < 0x7BU)) {
                if ((u32) (var_v1 - 0x61) < 0x1AU) {
                    var_v1 &= 0xDF;
                }
                var_a0 = var_a0 ^ (var_v1 << (var_a3 & 7)) ^ var_a1;
                temp_v1 = (var_v1 + var_a3) & 7;
                var_a2 = 0;
                if (temp_v1 != 0) {
                    var_v0_2 = var_a0 & 0x7fffffff;
                    for (;;) {
                        temp_a0 = var_a0 * 2;
                        if (var_v0_2 != 0) {
                            return func_8026D894(temp_a0, var_a1, var_a2, var_a3);
                        }
                        var_a0 = temp_a0 & ~1;
                        temp_a1 = var_a1 >> 1;
                        if (var_a1 & 1) {
                            return func_8026D8AC(var_a0, temp_a1, var_a2, var_a3);
                        }
                        var_a1 = temp_a1 & 0x7FFFFFFF;
                        var_a2 += 1;
                        var_v0_2 = var_a0 & 0x7fffffff;
                        if (var_a2 >= temp_v1) {
                            goto block_17;
                        }
                        continue;
                        break;
                    }
                }
                goto block_17;
            }
block_17:
            var_a3 += 1;
            var_v0 = arg0 + var_a3;
            if (var_a3 >= temp_v0) {
                /* Duplicate return node #18. Try simplifying control flow for better match */
                return var_a0;
            }
            continue;
            break;
        }
    }
    return var_a0;
}
