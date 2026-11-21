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

u8 *func_80118778(u8 *arg0, s32 arg1) {
    s32 temp_a1;
    u8 *var_v0;
    u8 var_v1;

    var_v0 = arg0;
    var_v1 = *var_v0;
    temp_a1 = arg1 & 0xFF;
    if (var_v1 != temp_a1) {
        for (;;) {
            var_v0 += 1;
            if (var_v1 == 0) {
                return NULL;
            }
            var_v1 = *var_v0;
            if (var_v1 == temp_a1) {
                /* Duplicate return node #4. Try simplifying control flow for better match */
                return var_v0;
            }
            continue;
            break;
        }
    }
    return var_v0;
}
