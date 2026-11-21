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

extern M2C_UNK D_8004B420;

void func_80107924(void) {
    M2C_UNK *var_a0;
    s32 var_a1;
    u32 temp_v1;
    u32 var_a2;
    u32 var_a3;

    var_a2 = 0;
    var_a3 = 0x80000000;
    var_a1 = 0;
    var_a0 = &D_8004B420;
    __repair_rows: {
        temp_v1 = M2C_FIELD(var_a0, u32 *, 0x934);
        if (var_a2 < temp_v1) {
            var_a2 = temp_v1;
        }
        if (temp_v1 < var_a3) {
            var_a3 = temp_v1;
        }
        M2C_FIELD(var_a0, u32 *, 0x934) = (u32) (temp_v1 + 1);
        var_a1 += 1;
        var_a0 += 0x10;
    }
if (var_a1 < 0x90) goto __repair_rows;
    M2C_FIELD(&D_8004B420, u32 *, 0x1C) = var_a2;
    M2C_FIELD(&D_8004B420, u32 *, 0x20) = var_a3;
    M2C_FIELD(&D_8004B420, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(&D_8004B420, void **, 0x1378), s32 *, 0xC);
}
