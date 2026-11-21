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

M2C_UNK func_80255FC0(void *);                      /* extern */
M2C_UNK func_8025676C(void *);                      /* extern */
extern void *D_80030C58;

void func_802566A8(void) {
    void *var_s0;
    void *var_s0_2;

    var_s0 = *M2C_FIELD(D_80030C58, void ***, 0x18);
    if (var_s0 != NULL) {
        do {
            if ((M2C_FIELD(var_s0, s32 *, 0x18) == 2) && (M2C_FIELD(var_s0, s16 *, 0x14) == 0x130)) {
                func_80255FC0(var_s0);
            }
            var_s0 = M2C_FIELD(var_s0, void **, 0);
        } while (var_s0 != NULL);
    }
    var_s0_2 = *M2C_FIELD(D_80030C58, void ***, 0x18);
    if (var_s0_2 != NULL) {
        do {
            if ((M2C_FIELD(var_s0_2, s32 *, 0x18) == 2) && (M2C_FIELD(var_s0_2, s16 *, 0x14) == 0x131)) {
                func_8025676C(var_s0_2);
                func_8025676C(var_s0_2);
            }
            var_s0_2 = M2C_FIELD(var_s0_2, void **, 0);
        } while (var_s0_2 != NULL);
    }
}
