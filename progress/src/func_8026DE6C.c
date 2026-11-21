s32 func_8023646C(s32);
s32 func_8023648C(s32);

void func_8026DE6C(s32 arg0, s32 arg1) {
    s16 i;
    s16 j;

    for (i = arg1 - 1; i != -1; i--) {
        func_8023648C(arg0);
        func_8023646C(arg0);
        for (j = func_8023646C(arg0) - 1; j != -1; j--) {
            func_8023648C(arg0);
        }
        func_8023646C(arg0);
        func_8023646C(arg0);
    }
}
