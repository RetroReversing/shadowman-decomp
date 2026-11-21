/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_801132A0(f32);
f32 func_80113BE0(f32);
s32 func_8023ECC0();
s32 func_8023F210();

void func_8023E928(f32 *arg0, void *arg1) {
    f32 sp10[4];
    f32 sp20[4];
    f32 sp30[4];
    register f32 temp_fs0;

    sp20[0] = func_801132A0((*(f32 *)((char *)(arg1) + 0)) * temp_fs0);
    temp_fs0 = *(f32 *)0x202634;
    sp20[1] = func_80113BE0((*(f32 *)((char *)(arg1) + 0)) * temp_fs0);
    sp20[2] = 0;
    sp20[3] = 0;
    sp30[0] = func_801132A0((*(f32 *)((char *)(arg1) + 4)) * temp_fs0);
    sp30[1] = 0;
    sp30[2] = func_80113BE0((*(f32 *)((char *)(arg1) + 4)) * temp_fs0);
    sp30[3] = 0;
    sp10[0] = func_801132A0((*(f32 *)((char *)(arg1) + 8)) * temp_fs0);
    sp10[1] = 0;
    sp10[2] = 0;
    sp10[3] = func_80113BE0((*(f32 *)((char *)(arg1) + 8)) * temp_fs0);
    func_8023F210(sp20);
    func_8023F210(sp10);
    func_8023F210(sp30);
    func_8023ECC0(sp30, sp20, arg0);
    func_8023F210(arg0);
}
