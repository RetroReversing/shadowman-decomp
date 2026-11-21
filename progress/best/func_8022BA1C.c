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

M2C_UNK func_80103480(s32, s32, u32);               /* extern */
extern s32 D_80059794;

void func_8022BA1C(void *arg0) {
    u32 temp_lo;
    u32 temp_s1;
    u32 var_s0;
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 5);
    temp_s1 = (u8) M2C_FIELD(arg0, u8 *, 4) >> 1;
    temp_lo = temp_s1 * temp_v0;
    var_s0 = 0;
    func_80103480(D_80059794, M2C_FIELD(arg0, s32 *, 0xC), temp_lo);
    if (temp_lo != 0) {
        do {
            func_80103480(M2C_FIELD(arg0, s32 *, 0xC) + var_s0, D_80059794 + (((temp_v0 - 1) * temp_s1) - var_s0), temp_s1);
            var_s0 += temp_s1;
        } while (var_s0 < temp_lo);
    }
}
