/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_800755E8;
s32 func_8022C730();
s32 func_8026E2F4();
s32 func_80295D78();
s32 func_802965A0();
extern s32 D_80030E54;
extern char D_80044EA0[];
extern s32 D_8004563C;
extern char D_80045640[];
extern char D_8004566C[];
extern char D_80075568[];

void func_802BF468(s32 arg0) {
    char *__base_D_8004566C;
    s16 temp_s0;
    s16 var_s1;
    s16 var_v0;
    s32 var_v1;

    temp_s0 = func_8026E2F4(0x40) != 0;
    var_s1 = temp_s0;
    if (func_8026E2F4(0x41) != 0) {
        var_s1 = temp_s0 | 2;
    }
    if (func_8026E2F4(0x42) != 0) {
        var_s1 |= 4;
    }
    if (func_8026E2F4(0x43) != 0) {
        var_s1 |= 8;
    }
    var_v1 = 0;
    if (!(arg0 & 0xFF)) {
        if (var_s1 != D_80030E54) {
            if ((*(s16 *)((char *)(((D_8004563C * 6) + D_80045640)) + 4)) == -1) {
                var_v1 = 0;
                goto block_10;
            }
        }
    } else {
block_10:
        var_v0 = 0;
__base_D_8004566C = D_8004566C;
    for (;;) {
        if (*((var_v0) + __base_D_8004566C) != var_s1) {
            var_v0 = var_v1;
            var_v1 += 1;
            if ((u32) (var_v1 & 0xFFFF) >= 8U) {

            } else {
                continue;
            }
        }
        break;
    }
        D_800755E8 = func_8022C730(*(((s32) (var_v1 << 0x10) >> 0xF) + D_80044EA0), D_800755E8, 0);
    }
    D_80030E54 = (s32) var_s1;
    func_802965A0();
    func_80295D78();
}
