/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80113AD0();                                /* extern */
f32 func_8022EBE8(f32);                             /* extern */
s32 func_8029B14C(void *, f32 *, f32, f32, s32); /* extern */
s32 func_802A6448(void *);                      /* extern */
s32 func_802A6808();                            /* extern */
extern s32 D_8007DB88;

void func_802AD310(void *arg0) {
    f32 sp18[3];
    f32 temp_fs0;
    f32 temp_fv0;
    register u32 var_s0;
    unsigned var_s0_2;
    void *temp_v0;

    func_802A6808();
    temp_fv0 = (*(f32 *)((char *)(arg0) + 0x30)) - (*(f32 *)((char *)(&D_8007DB88) + 4));
    (*(f32 *)((char *)(arg0) + 0x30)) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        (*(f32 *)((char *)(arg0) + 0x30)) = 0.0f;
    }
    var_s0 = 0;
    do {/*__repair_loop_weight*/do {
        var_s0 += 1;} while (0);
        func_8029B14C(arg0 + 0x54, arg0 + 0x6C, 0.85f, 15.0f, (func_80113AD0() % 2) + 3);
    } while (var_s0 < 3U);
    temp_v0 = (*(void **)((char *)(arg0) + 0xC));
    if (temp_v0 != NULL) {
        var_s0_2 = 0;
        if ((((*(f32 *)((char *)(temp_v0) + 0)) * (*(f32 *)((char *)(arg0) + 0x54))) + ((*(f32 *)((char *)(temp_v0) + 4)) * (*(f32 *)((char *)(arg0) + 0x58))) + ((*(f32 *)((char *)(temp_v0) + 8)) * (*(f32 *)((char *)(arg0) + 0x5C))) + (*(f32 *)((char *)(temp_v0) + 0xC))) > 0.0f) {
            temp_fs0 = *(f32 *)0x216664;
            (*(f32 *)((char *)(arg0) + 0x30)) = 0.0f;
            do {
                sp18[0] = func_8022EBE8(temp_fs0);
                sp18[1] = func_8022EBE8(temp_fs0);
                sp18[2] = func_8022EBE8(temp_fs0);
                func_8029B14C(arg0 + 0x54, sp18, 0.95f, 15.0f, (func_80113AD0() % 2) + 3);
                var_s0_2 += 1;
            } while (var_s0_2 < 0x20U);
        }
    }
    if ((*(f32 *)((char *)(arg0) + 0x30)) <= 0.0f) {
        func_802A6448(arg0);
    }
}
