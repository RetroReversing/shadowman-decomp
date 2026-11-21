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

s32 func_8022B840();
s32 func_8022B8D8();
extern s32 D_80059794;
extern s32 D_80059798;

void func_8022BC48(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_lo;
    s32 temp_s1;
    s32 var_lo;
    u32 var_a0;
    u32 var_a1;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_lo = M2C_FIELD(arg0, u8 *, 4) * (M2C_FIELD(arg0, u8 *, 5) - 1);
    temp_s1 = D_80059794 + temp_lo;
    func_8022B840(arg0, arg1, arg2);
    var_a1 = 0;
    if (M2C_FIELD(arg0, u8 *, 5) != 0) {
        do {
            temp_v1 = M2C_FIELD(arg0, u8 *, 4);
            var_a0 = 0;
            if (temp_v1 != 0) {
                var_lo = var_a1 * temp_v1;
                do {
                    *(s8 *)((*(s32 *)0x80059794) + var_lo + var_a0) = *(s32 *)((temp_s1 - (var_a0 * M2C_FIELD(arg0, u8 *, 4))) + var_a1);
                    temp_v1_2 = M2C_FIELD(arg0, u8 *, 4);
                    var_a0 += 1;
                    var_lo = var_a1 * temp_v1_2;
                } while (var_a0 < temp_v1_2);
            }
            var_a1 += 1;
        } while (var_a1 < (u8) M2C_FIELD(arg0, u8 *, 5));
    }
    func_8022B8D8(arg0, var_a1);
}
