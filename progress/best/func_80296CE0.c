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

void *func_801043F8(s32, M2C_UNK, M2C_UNK);         /* extern */
extern void *D_8007BB28;

void func_80296CE0(s32 arg0) {
    s32 var_a2;
    u32 temp_a0;
    u32 var_a1;
    void *temp_a3;
    void *var_v1;

    var_v1 = func_801043F8(arg0 * 0x74, 2, 0);
    D_8007BB28 = var_v1;
    if (arg0 != 1) {
        temp_a0 = arg0 - 1;
        var_a1 = 0;
        if (temp_a0 != 0) {
            var_a2 = 0x74;
            temp_a3 = var_v1;
            do {
                M2C_FIELD(var_v1, void **, 0x3C) = (void *) (temp_a3 + var_a2);
                var_a2 += 0x74;
                var_a1 += 1;
                var_v1 += 0x74;
            } while (var_a1 < temp_a0);
        }
        var_v1 = (var_a1 * 0x74) + D_8007BB28;
    }
    M2C_FIELD(var_v1, s32 *, 0x3C) = 0;
}
