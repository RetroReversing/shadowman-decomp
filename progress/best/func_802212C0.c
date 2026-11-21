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

M2C_UNK func_80221390();                            /* extern */
s32 func_80221614(u8 *, s32, s32, s32, s32, s32, s32, s32); /* extern */

void func_802212C0(u8 *arg0, s32 arg1, u8 *arg2, u16 arg3, u16 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8) {
    u16 sp20;
    s32 sp24;
    s16 temp_v0_2;
    s16 var_s3;
    s32 temp_v0;
    u16 var_s0;
    u8 *var_s2;
    u8 temp_a3;

    var_s2 = arg2;
    var_s0 = arg3;
    var_s3 = 0;
    sp20 = arg3;
    if (arg1 > 0) {
        sp24 = arg5 & 0xFF;
        for (;;) {
            temp_a3 = *var_s2;
            temp_v0 = temp_a3 & 0xFF;
            if (temp_v0 != 0) {
                if (temp_v0 == 0xA) {
                    func_80221390();
                    return;
                }
                var_s0 += func_80221614(arg0, var_s0, arg4, (temp_a3 - 0x20) & 0xFF, sp24, arg6 & 0xFF, arg7 & 0xFF, arg8 & 0xFF);
                temp_v0_2 = var_s3 + 1;
                var_s3 = temp_v0_2;
                var_s2 += 1;
                if (temp_v0_2 >= arg1) {

                } else {
                    continue;
                }
            }
            break;
        }
    }
}
