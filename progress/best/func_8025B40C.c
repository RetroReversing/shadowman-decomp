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

extern char D_8002E088[];

void func_8025B40C(void *arg0) {
    s32 var_a2;
    s8 temp_a0;
    u32 var_a1;
    u8 temp_v1;

    var_a1 = 0;
    var_a2 = 0xA;
    do {
        if (var_a1 == ((M2C_FIELD(arg0, u16 *, 0x14) - 0xB0) & 0xFFFF)) {
            var_a2 = 0;
        }
        temp_a0 = var_a2 + var_a1;
        temp_v1 = *(var_a1 + D_8002E088);
        var_a1 += 1;
        M2C_FIELD(((temp_v1 * 0x12) + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0x64), s32 *, 0x14)), s8 *, 2) = temp_a0;
    } while (var_a1 < 0xAU);
}
