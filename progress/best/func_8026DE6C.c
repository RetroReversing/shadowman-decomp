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

s32 func_8023646C(s32);                             /* extern */
M2C_UNK func_8023648C(s32);                         /* extern */

void func_8026DE6C(s32 arg0, s32 arg1) {
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 var_s0;
    s16 var_s3;

    temp_a1 = arg1 - 1;
    var_s3 = temp_a1;
    if (temp_a1 != -1) {
        __repair_rows: {
            func_8023648C(arg0);
            func_8023646C(arg0);
            temp_v0_2 = func_8023646C(arg0) - 1;
            var_s0 = temp_v0_2;
            if (temp_v0_2 != -1) {
                do {
                    func_8023648C(arg0);
                    temp_v0_3 = var_s0 - 1;
                    var_s0 = temp_v0_3;
                } while (temp_v0_3 != -1);
            }
            func_8023646C(arg0);
            func_8023646C(arg0);
            temp_v0 = var_s3 - 1;
            var_s3 = temp_v0;
        }
if (temp_v0 != -1) goto __repair_rows;
    }
}
