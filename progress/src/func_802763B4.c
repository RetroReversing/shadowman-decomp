s32 func_802D0B28(s32, s32, s32);
extern s32 D_8002D2B4;
extern s32 D_8005EA14;
extern s8 D_800755D9;

void func_802763B4(s16 arg0) {
    if ((func_802D0B28(D_8005EA14, arg0, 0) == 0) && (D_800755D9 != -1) && (func_802D0B28(D_8005EA14, D_800755D9, 0) == 0)) {
        func_802D0B28(D_8005EA14, D_8002D2B4, 0);
    }
}
