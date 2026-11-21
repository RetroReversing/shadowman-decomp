/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void func_802398C8(void *arg0, void *arg1, void *arg2) {
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_fv0;
    s32 temp_v0;
    u32 var_a3;
    u32 var_t0;
    void *var_a0;
    void *var_t1;
    void *var_t2;
    void *var_v1;

    var_a0 = arg0;
    var_t0 = 0;
    var_t2 = var_a0;
    var_t1 = arg2;
    do {
        var_a3 = 0;
        var_v1 = arg1;
        temp_ft0 = (*(f32 *)((char *)(var_a0) + 0));
        temp_ft0f = (*(f32 *)((char *)(var_a0) + 4));
        temp_ft1 = (*(f32 *)((char *)(var_a0) + 8));
loop_2:
        temp_v0 = var_a3 + var_t0;
        var_a3 += 1;
        *(s32 *)((temp_v0 * 4) + arg2) = (temp_ft0 * (*(f32 *)((char *)(var_v1) + 0))) + (temp_ft0f * (*(f32 *)((char *)(var_v1) + 0xC))) + (temp_ft1 * (*(f32 *)((char *)(var_v1) + 0x18)));
        var_v1 += 4;
        if (var_a3 < 3U) {
            goto loop_2;
        }
        var_t0 += 3;
        var_a0 += 0xC;
        temp_fv0 = (temp_ft0 * (*(f32 *)((char *)(arg1) + 0x24))) + (temp_ft0f * (*(f32 *)((char *)(arg1) + 0x28))) + (temp_ft1 * (*(f32 *)((char *)(arg1) + 0x2C))) + (*(f32 *)((char *)(var_t2) + 0x24));
        var_t2 += 4;
        (*(f32 *)((char *)(var_t1) + 0x24)) = temp_fv0;
        var_t1 += 4;
    } while (var_t0 < 9U);
}
