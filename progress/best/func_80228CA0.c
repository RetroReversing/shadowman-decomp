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

void func_80228CA0(u8 *arg0, u8 *arg1) {
    s32 temp_v1;
    u8 *var_a0;
    u8 *var_v0;
    u8 var_a2;

    var_a0 = arg0;
    var_v0 = arg1;
    var_a2 = *var_v0;
    if (var_a2 != 0) {
        for (;;) {
            temp_v1 = var_a2 & 0xFF;
            var_v0 += 1;
            if ((temp_v1 != 0xA)) {
                if ((temp_v1 != 0xD)) {
                    *var_a0 = var_a2;
                    var_a2 = *var_v0;
                    var_a0 += 1;
                    if (var_a2 != 0) {
                        continue;
                    }
                }
            }
            break;
        }
    }
    *var_a0 = 0;
}
