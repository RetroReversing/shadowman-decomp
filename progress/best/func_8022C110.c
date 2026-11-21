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

void func_8022C110(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_t2;
    s32 var_t3;
    u32 temp_t1;
    u8 *temp_v1;
    s32 *__base_D_80059794;

    __base_D_80059794 = &D_80059794;

    arg1 &= 0xFF;
    var_a3 = arg3;
    var_t2 = 0;
    temp_t1 = (u8) M2C_FIELD(arg0, u8 *, 4) >> 1;
    if (M2C_FIELD(arg0, u8 *, 5) != 0) {
        temp_a1 = ((u32) arg1 >> 1) & 0xFF;
        var_t3 = 0;
        do {
            var_a2 = 0;
            if (temp_t1 != 0) {
                var_a3 = temp_a1;
                do {
                    if (var_a3 >= (s32) temp_t1) {
                        var_a3 -= temp_t1;
                    }
                    temp_v1 = M2C_FIELD(arg0, s32 *, 0xC) + var_t3 + var_a2;
                    var_a2 += 1;
                    *(s8 *)((*__base_D_80059794) + var_t3 + var_a3) = *temp_v1;
                    var_a3 = var_a2 + temp_a1;
                } while (var_a2 < (s32) temp_t1);
            }
            var_t2 += 1;
            var_t3 += temp_t1;
        } while (var_t2 < (s32) M2C_FIELD(arg0, u8 *, 5));
    }
    func_80103480(M2C_FIELD(arg0, s32 *, 0xC), (*__base_D_80059794), temp_t1 * M2C_FIELD(arg0, u8 *, 5), var_a3);
}
