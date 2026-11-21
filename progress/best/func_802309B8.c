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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80230A3C();
extern s32 D_80052764;
extern char D_800598A0[];

s32 func_802309B8(s32 arg0, u32 arg1) {
    char *var_a2;
    s32 temp_a0;
    u32 var_a0;
    u32 var_a1;
    u32 var_a3;
    u32 var_v1;

    var_a1 = arg1;
    var_a0 = 0xFFFF;
    var_a3 = 0;
    var_a2 = D_800598A0;
    var_v1 = D_80052764 - 3;
    do {
        if (M2C_FIELD(var_a2, u16 *, 0) & 1) {
            var_a1 = M2C_FIELD(var_a2, u32 *, 4);
            if (var_a1 < var_v1) {
                var_v1 = var_a1;
                var_a0 = var_a3;
            }
        }
        var_a3 += 1;
        var_a2 += 0x28;
    } while (var_a3 < 0x1F4U);
    temp_a0 = var_a0 & 0xFFFF;
    if (temp_a0 != 0xFFFF) {
        func_80230A3C(temp_a0, var_a1, var_a2, var_a3);
        return 1;
    }
    return 0;
}
