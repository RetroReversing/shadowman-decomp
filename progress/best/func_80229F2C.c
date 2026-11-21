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

extern u8 D_8005E6C0;

void *func_80229F2C(void *arg0, void *arg1) {
    void *var_a1;

    var_a1 = arg1;
    for (;;) {
        if (!(M2C_FIELD(var_a1, u16 *, 0x1E) & 0x20)) {
            var_a1 = M2C_FIELD(var_a1, void **, 0x38);
            if (var_a1 == NULL) {
                var_a1 = M2C_FIELD(arg0, void **, 4);
                if (M2C_FIELD(var_a1, s32 *, 0x34) != 0) {
                    do {
                        var_a1 = M2C_FIELD(var_a1, void **, 0x34);
                    } while (M2C_FIELD(var_a1, s32 *, 0x34) != 0);
                }
            }
            if (!(M2C_FIELD(var_a1, u16 *, 0x1E) & 0x100) || (D_8005E6C0 != 0)) {
                return var_a1;
            }
            continue;
        }
        break;
    }
    return var_a1;
}
