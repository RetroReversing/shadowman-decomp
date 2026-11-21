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

extern s32 D_80036944;
extern s32 D_8003694C;

s32 func_802922C0(s32 arg0) {
    s32 var_a0;
    s32 var_a1;
    u32 var_t0;
    void *temp_v1;
    void *var_a2;

    var_a0 = arg0;
    temp_v1 = (var_a0 * 0x34) + D_80036944;
    var_a1 = M2C_FIELD(temp_v1, s32 *, 0x24);
    var_t0 = 0;
    if (var_a1 != -1) {
        var_a2 = temp_v1;
        for (;;) {
            if (var_t0 < 4U) {
                if ((u32) *(u32 *)((var_a1 * 4) + D_8003694C) < (u32) *(u32 *)((var_a0 * 4) + D_8003694C)) {
                    var_a0 = var_a1;
                }
                var_a2 += 4;
                var_a1 = M2C_FIELD(var_a2, s32 *, 0x24);
                var_t0 += 1;
                if (var_a1 != -1) {
                    continue;
                }
            }
            break;
        }
    }
    return var_a0;
}
