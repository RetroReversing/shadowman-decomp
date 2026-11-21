/* adapted from similar verified C in alEvtqNextEvent in PENNY RACERS (matched), with its names changed by decompdecomp */
s32 func_80118570(s32);
s32 func_800382AC(void *, void *);
s32 func_800382CC(void *);
s32 func_80038390(void *, s16 *, s32);

s32 func_8010F90C(void *arg0, s16 *arg1) {
    s32 temp_s3;
    s32 var_s0;
    s32 *temp_s0;

    temp_s3 = func_80118570(1);
    temp_s0 = *(s32 **)((s8 *)arg0 + 8);
    if (temp_s0 != NULL) {
        func_800382CC(temp_s0);
        func_80038390((s8 *)temp_s0 + 0xC, arg1, 0x10);
        func_800382AC(temp_s0, arg0);
        var_s0 = *(s32 *)((s8 *)temp_s0 + 8);
    } else {
        *arg1 = -1;
        var_s0 = 0;
    }
    func_80118570(temp_s3);
    return var_s0;
}
