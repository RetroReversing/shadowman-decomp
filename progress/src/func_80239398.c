void func_802390EC(s32 a, s32 b, s32 c, s32 d, s32 e);

void func_80239398(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    while (*arg0 != 0) {
        arg0 = (s32 *)*arg0;
    }
    func_802390EC((s32)arg0, arg1, arg2, arg3, arg4);
}
