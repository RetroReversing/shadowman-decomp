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

void func_8022EEC4(void *arg0, s8 arg1) {
    u32 var_a2;
    void *temp_a3;
    void *var_v1;

    temp_a3 = M2C_FIELD(arg0, void **, 0x64);
    var_a2 = 0;
    if (M2C_FIELD(temp_a3, s32 *, 0x50) != 0) {
        var_v1 = M2C_FIELD(temp_a3, s32 *, 0x14) + ((u16) M2C_FIELD(temp_a3, s32 *, 0x50) * 0x12);
        do {
            M2C_FIELD(var_v1, s8 *, 2) = arg1;
            var_a2 += 1;
            var_v1 += 0x12;
        } while ((u16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), u16 *, 0x52) >= var_a2);
    }
}
