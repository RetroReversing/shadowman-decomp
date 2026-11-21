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

extern M2C_UNK D_10B17C;
extern M2C_UNK D_8004E120;
extern M2C_UNK D_8004E130;

M2C_UNK *func_8010B31C(M2C_UNK **arg0) {
    if (M2C_FIELD(&D_8004E120, u8 *, 0) == 0) {
        M2C_FIELD(&D_8004E120, M2C_UNK **, 8) = &D_8004E130;
        M2C_FIELD(&D_8004E120, s32 *, 4) = 0;
        M2C_FIELD(&D_8004E120, u8 *, 0) = 1U;
    }
    *arg0 = &D_8004E120;
    return &D_10B17C;
}
