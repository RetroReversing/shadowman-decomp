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

M2C_UNK func_80106F94(s32, s32);                    /* extern */
M2C_UNK func_80116EB0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_8011BA20(void *, M2C_UNK, s32, M2C_UNK *); /* extern */
extern M2C_UNK *D_8004CA1C;

void func_80106F38(void *arg0) {
    M2C_UNK *temp_t0;
    M2C_UNK *var_a0;
    M2C_UNK *var_a3;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_t1;
    s32 temp_v1;
    s32 var_v0;
    u16 var_s0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    var_v0 = temp_v1 + 0xFFF;
    var_s0 = 0;
    if (var_v0 < 0) {
        var_v0 = temp_v1 + 0x1FFE;
    }
    temp_t1 = var_v0 >> 0xC;
    temp_a0 = temp_t1 + 1;
    temp_t0 = M2C_FIELD(arg0, M2C_UNK **, 8);
    temp_a2 = temp_a0 & ~1;
    if (M2C_FIELD(temp_t0, s32 *, 8) & 1) {
        func_80106F94(temp_a0, temp_a2);
        return;
    }
    M2C_FIELD(temp_t0, void **, 0x10) = (void *) ((s8 *) temp_t0 + 0x18);
    var_a0 = &D_8004CA1C;
    var_a3 = NULL;
    if (&D_8004CA1C != NULL) {
        do {
            var_a3 = var_a0;
            var_a0 = M2C_FIELD(var_a3, M2C_UNK **, 0);
            var_s0 = M2C_FIELD(var_a3, u16 *, 4) + M2C_FIELD(var_a3, u16 *, 6);
        } while (var_a0 != NULL);
    }
    if (var_s0 & 1) {
        var_s0 += 1;
    }
    if (var_s0 < 0x800U) {
        var_s0 = 0x800;
    }
    M2C_FIELD(temp_t0, u16 *, 4) = var_s0;
    M2C_FIELD(temp_t0, s16 *, 6) = (s16) temp_t1;
    M2C_FIELD(temp_t0, M2C_UNK **, 0) = NULL;
    *var_a3 = temp_t0;
    func_8011BA20(M2C_FIELD(temp_t0, void **, 0x10), 0xFF, temp_a2, var_a3);
    func_80116EB0(M2C_FIELD(arg0, s32 *, 0xC), var_s0 << 0xC, 1);
}
