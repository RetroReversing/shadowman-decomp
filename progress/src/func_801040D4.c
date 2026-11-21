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

extern void *D_8004AD78;

u32 func_801040D4(void) {
    u32 temp_v1;
    u32 var_a1;
    void *var_a0;

    var_a0 = D_8004AD78;
    var_a1 = 0;
    if (var_a0 != NULL) {
        do {
            temp_v1 = M2C_FIELD(var_a0, s32 *, 0xC) & 0xFFFFFF;
            if (var_a1 < temp_v1) {
                var_a1 = temp_v1;
            }
            var_a0 = M2C_FIELD(var_a0, void **, 0);
        } while (var_a0 != NULL);
    }
    return var_a1;
}
