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

M2C_UNK func_80292CDC(s32);                         /* extern */
extern M2C_UNK D_80036920;
extern s32 D_80036934;
extern s32 D_80036940;
extern u32 D_80036948;
extern s32 D_8003694C;
extern s32 D_80036950;

u32 func_80292884(void) {
    s32 *var_s0;
    s32 temp_a0;
    u32 *temp_v0;
    u32 *temp_v1;
    u32 temp_hi;
    u32 temp_s2;
    u32 var_s1;

    temp_hi = (u32) D_80036948 % (u32) M2C_FIELD(&D_80036920, u32 *, 0xC);
    var_s1 = 0;
    temp_v0 = (temp_hi * 4) + D_80036940;
    temp_s2 = *temp_v0;
    *temp_v0 = 0;
    D_80036950 -= temp_s2;
    if (temp_s2 != 0) {
        var_s0 = D_80036934 + (temp_hi * M2C_FIELD(&D_80036920, s32 *, 0x10) * 4);
        do {
            temp_a0 = *var_s0;
            temp_v1 = (temp_a0 * 4) + D_8003694C;
            if (*temp_v1 == -1U) {
                *temp_v1 = D_80036948;
                func_80292CDC(temp_a0);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < temp_s2);
    }
    return temp_s2;
}
