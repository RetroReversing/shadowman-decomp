/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80108CB8();                            /* extern */
s32 *func_8010EED0(s32, s32, s32 *, s32, s32); /* extern */
s32 func_801176C0(s32 *);                   /* extern */
s32 func_80118630(s32 *, u16);              /* extern */
s32 memcpy(s32 *, s32, u16, s32 *);     /* extern */
extern s32 D_8001E5AC;
extern s32 D_8004DA70;
extern s32 *D_8004DAD8;

void func_80108BB4(s32 arg0, u16 arg1) {
    s32 **__base_D_8004DAD8;
    s32 *temp_a1;
    s32 *temp_s0;
    s32 *var_a3;
    
    s32 *var_s1;

    __base_D_8004DAD8 = &D_8004DAD8;
    var_s1 = (*__base_D_8004DAD8);
    var_a3 = NULL;
    if (var_s1 != NULL) {
loop_2:
        if ((*(s32 *)((char *)(var_s1) + 4)) == arg0) {
            (*(u16 *)((char *)(var_s1) + 8)) = 2U;
            if ((*(u16 *)((char *)(var_s1) + 0xA)) != arg1) {
                (*(u16 *)((char *)(var_s1) + 0xA)) = arg1;
                temp_s0 = var_s1 + 0x10;
                memcpy(temp_s0, arg0, arg1, var_a3);
                func_80118630(temp_s0, arg1);
            }
            func_80108CB8();
            return;
        }
        if ((*(u16 *)((char *)(var_s1) + 8)) == 0) {
            var_a3 = var_s1;
        }
        var_s1 = (*(s32 **)((char *)(var_s1) + 0));
        if (var_s1 == NULL) {
            goto block_10;
        }
        goto loop_2;
    }
block_10:
    temp_a1 = (s8 *) var_a3 + 0x10;
    if (var_a3 == NULL) {
        temp_a1 = (*__base_D_8004DAD8);
        var_a3 = func_8010EED0(0, 0, &D_8004DA70, 1, 0x90);
        *var_a3 = temp_a1;
        (*__base_D_8004DAD8) = var_a3;
        D_8001E5AC += 1;
        temp_a1 = var_a3 + 0x10;
    }
    (*(s32 *)((char *)(var_a3) + 4)) = arg0;
    (*(s16 *)((char *)(var_a3) + 8)) = 2;
    (*(u16 *)((char *)(var_a3) + 0xA)) = arg1;
    memcpy(temp_a1, arg0, arg1, var_a3);
    func_801176C0(temp_a1);
}
