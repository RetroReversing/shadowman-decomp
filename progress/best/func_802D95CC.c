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

s32 func_80229AD8(void *, u8);                      /* extern */
extern M2C_UNK D_8007DC30;

void func_802D95CC(void *arg0, s32 arg1) {
    u8 var_v1;

    var_v1 = M2C_FIELD(&D_8007DC30, u8 *, 0x3ED);
    M2C_FIELD(&D_8007DC30, s32 *, 0x3E4) = arg1;
    if (M2C_FIELD(&D_8007DC30, u8 *, 0x3EC) != 0) {
        var_v1 += M2C_FIELD(&D_8007DC30, u8 *, 0x3EF);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 8) = func_80229AD8(M2C_FIELD(arg0, void **, 0x28), var_v1);
}
