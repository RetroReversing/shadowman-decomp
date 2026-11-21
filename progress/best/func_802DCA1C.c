/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80114D60();
s32 func_802DCACC();
s32 func_802DEC54();
s32 func_802DED94();

void func_802DCA1C(void *arg0, s32 arg1, u16 *arg2, s8 arg3) {
    char sp10[0x20];
    long var_s1;

    (*(s8 *)((char *)(arg0) + 0x65)) = arg3;
    var_s1 = 0;
    if (func_802DED94() != 0) {
        func_802DCACC(arg0);
        return;
    }
    while (func_80114D60((*(s32 *)((char *)(arg0) + 4)), (*(s32 *)((char *)(arg0) + 8)), (((arg1 & 0xFF) * 8) + var_s1) & 0xFFFF) == 0) {
        var_s1 += 1;
        *arg2 += func_802DEC54(sp10, 0x20);
        if (var_s1 >= 8) {
            (*(s8 *)((char *)(arg0) + 0x65)) = 0;
            func_802DED94(arg0);
            return;
        }
    }
    (*(s8 *)((char *)(arg0) + 0x65)) = 0;
    func_802DCACC();
    func_802DED94(arg0);
}
