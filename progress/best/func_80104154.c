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

s32 func_80104154(s32 arg0) {
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v1;
    void *var_a2;

    var_a2 = D_8004AD78;
    if (var_a2 != NULL) {
        for (;;) {
            temp_a3 = M2C_FIELD(var_a2, s32 *, 8);
            temp_a1 = 4 - (temp_a3 & 3);
            temp_v1 = M2C_FIELD(var_a2, s32 *, 0xC) & 0xFFFFFF;
            if ((temp_v1 >= temp_a1) && ((u32) (temp_v1 - temp_a1) >= (u32) ((arg0 + 3) & ~3))) {
                return (temp_a3 + 3) & ~3;
            }
            var_a2 = M2C_FIELD(var_a2, void **, 0);
            if (var_a2 == NULL) {
                /* Duplicate return node #6. Try simplifying control flow for better match */
                goto __shared_return_0;
            }
            continue;
            break;
        }
    }
    __shared_return_0:
    return 0;
}
