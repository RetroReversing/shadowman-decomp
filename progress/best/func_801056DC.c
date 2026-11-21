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

void func_801056DC(s32 *arg0, s32 arg1) {
    char *var_v1;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a2;
    void *var_a0;

    temp_a1 = arg1 - 1;
    var_a2 = temp_a1;
    var_v1 = arg0;
    if ((temp_a1 & 0xFF) != 0xFF) {
        var_a0 = arg0 + 0xC;
        __repair_rows: {
            *(s32 *)var_v1 = 0;
            M2C_FIELD(var_a0, u16 *, -8) = 0xFFFF;
            M2C_FIELD(var_a0, s32 *, -4) = 0;
            M2C_FIELD(var_a0, s16 *, 0) = 0;
            var_a0 += 0x10;
            temp_v0 = var_a2 - 1;
            var_a2 = temp_v0;
            var_v1 += 0x10;
        }
if ((temp_v0 & 0xFF) != 0xFF) goto __repair_rows;
    }
}
