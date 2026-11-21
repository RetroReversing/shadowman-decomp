/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8011CA50();
s32 func_8011D040();

void func_801193E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_ret;
    s32 temp_ret_2;

    temp_ret = func_8011CA50(arg2, arg3, arg4);
    (*(s32 *)((char *)(arg0) + 0)) = temp_ret;
    temp_ret_2 = func_8011D040(arg2, arg1, arg3, arg4);
    (*(u32 *)((char *)(arg0) + 4)) = (u32) (u64) temp_ret;
    (*(s32 *)((char *)(arg0) + 8)) = temp_ret_2;
    (*(u32 *)((char *)(arg0) + 0xC)) = (u32) (u64) temp_ret_2;
}
