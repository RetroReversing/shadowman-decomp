/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80104C50();
s32 func_80104DE0();
s32 func_80104E4C();
u32 func_80104EA4();
s32 func_80108AAC();
s32 func_8011BFE0();
s16 func_80228FA0();
s16 func_80228FE0();
s32 func_80229208();
u32 func_802364D0();
s32 func_8026D7D0();
extern char D_201450[];
extern s32 D_8002D170;
extern s32 D_8002D174;
extern char D_8004AE40[];
extern s32 D_8004AEB4;
extern u8 D_8007DB7A;

void func_80229178(s32 arg0, void *arg1) {
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_v0_2;
    u32 temp_s0;
    unsigned int temp_s5;
    u32 temp_v0_3;
    u8 temp_a0;
    void *var_s2;

    var_s2 = arg1;
    temp_v0 = func_80228FE0(var_s2, D_201450);
    temp_a1 = temp_v0 & 0xFFFF;
    if (temp_a1 != 0xFFFF) {
        temp_v0_2 = func_80104C50(D_8004AE40, temp_a1);
        if (func_802364D0(temp_v0_2) == 0x46464952) {
            temp_s5 = func_802364D0(temp_v0_2);
            func_802364D0(temp_v0_2);
            if (func_80104EA4(temp_v0_2) < temp_s5) {
                temp_s0 = func_802364D0(temp_v0_2);
                temp_v0_3 = func_802364D0(temp_v0_2);
                if (temp_s0 == 0x454D4954) {
                    func_802364D0(temp_v0_2);
                    func_80229208();
                    return;
                }
                func_80229208();
                func_80104E4C(temp_v0_2, temp_v0_3, 1);
                return;
            }
        }
        func_80104DE0(temp_v0_2);
        D_8002D170 = -1;
        D_8002D174 = 0;
        D_8004AEB4 = 0;
        func_8011BFE0(var_s2);
        if ((*(u8 *)((char *)(var_s2) + 0)) == 0x64) {
            temp_a0 = (*(u8 *)((char *)(var_s2) + 1));
            if ((temp_a0 == 0x61) && ((*(u8 *)((char *)(var_s2) + 2)) == 0x74) && ((*(u8 *)((char *)(var_s2) + 3)) == temp_a0) && ((*(u8 *)((char *)(var_s2) + 4)) == 0x5C)) {
                var_s2 += 5;
            }
        }
        func_8026D7D0(var_s2);
        if (D_8007DB7A == 0) {
            func_80108AAC(func_80228FA0(temp_v0), 0x3F, 0x7FFD);
        }
    }
}
