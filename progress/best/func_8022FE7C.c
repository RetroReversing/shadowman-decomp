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

extern void *D_80059874;
extern u16 D_80059880;

void func_8022FE7C(s32 arg0) {
    u32 var_a0;
    u32 var_a1;
    void *var_v1;
    void *var_v1_2;

    var_a1 = 0;
    if (D_80059880 != 0) {
        var_v1 = D_80059874;
loop_2:
        if (M2C_FIELD(var_v1, s32 *, 4) == arg0) {
            var_a0 = var_a1;
            if (var_a0 < (u16) D_80059880) {
                var_v1_2 = (var_a1 * 8) + D_80059874;
                __repair_rows: {
                    var_a0 += 1;
                    if (M2C_FIELD(var_v1_2, u16 *, 0) == (M2C_FIELD(var_v1, u16 *, 0) & 0xFFFF)) {
                        M2C_FIELD(var_v1_2, u16 *, 0) = 0xFFFFU;
                        M2C_FIELD(var_v1_2, s16 *, 2) = 0;
                    }
                    var_v1_2 += 8;
                }
if (var_a0 < (u16) D_80059880) goto __repair_rows;
            }
        } else {
            var_a1 += 1;
            var_v1 += 8;
            if (var_a1 >= (u16) D_80059880) {
                return;
            }
            goto loop_2;
        }
    }
}
