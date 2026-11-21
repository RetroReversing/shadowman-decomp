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

void func_802BFBB0(void *arg0, f32 arg1) {
    s16 *var_a1;
    s32 temp_v1;
    s32 var_a2;
    u16 temp_a2;
    void *var_a0;

    temp_a2 = M2C_FIELD(arg0, u16 *, 0x32);
    var_a1 = M2C_FIELD(arg0, s16 **, 0x18);
    var_a2 = temp_a2 - 1;
    if (temp_a2 != 0) {
        var_a0 = (s8 *) var_a1 + 4;
        __repair_rows: {
            *var_a1 = (s16) (s32) ((f32) *var_a1 * arg1);
            temp_v1 = var_a2;
            var_a2 -= 1;
            var_a1 += 3;
            M2C_FIELD(var_a0, s16 *, -2) = (s16) (s32) ((f32) M2C_FIELD(var_a0, s16 *, -2) * arg1);
            M2C_FIELD(var_a0, s16 *, 0) = (s16) (s32) ((f32) M2C_FIELD(var_a0, s16 *, 0) * arg1);
            var_a0 += 6;
        }
if (temp_v1 != 0) goto __repair_rows;
    }
}
