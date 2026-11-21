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

s32 func_80113AD0();                                /* extern */
extern s32 D_8002C240;
extern M2C_UNK D_800756A0;

void func_80269278(void) {
    s32 temp_v1;
    s32 var_v0;

    var_v0 = func_80113AD0();
    temp_v1 = var_v0;
    if (temp_v1 < 0) {
        var_v0 = temp_v1 + 0x7F;
    }
    M2C_FIELD(((D_8002C240 << 9) + &D_800756A0), s16 *, 0x3E) = (s16) (((((temp_v1 - ((var_v0 >> 7) << 7)) + 0x80) << 8) & ~0x7FF) | 0x319);
}
