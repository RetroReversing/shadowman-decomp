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

M2C_UNK func_8025BF10(M2C_UNK *);                   /* extern */

void func_80261574(M2C_UNK *arg0) {
    M2C_UNK *var_a0;

    var_a0 = *arg0;
    if (var_a0 != NULL) {
        do {
            if ((M2C_FIELD(var_a0, s32 *, 0x18) == 2) && (M2C_FIELD(var_a0, s16 *, 0x16) == 0x10)) {
                func_8025BF10(var_a0);
                var_a0 = arg0;
            }
            var_a0 = *var_a0;
        } while (var_a0 != NULL);
    }
}
