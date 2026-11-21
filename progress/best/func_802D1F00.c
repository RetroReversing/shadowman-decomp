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

extern M2C_UNK D_80045930;

void func_802D1F00(void) {
    M2C_UNK *var_a1;
    s32 var_a2;
    void *temp_a0;
    void *temp_v1;

    var_a2 = 0;
    var_a1 = &D_80045930;
    do {
        temp_v1 = M2C_FIELD(var_a1, void **, 8);
        var_a2 += 1;
        if (temp_v1 != NULL) {
            temp_a0 = M2C_FIELD(temp_v1, void **, 0x64);
            if (!(M2C_FIELD(temp_a0, u16 *, 0x3C) & 4)) {
                M2C_FIELD(temp_a0, s16 *, 0xC) = 0;
                M2C_FIELD(M2C_FIELD(temp_v1, void **, 0x64), s16 *, 0xE) = 0;
                M2C_FIELD(M2C_FIELD(temp_v1, void **, 0x64), s16 *, 0x10) = 0;
            }
        }
        var_a1 += 5;
    } while (var_a2 < 0x14);
}
