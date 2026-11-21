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
M2C_UNK func_80236E10();                            /* extern */
extern u16 D_80052776;

void func_80236DB8(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x42) - D_80052776;
    M2C_FIELD(arg0, u16 *, 0x42) = temp_v1;
    if ((temp_v1 << 0x10) <= 0) {
        M2C_FIELD(arg0, s16 *, 0x40) = (s16) (M2C_FIELD(arg0, s16 *, 0x40) == 0);
    }
    if (M2C_FIELD(arg0, s16 *, 0x40) == 0) {
        func_80236E10();
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x4C);
    M2C_FIELD(arg0, u16 *, 0x42) = (u16) (M2C_FIELD(arg0, u16 *, 0x42) + (func_80113AD0() & 7));
}
