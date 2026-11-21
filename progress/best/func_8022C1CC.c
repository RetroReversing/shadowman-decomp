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

void func_8022C1CC(void *arg0, s32 arg1) {
    s32 *__base_D_80059794;
    s32 temp_lo;
    s32 var_s0;
    s32 var_s2;
    s32 var_v1;
    u32 temp_s1;

    arg1 &= 0xFF;
    var_s0 = 0;
    temp_s1 = (u8) M2C_FIELD(arg0, u8 *, 4) >> 1;
    if (M2C_FIELD(arg0, u8 *, 5) != 0) {
        var_s2 = 0;
        __repair_rows: {
            var_v1 = var_s0 + (((u32) arg1 >> 1) & 0xFF);
            if (var_v1 >= (s32) M2C_FIELD(arg0, u8 *, 5)) {
                var_v1 -= (s32) M2C_FIELD(arg0, u8 *, 5);
            }
            temp_lo = var_v1 * temp_s1;
            var_s0 += 1;
            __base_D_80059794 = &D_80059794;
            func_80103480((*__base_D_80059794) + temp_lo, M2C_FIELD(arg0, s32 *, 0xC) + var_s2, temp_s1, temp_lo);
            var_s2 += temp_s1;
        }
if (var_s0 < (s32) M2C_FIELD(arg0, u8 *, 5)) goto __repair_rows;
    }
    func_80103480(M2C_FIELD(arg0, s32 *, 0xC), (*__base_D_80059794), temp_s1 * M2C_FIELD(arg0, u8 *, 5));
}
