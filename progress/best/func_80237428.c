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

extern u32 D_8006973C;
extern s16 *D_800698A0;

u32 func_80237428(void) {
    u32 *__base_D_8006973C;
    char *var_a0;
    u32 var_v1;

    var_v1 = 0;
    __base_D_8006973C = &D_8006973C;
    if ((*__base_D_8006973C) == 0) {
        return -1U;
    }
    var_a0 = D_800698A0;
    for (;;) {
        if (*(s16 *)var_a0 != -1) {
            var_v1 += 1;
            var_a0 += 0x5C;
            if (var_v1 >= (u32) (*(&D_8006973C))) {
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return -1U;
            }
            continue;
        }
        break;
    }
    return var_v1;
}
