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

extern int D_8004DA90;
extern short D_8004DAA4;
extern s32 D_8004DB48;

void func_801085C4(void) {
    char *var_v1;
    s32 temp_v0;
    s32 var_a0;

    var_v1 = &D_8004DB48;
    var_a0 = 0;
    do {
        if (((temp_v0 = *(s32 *)var_v1) == 1) || (temp_v0 == 6)) {
            *(s32 *)var_v1 = 4;
        }
        var_a0 += 1;
        var_v1 += 0xC;
    } while (var_a0 < 0x10);
    if ((D_8004DA90 == 1) && (D_8004DAA4 == 0)) {
        D_8004DA90 = 3;
    }
}
