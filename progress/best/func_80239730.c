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

void *func_80239730(void **arg0, s32 arg1, s16 arg2) {
    void *temp_v1;
    void *var_a0;

    var_a0 = *arg0;
    if (var_a0 != NULL) {
        for (;;) {
            temp_v1 = M2C_FIELD(var_a0, void **, 0);
            if (M2C_FIELD(var_a0, s32 *, 0x18) != arg1) {
                var_a0 = temp_v1;
                goto block_9;
            }
            if (M2C_FIELD(var_a0, s16 *, 0x14) == arg2) {
                break;
            }
            var_a0 = temp_v1;
block_9:
            if (var_a0 == NULL) {
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return NULL;
            }
        }
        return var_a0;
    }
    return NULL;
}
