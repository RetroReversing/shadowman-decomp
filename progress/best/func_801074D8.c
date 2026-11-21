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

extern unsigned short D_8004CA34;
extern char D_8004B420[];

s32 func_801074D8(void) {
    s32 temp_a2;
    s32 var_v0;
    u16 temp_v0;
    u16 temp_v1;
    u8 temp_v0_2;
    u8 temp_v0_3;
    void *temp_v1_2;

    temp_v1 = D_8004CA34;
    temp_v0 = temp_v1 + 1;
    D_8004CA34 = temp_v0;
    var_v0 = temp_v1 << 0x10;
    if ((s16) temp_v0 >= 0x1F) {
        D_8004CA34 = 1U;
        var_v0 = temp_v1 << 0x10;
    }
    temp_a2 = var_v0 >> 0x10;
    temp_v1_2 = (temp_a2 * 4) + D_8004B420;
    temp_v0_2 = M2C_FIELD(temp_v1_2, u8 *, 0x1582);
    if (temp_v0_2 != 0xFF) {
        M2C_FIELD(((temp_v0_2 * 0x10) + D_8004B420), u8 *, 0x933) = 0xFF;
        M2C_FIELD(temp_v1_2, u8 *, 0x1582) = 0xFFU;
    }
    temp_v0_3 = M2C_FIELD(temp_v1_2, u8 *, 0x1583);
    if (temp_v0_3 != 0xFF) {
        M2C_FIELD(((temp_v0_3 * 0x10) + D_8004B420), u8 *, 0x933) = 0xFF;
        M2C_FIELD(temp_v1_2, u8 *, 0x1583) = 0xFFU;
    }
    return temp_a2;
}
