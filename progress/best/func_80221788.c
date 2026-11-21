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

s32 func_80221788(s32 arg0, u8 *arg1) {
    s32 temp_a2;
    s32 temp_v0_2;
    s32 var_a3;
    s32 var_v0;
    u8 *var_a1;
    u8 temp_v0;
    u8 var_v1;

    var_a1 = arg1;
    var_v1 = *var_a1;
    var_a3 = 0;
    if (((temp_a2 = var_v1 & 0xFF) != 0) && (temp_a2 != 0xD)) {
        for (;;) {
            var_v0 = var_a3 << 0x10;
            if (var_v1 != 0xA) {/*__repair_loop_weight*/do {
                temp_v0 = *var_a1;} while (0);
                var_a1 += 1;
                var_v1 = *var_a1;
                var_a3 += M2C_FIELD((temp_v0 + arg0), u8 *, -0x1F) + 1;
                temp_v0_2 = var_v1 & 0xFF;
                if ((temp_v0_2 == 0) || (temp_v0_2 == 0xD)) {
                    goto block_6;
                }
                continue;
            }
            break;
        }
    } else {
block_6:
        var_v0 = var_a3 << 0x10;
    }
    return var_v0 >> 0x10;
}
