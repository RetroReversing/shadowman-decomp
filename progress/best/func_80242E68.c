/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK func_80246684(s32);                         /* extern */
extern s32 D_8002D484;
extern M2C_UNK D_8006A9D8;

void func_80242E68(void) {
int __repair_literal;

    M2C_UNK *var_s1;
    s32 temp_a0;
    s32 var_s0;

    var_s0 = 0;
__repair_literal = 0;

    if (D_8002D484 > __repair_literal) {
        var_s1 = &D_8006A9D8;
        do {
            temp_a0 = M2C_FIELD(var_s1, s32 *, 0xC);
            if (temp_a0 != 0) {
                func_80246684(temp_a0);
            }
            var_s0 += 1;
            var_s1 += 20;
        } while (var_s0 < D_8002D484);
    }
}
