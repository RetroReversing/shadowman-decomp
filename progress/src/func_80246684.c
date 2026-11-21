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

void func_80246684(void *arg0) {
    M2C_UNK (*temp_v0_2)(void *);
    void *temp_a0;
    void *temp_v0;
    void *var_s0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x84);
    if ((temp_v0 != NULL) && (M2C_FIELD((var_s0 = temp_v0), s16 *, 0x14) == 0)) {
        M2C_FIELD(var_s0, s16 *, 0x14) = 1;
        do {
            if (M2C_FIELD(var_s0, s16 *, 0x14) == 0x4556) {
                temp_a0 = M2C_FIELD(var_s0, void **, 8);
                if (M2C_FIELD(temp_a0, s32 *, 8) != 4) {
                    temp_v0_2 = M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0x14);
                    if (temp_v0_2 != NULL) {
                        temp_v0_2(temp_a0);
                    }
                }
            }
            var_s0 = M2C_FIELD(var_s0, void **, 0);
        } while (var_s0 != NULL);
    }
}
