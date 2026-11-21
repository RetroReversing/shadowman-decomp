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

s32 func_8023DCBC();
extern s32 D_8007DA70;

void func_802D6260(void) {
    char *var_s0;
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = &D_8007DA70;
    do {
        temp_a0 = *(s32 *)var_s0;
        var_s1 += 1;
        if (temp_a0 != 0) {
            func_8023DCBC(temp_a0);
        }
        var_s0 += 4;
    } while (var_s1 < 0x14);
}
