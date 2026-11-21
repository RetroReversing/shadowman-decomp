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

M2C_UNK func_802214B0();                            /* extern */
s32 func_80221614(u8 *, s16, s16, s32, s32, s32, s32, s32); /* extern */

void func_802213DC(u8 *arg0, u8 *arg1, u16 arg2, s16 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7) {
    u16 sp20;
    u16 var_s0;
    s16 var_v0;
    u16 var_s1;
    u8 temp_v0;

    var_s1 = arg2;
    sp20 = arg2;
    var_s0 = 0;
    if (*arg1 != 0) {
        var_v0 = 0;
        for (;;) {
            temp_v0 = *(arg1 + var_v0);
            var_s0 += 1;
            if (temp_v0 == 0xA) {
                func_802214B0();
                return;
            }
            var_s1 += func_80221614(arg0, (s16) var_s1, arg3, (unsigned char)(temp_v0 - 0x20), arg4 & 0xFF, arg5 & 0xFF, arg6 & 0xFF, arg7 & 0xFF);
            var_v0 = var_s0;
            if (*(arg1 + var_s0) == 0) {

            } else {
                continue;
            }
            break;
        }
    }
}
