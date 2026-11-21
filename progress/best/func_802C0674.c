/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802BE3D8();
s32 func_802BFE08(void *arg0);
s32 func_802C0710();
s32 func_802C0734();
s32 func_802D0850();
extern char D_2181EC[];
extern s32 D_8002D420;
extern s32 D_8002D424;
extern s32 D_800458F0;

void func_802C0674(void *arg0) {
    s32 *__base_D_8002D420;
    s16 temp_v1;
    unsigned int temp_s2;

    temp_v1 = (*(s16 *)((char *)(arg0) + 0x16));
    if (temp_v1 != 1) {
        if (temp_v1 >= 2) {
            if (temp_v1 != 2) {
                func_802C0734();
                return;
            }
            func_802BE3D8();
            return;
        }
        if (temp_v1 != 0) {
            func_802C0734(D_2181EC);
            return;
        }
        func_802D0850(D_2181EC);
        func_802BFE08(arg0);
        func_802C0734();
        return;
    }
    __base_D_8002D420 = &D_8002D420;
    temp_s2 = (*__base_D_8002D420);
    if (D_800458F0 != 0) {
        func_802C0710(__base_D_8002D420);
        return;
    }
    D_8002D424 = 0;
    (*__base_D_8002D420) = 0;
    func_802BE3D8(__base_D_8002D420);
    (*(&D_8002D420)) = temp_s2;
    func_802C0734();
}
