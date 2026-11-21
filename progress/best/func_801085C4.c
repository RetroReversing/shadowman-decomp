/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

extern M2C_UNK D_8004DA90;
extern s32 D_8004DB48;

void func_801085C4(void) {
    s32 *var_v1;
    s32 temp_v0;
    s32 var_a0;

    var_v1 = &D_8004DB48;
    var_a0 = 0;
    do {
        temp_v0 = *var_v1;
        if ((temp_v0 == 1) || (temp_v0 == 6)) {
            *var_v1 = 4;
        }
        var_a0 += 1;
        var_v1 += 0xC;
    } while (var_a0 < 0x10);
    if ((M2C_FIELD(&D_8004DA90, s32 *, 0) == 1) && (M2C_FIELD(&D_8004DA90, s16 *, 0x14) == 0)) {
        M2C_FIELD(&D_8004DA90, s32 *, 0) = 3;
    }
}
