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

extern s32 D_800619D8;

s32 func_80225428(void *arg0, void *arg1) {
    s32 var_a2;
    s32 var_a3;
    char *var_v1;
    u8 temp_a0;

    var_a3 = 0xFF;
    var_a2 = 0;
    temp_a0 = M2C_FIELD(arg1, u8 *, 0);
    var_v1 = M2C_FIELD(arg0, s32 *, 0x20) + (M2C_FIELD(arg1, u16 *, 6) * 6);
    if (temp_a0 != 0) {
        do {
            var_a2 += 1;
            var_a3 &= M2C_FIELD(((*(u16 *)var_v1 * 0x10) + D_800619D8), s32 *, 0xC);
            var_v1 += 6;
        } while (var_a2 < (s32) temp_a0);
    }
    return var_a3;
}
