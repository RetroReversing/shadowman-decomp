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

s32 func_80103480();
extern s32 D_80059794;

void func_8022B954(void *arg0) {
    s32 *__base_D_80059794;
    u32 temp_lo;
    u32 temp_s0;
    u32 var_a1;
    u32 var_a2;
    u32 var_a3;
    u8 temp_v1;

    temp_s0 = (u8) M2C_FIELD(arg0, u8 *, 4) >> 1;
    temp_lo = temp_s0 * M2C_FIELD(arg0, u8 *, 5);
    __base_D_80059794 = &D_80059794;
    func_80103480((*__base_D_80059794), M2C_FIELD(arg0, s32 *, 0xC), temp_lo);
    var_a3 = 0;
    if (temp_lo != 0) {
        do {
            var_a2 = 0;
            if (temp_s0 != 0) {
                var_a1 = var_a3;
                do {
                    var_a2 += 1;
                    temp_v1 = *(u8 *)(((*__base_D_80059794) + var_a3 + temp_s0) - var_a2);
                    *(s8 *)(M2C_FIELD(arg0, s32 *, 0xC) + var_a1) = (temp_v1 >> 4) + (temp_v1 * 0x10);
                    var_a1 = var_a3 + var_a2;
                } while (var_a2 < temp_s0);
            }
            var_a3 += temp_s0;
        } while (var_a3 < temp_lo);
    }
}
