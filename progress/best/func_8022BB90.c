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

void func_8022BB90(void *arg0) {
    s32 temp_a2;
    s32 temp_s2;
    u32 temp_s1;
    u32 var_a0;
    u32 var_a1;
    u8 *var_v1;

    temp_s1 = M2C_FIELD(arg0, u8 *, 5) * M2C_FIELD(arg0, u8 *, 4);
    temp_s2 = (D_80059794 + temp_s1) - 1;
    func_8022B840();
    var_a1 = 0;
    if (temp_s1 != 0) {
        do {
            var_a0 = 0;
            if (M2C_FIELD(arg0, u8 *, 4) != 0) {
                temp_a2 = temp_s2 - var_a1;
                var_v1 = temp_a2 - 0;
                do {
                    *(s8 *)((*(s32 *)0x80059794) + var_a1 + var_a0) = *var_v1;
                    var_a0 += 1;
                    var_v1 = temp_a2 - var_a0;
                } while (var_a0 < (u8) M2C_FIELD(arg0, u8 *, 4));
            }
            var_a1 += M2C_FIELD(arg0, u8 *, 4);
        } while (var_a1 < temp_s1);
    }
    func_8022B8D8(arg0, var_a1);
}
