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

void func_8026199C(void *arg0) {
    s32 var_a1;
    void *temp_a2;
    void *var_a0;

    temp_a2 = M2C_FIELD(arg0, void **, 0x64);
    var_a0 = M2C_FIELD(temp_a2, void **, 0x14);
    var_a1 = 0;
    if (M2C_FIELD(temp_a2, u16 *, 0x30) != 0) {
        do {/*__repair_loop_weight*/do {
            var_a1 += 1;} while (0);
            M2C_FIELD(var_a0, u16 *, 0) = (u16) ((M2C_FIELD(var_a0, u16 *, 0) & 0xFF80) | ((M2C_FIELD(var_a0, u8 *, 1) & 0x7F) | 0x10));
            var_a0 += 0x12;
        } while (var_a1 < (s32) M2C_FIELD(temp_a2, u16 *, 0x30));
    }
}
