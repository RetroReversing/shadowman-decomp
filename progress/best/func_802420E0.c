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

s8 func_8023646C();
s32 func_8023648C();
extern s32 D_8005E90C;
extern char D_8006A710[];

void func_802420E0(s32 arg0) {
    s32 *temp_s0_3;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s1;
    s8 temp_s0;

    temp_v0 = func_8023648C() - 1;
    var_s1 = temp_v0;
    if ((temp_v0 & 0xFFFF) != 0xFFFF) {
        do {
            temp_s0 = func_8023646C(arg0);
            temp_s0_2 = temp_s0 & 0xFF;
            M2C_FIELD((temp_s0_2 + D_8006A710), s8 *, 0xC) = func_8023646C(arg0);
            temp_v1 = var_s1 - 1;
            var_s1 = temp_v1;
            temp_s0_3 = (temp_s0_2 * 0x10) + D_8005E90C;
            *temp_s0_3 |= 0x800000;
        } while ((temp_v1 & 0xFFFF) != 0xFFFF);
    }
}
