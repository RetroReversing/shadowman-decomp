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

extern M2C_UNK D_80061A20;
extern u32 D_80069720;

void func_80237708(void) {
    M2C_UNK *var_a1;
    s32 temp_v1;
    u32 var_a2;
    void *temp_a0;

    var_a1 = &D_80061A20;
    var_a2 = 0;
    if (D_80069720 != 0) {
        __repair_rows: {
            var_a2 += 1;
            M2C_FIELD(M2C_FIELD(var_a1, void **, 0), s8 *, 3) = 0;
            temp_a0 = M2C_FIELD(var_a1, void **, 0);
            temp_v1 = M2C_FIELD(var_a1, s32 *, 4);
            var_a1 += 8;
            M2C_FIELD(temp_a0, s32 *, 4) = temp_v1;
        }
if (var_a2 < (u32) D_80069720) goto __repair_rows;
    }
}
