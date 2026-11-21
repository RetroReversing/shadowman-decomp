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

s32 func_8026E2F4(M2C_UNK);                         /* extern */
extern s32 D_8002D4A4;

void func_80242ED8(void) {
    s32 var_v0;

    D_8002D4A4 = 0;
    var_v0 = 6;
    if ((func_8026E2F4(0x84) != 0) || (var_v0 = 5, (func_8026E2F4(0x85) != 0)) || (var_v0 = 4, (func_8026E2F4(0x86) != 0)) || (var_v0 = 3, (func_8026E2F4(0x87) != 0)) || (var_v0 = 2, (func_8026E2F4(0x88) != 0)) || (var_v0 = 1, (func_8026E2F4(0x89) != 0))) {
        D_8002D4A4 = var_v0;
    }
}
