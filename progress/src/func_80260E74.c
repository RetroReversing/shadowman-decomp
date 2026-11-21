/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80260B50();                                /* extern */
s32 func_802612A8();                            /* extern */
s32 func_80261408();                                /* extern */
extern s32 D_8002D490;
extern s32 D_8002D494;
extern s32 D_8002D498;
extern s32 D_8002E0A0;
extern s32 D_8002E0A4;
extern s32 D_80030C50;
extern s32 D_80030C54;
extern s32 D_80030C58;
extern s32 D_80030C5C;

s32 func_80260E74(void) {
    s32 var_v0;

    D_80030C50 = 0;
    D_80030C54 = 0;
    D_80030C58 = 0;
    D_80030C5C = 0;
    D_8002D490 = 0;
    D_8002D494 = 0;
    D_8002D498 = 0;
    D_8002E0A0 = 0;
    D_8002E0A4 = 0;
    var_v0 = 0;
    func_802612A8();
    if (func_80260B50() != 0) {
        var_v0 = func_80261408() != 0;
    }
    return var_v0;
}
