/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

void func_8022C02C(void *arg0_in) {
int __repair_literal;

  void * arg0;
    s32 var_lo;
    u32 var_a2;
    u32 var_a3;
    u8 temp_v1;
    u8 temp_v1_2;
  arg0 = arg0_in;

    var_a3 = 0;
    if (M2C_FIELD(arg0, u8 *, 5) != 0) {
        do {
            temp_v1 = M2C_FIELD(arg0, u8 *, 4);
            var_a2 = 0;
            if (temp_v1 != 0) {
                var_lo = var_a3 * temp_v1;
                do {
__repair_literal = 4;

                    *(s32 *)((var_a2 * 4) + ((var_lo * __repair_literal) + D_8005979C)) = *(s32 *)((var_a3 * 4) + ((M2C_FIELD(arg0, s32 *, 0xC) + (M2C_FIELD(arg0, u8 *, 4) * (M2C_FIELD(arg0, u8 *, 5) - 1) * 4)) - (var_a2 * M2C_FIELD(arg0, u8 *, 4) * 4)));
                    temp_v1_2 = M2C_FIELD(arg0, u8 *, 4);
                    var_a2 += 1;
                    var_lo = var_a3 * temp_v1_2;
                } while (var_a2 < temp_v1_2);
            }
            var_a3 += 1;
        } while (var_a3 < (u8) M2C_FIELD(arg0, u8 *, 5));
    }
    func_80103480(M2C_FIELD(arg0, s32 *, 0xC), D_8005979C, M2C_FIELD(arg0, u8 *, 4) * M2C_FIELD(arg0, u8 *, 5) * 4, var_a3);
}
