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
extern s32 D_8005979C;

void func_8022BD18(void *arg0) {
    s32 *__base_D_8005979C;
    s32 *temp_v0_2;
    char *var_a1;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_a0;
    u32 temp_lo;
    u32 var_a2;
    u32 var_a3;

    temp_lo = M2C_FIELD(arg0, u8 *, 4) * M2C_FIELD(arg0, u8 *, 5);
    temp_s2 = M2C_FIELD(arg0, s32 *, 0xC);
    __base_D_8005979C = &D_8005979C;
    func_80103480((*__base_D_8005979C), temp_s2, temp_lo * 4);
    var_a3 = 0;
    if (temp_lo != 0) {
        do {
            var_a2 = 0;
            if (M2C_FIELD(arg0, u8 *, 4) != 0) {
                temp_v0 = var_a3 * 4;
                var_a1 = temp_v0 + temp_s2;
                var_a0 = 4;
                do {
                    temp_v0_2 = ((*__base_D_8005979C) + temp_v0 + (M2C_FIELD(arg0, u8 *, 4) * 4)) - var_a0;
                    var_a0 += 4;
                    var_a2 += 1;
                    *(s32 *)var_a1 = *temp_v0_2;
                    var_a1 += 4;
                } while (var_a2 < (u8) M2C_FIELD(arg0, u8 *, 4));
            }
            var_a3 += M2C_FIELD(arg0, u8 *, 4);
        } while (var_a3 < temp_lo);
    }
}
