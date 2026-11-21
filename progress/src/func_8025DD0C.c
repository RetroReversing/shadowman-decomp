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

void func_8025DD0C(void *arg0, s8 arg1) {
    u32 var_a2;

    var_a2 = 0;
    if (M2C_FIELD(arg0, u16 *, 0x3A) != 0) {
        do {
            M2C_FIELD(((var_a2 * 8) + M2C_FIELD(arg0, s32 *, 0x28)), s8 *, 7) = arg1;
            var_a2 += 1;
        } while (var_a2 < (u16) M2C_FIELD(arg0, u16 *, 0x3A));
    }
}
