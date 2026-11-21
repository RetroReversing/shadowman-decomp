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

s32 func_80114D60();
s32 func_802DCACC();
s32 func_802DEC54();
s32 func_802DED94();

void func_802DCA1C(void *arg0, s32 arg1, u16 *arg2, s8 arg3) {
    s32 sp10;
    s32 var_s1;

    M2C_FIELD(arg0, s8 *, 0x65) = arg3;
    var_s1 = 0;
    if (func_802DED94() != 0) {
        func_802DCACC();
        return;
    }
loop_6:
    if (func_80114D60(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (((arg1 & 0xFF) * 8) + var_s1) & 0xFFFF, &sp10) == 0) {
        var_s1 += 1;
        *arg2 += func_802DEC54(&sp10, 0x20);
        if (var_s1 >= 8) {
            M2C_FIELD(arg0, s8 *, 0x65) = 0;
            func_802DED94(arg0);
            return;
        }
        goto loop_6;
    }
    M2C_FIELD(arg0, s8 *, 0x65) = 0;
    func_802DED94(arg0);
    func_802DCACC();
}
