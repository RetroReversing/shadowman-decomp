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

M2C_UNK func_80108AAC(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_80108B30();                                /* extern */
s32 func_80113AD0();                                /* extern */

void func_80249454(void *arg0) {
    M2C_UNK var_a0;

    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 8), s16 *, 0x7A) == 0) && (func_80108B30() == 0)) {
        var_a0 = 0x20;
        if (func_80113AD0() & 0x100) {
            var_a0 = 0x21;
        }
        func_80108AAC(var_a0, 0x3F, 0x7FFF);
    }
}
