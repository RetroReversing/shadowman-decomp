/* Partial candidate from function #85899349579 in project #20; rechecked locally. */
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

s32 func_802DE974(void *, void *, M2C_UNK, s32);    /* extern */

s32 func_802DD788(void *arg0, s32 arg1, void *arg2) {
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a3;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    u16 *var_v1;
    u32 temp_a1_2;
    u32 temp_a2;
    u8 var_s1;

    temp_a1 = arg1 >> 0x10;
    var_s1 = 0;
    var_s0 = 0;
    temp_a1_2 = temp_a1 & 0xFFFF;
    temp_a2 = temp_a1_2 >> 8;
    if (M2C_FIELD(arg0, u8 *, 0x64) != 0) {
        var_a3 = 0 & 0xFF;
loop_2:
        var_s2 = 1;
        if (var_a3 == 0) {
            var_s2 = M2C_FIELD(arg0, s32 *, 0x60);
        }
        if (var_a3 != temp_a2) {
            if (!(((s32) M2C_FIELD((arg2 + (((u32) (temp_a1 & 0xFF) >> 2) + ((temp_a2 & 7) << 5))), u8 *, 0x101) >> (var_a3 & 7)) & 1)) {
                var_s1 += 1;
                goto block_21;
            }
            goto block_8;
        }
block_8:
        if (var_a3 != M2C_FIELD(arg2, u8 *, 0x100)) {
            temp_v0 = func_802DE974(arg0, arg2, 0, var_a3);
            if ((temp_v0 == 0) || (var_v0 = temp_v0, (temp_v0 == 3))) {
                M2C_FIELD(arg2, u8 *, 0x100) = var_s1;
                goto block_12;
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return var_v0;
        }
block_12:
        var_a0 = var_s2;
        if (var_s0 < 2) {
            var_v1 = (var_a0 * 2) + arg2;
loop_14:
            var_v0_2 = var_s0 < 2;
            if (var_a0 < 0x80) {
                if (*var_v1 == temp_a1_2) {
                    var_s0 += 1;
                }
                var_v1 += 2;
                var_a0 += 1;
                if (var_s0 >= 2) {
                    var_v0_2 = var_s0 < 2;
                } else {
                    goto loop_14;
                }
            }
            var_s1 += 1;
            if (var_v0_2 == 0) {
                goto block_20;
            }
block_21:
            var_a3 = var_s1 & 0xFF;
            if ((u32) (var_s1 & 0xFF) >= (u8) M2C_FIELD(arg0, u8 *, 0x64)) {
                goto block_22;
            }
            goto loop_2;
        }
block_20:
        return 2;
    }
block_22:
    var_v0 = var_s0;
    return var_v0;
}
