typedef struct { char pad[0x30]; u8 flag; char pad2[3]; } E34;
s16 func_8023648C(s32);
extern E34 D_209890[];
extern s32 D_8005E9FC;
extern s32 D_80074BB0;

void func_802D175C(s16 *arg0, s32 arg1) {
    s16 temp_s2;
    s16 temp_v0;

    do {
        arg0[0] = func_8023648C(D_8005E9FC);
        arg0[1] = func_8023648C(D_8005E9FC);
        temp_s2 = func_8023648C(D_8005E9FC);
        temp_v0 = func_8023648C(D_8005E9FC);
        if (D_209890[D_80074BB0].flag & 1) {
            arg0[2] = temp_v0;
        } else {
            arg0[2] = temp_s2;
        }
        arg0 += 3;
        arg1 -= 1;
    } while (arg1 != 0);
}
