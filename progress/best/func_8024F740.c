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

s32 func_80113AD0();                                /* extern */
extern M2C_UNK D_8006A820;

void func_8024F740(void) {
    s8 var_a0;

    var_a0 = 0xCD;
    if ((func_80113AD0() & 0x3F) == 0x2A) {
        var_a0 = 0x20;
    }
    M2C_FIELD(&D_8006A820, s8 *, 0x20) = var_a0;
}
