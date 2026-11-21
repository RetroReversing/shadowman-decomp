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

s32 func_80103480();
extern s32 D_8005979C;

void func_8022BF74(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_lo;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a3;
    u32 var_a1;
    u32 var_t0;
    u8 temp_v0;

    var_a3 = arg3;
    temp_v0 = M2C_FIELD(arg0, u8 *, 5);
    temp_lo = M2C_FIELD(arg0, u8 *, 4) * temp_v0;
    var_t0 = 0;
    if (temp_v0 != 0) {
        do {
            var_a1 = 0;
            if (M2C_FIELD(arg0, u8 *, 4) != 0) {
                var_a3 = 4;
                do {
                    temp_v1 = var_a1 * 4;
                    var_a1 += 1;
                    temp_v0_2 = var_t0 * M2C_FIELD(arg0, u8 *, 4) * 4;
                    *(s32 *)(temp_v1 + (temp_v0_2 + D_8005979C)) = *(s32 *)(((M2C_FIELD(arg0, s32 *, 0xC) + (temp_lo * 4)) - temp_v0_2) - var_a3);
                    var_a3 += 4;
                } while (var_a1 < (u8) M2C_FIELD(arg0, u8 *, 4));
            }
            var_t0 += 1;
        } while (var_t0 < (u8) M2C_FIELD(arg0, u8 *, 5));
    }
    func_80103480(M2C_FIELD(arg0, s32 *, 0xC), D_8005979C, temp_lo * 4, var_a3);
}
