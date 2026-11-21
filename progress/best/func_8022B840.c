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

extern s32 D_80059794;

void func_8022B840(void *arg0) {
    u32 temp_lo;
    u32 var_a1;
    u32 var_a2;
    u32 var_v1;
    u8 temp_a0;

    temp_lo = M2C_FIELD(arg0, u8 *, 5) * M2C_FIELD(arg0, u8 *, 4);
    var_a2 = 0;
    if (temp_lo != 0) {
        do {
            var_a1 = 0;
            if (M2C_FIELD(arg0, u8 *, 4) != 0) {
                var_v1 = var_a2;
                do {
                    temp_a0 = *(u8 *)(M2C_FIELD(arg0, s32 *, 0xC) + (var_v1 >> 1));
                    *(s8 *)(D_80059794 + var_a2 + var_a1) = (s8) (temp_a0 >> 4);
                    M2C_FIELD((D_80059794 + var_a2 + var_a1), s8 *, 1) = (s8) (temp_a0 & 0xF);
                    var_a1 += 2;
                    var_v1 = var_a2 + var_a1;
                } while (var_a1 < (u8) M2C_FIELD(arg0, u8 *, 4));
            }
            var_a2 += M2C_FIELD(arg0, u8 *, 4);
        } while (var_a2 < temp_lo);
    }
}
